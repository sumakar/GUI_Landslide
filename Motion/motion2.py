import imutils
import numpy as np
import cv2
import time
import datetime
from sms import sms
import pyrebase

# convert 32 bit frame to a 8 bit frame and show it like an 8 bit frame
# build a classifier
# run GUI
# Debug GUI
# study signals

config = {
  "apiKey": "apiKey",
  "authDomain": "drdoapp.firebaseapp.com",
  "databaseURL": "https://drdoapp.firebaseio.com/",
  "storageBucket": "drdoapp.appspot.com"
}

firebase = pyrebase.initialize_app(config)
db = firebase.database();
db.child("super").child("")
storage =firebase.storage();




def timestamp_4path():
    ts = time.time();
    st = datetime.datetime.fromtimestamp(ts).strftime('%Y_%m_%d__%H_%M_%S.jpg');
    return st

def main():
    #cap = cv2.VideoCapture(0);
    #cap = cv2.VideoCapture('/home/pi/TestVideos/TESTVID.mp4');
    #cap = cv2.VideoCapture('/home/pi/TestVideos/HanogiMataMandi.mp4');
    cap = cv2.VideoCapture('/home/pi/TestVideos/NH21MandiKulluHighway.mp4');

    ret, Prev_frame1 = cap.read()
    a = Prev_frame1.shape
    a1 = a[0], a[1], 1
    accumulate_frame = np.zeros(a1, np.uint32)
    Prev_frame = cv2.cvtColor(Prev_frame1, cv2.COLOR_BGR2GRAY);
    result = Prev_frame;

    d1 = Prev_frame;
    d2 = Prev_frame;
    i = 0;
    cXo = 0;
    cYo = 0;
    cX = 0;
    cY = 0
    Slope_list = [];
    X_list = [];
    Y_list = []
    landslide_counter = 0;

    # while(cap.isOpened()):
    while 1:
        ret1, Current_frame1 = cap.read()
        ret2, Next_frame1 = cap.read()

        if (ret1 == False):
            break

        if cv2.waitKey(30) & 0xFF == ord('q'):
            break

        Current_frame = cv2.cvtColor(Current_frame1, cv2.COLOR_BGR2GRAY)
        Next_frame = cv2.cvtColor(Next_frame1, cv2.COLOR_BGR2GRAY)

        cv2.absdiff(Prev_frame, Next_frame, d1);
        cv2.absdiff(Current_frame, Next_frame, d2);

        cv2.bitwise_and(d1, d2, result);

        # use threshold of 15 for TESTVID of praveen sir for testing your face use 35
        i, result = cv2.threshold(result, 15, 255, cv2.THRESH_BINARY)  # threshold value and result is returned

        m = cv2.moments(result, True)
        a = cv2.mean(result);
        # print(cv2.mean(result)[0])

        if ((m["m00"] > 0) & (a[0] > 0.3)):
            # print(m["m10"] / m["m00"], m["m01"] / m["m00"]);
            cX = int(m["m10"] / m["m00"]);
            cY = int(m["m01"] / m["m00"]);
            cv2.circle(Current_frame1, (cX, cY), 7, (255, 255, 255), -1)
            cv2.circle(result, (cX, cY), 7, (255, 255, 255), -1)
            # print landsilde_counter
            # print(cv2.mean(result)[0])
            # print cX,cXo,cY,cYo
            # print (cYo-cY)/(cXo-cX)
            if (((cXo - cX) != 0) and (cYo - cY) != 0):
                # cv2.imshow("cf", Current_frame1);

                if (landslide_counter == 1):
                    nm="media/olandslide" + timestamp_4path();
                    cv2.imwrite(nm, Current_frame)
                    #storage.child("images/exam1.jpg").put(nm);
                    storage.child(nm).put(nm);

                if (landslide_counter == 1) or (landslide_counter == 10) or (landslide_counter == 15):
                    X_list.append(cX)
                    Y_list.append(cY)
                landslide_counter += 1

            if (landslide_counter > 25):  # landslide counter =10 for testvid and 25 for face
                nm="media/landslide" + timestamp_4path()
                cv2.imwrite(nm, Current_frame);
                #storage.child("images/exam.jpg").put(nm);
                storage.child(nm).put(nm);
                print nm
                

                if ((X_list[2] > X_list[0]) and (Y_list[2] > Y_list[0])):
                    print "R2L Landslide"
                if ((X_list[0] > X_list[2]) and (Y_list[2] > Y_list[0])):
                    print "L2R Landslide"
                # time.sleep(3)
                sms('Landslide detected and pic uploaded','9899781689')
                sms('Landslide detected and pic uploaded','9654772898')
                landslide_counter = 0;

        cXo = cX;
        cYo = cY;
        cv2.imshow("sum", result);
        cv2.imshow("sum1 ", Current_frame1);



if __name__ == '__main__':
    main()

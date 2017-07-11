#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<iostream>
#include<QMessageBox>
#include<QApplication>
#include<QSlider>
#include<QPixmap>
#include<QMouseEvent>

#include<logger.h>
#include <ctime>
#include "/usr/local/include/opencv2/opencv.hpp"
#include "/usr/local/include/opencv2/highgui/highgui.hpp"
#include "/usr/local/include/opencv/cv.h"

using namespace std;
using namespace cv;

VideoCapture cap("/home/sumakar/gui trials/GUI_video/jl.mp4");

//VideoCapture cap1("/home/sumakar/gui trials/GUI_video/jl.mp4");
Mat frame,Q_frame,cap1_frame;
QMouseEvent *event_in_label;
bool checked_record;
int flag_clk=0,coun,destroy_selection_window_flag=0;
int flag_VALUE_CHANGED=0;
Mat frame2 ;
cv::vector<cv::Point> pointList,ptlst2;
Point pt,pt1,pt2,ptd;


string path_to_save ="/home/sumakar/saved_videos/" ;
int unused_variable=0;

int frame_width=   cap.get(CV_CAP_PROP_FRAME_WIDTH);
int frame_height=   cap.get(CV_CAP_PROP_FRAME_HEIGHT);



void time_stamp()
{
    time_t rawtime;
    struct tm * timeinfo;
    char buffer[80];
    time (&rawtime);
    timeinfo = localtime(&rawtime);
    strftime(buffer,sizeof(buffer),"%d_%m_%Y_%I_%M_%S.avi",timeinfo);
    string sec_path_save(buffer);
    path_to_save=path_to_save+sec_path_save;


}
void CallBackFunc(int event, int x, int y, int flags, void* userdata)
{
     if  ( event == EVENT_LBUTTONDOWN )
     {
         // cout << "Left button of the mouse is clicked - position (" << x << ", " << y << ")" << endl;

        if(flag_clk==0)
        { //cout<<"  *** "<<pointList.size()<<endl;
            pt.x=x;
            pt.y=y;
            coun++;
            pointList.push_back(pt);

        }
     }
     else if  ( event == EVENT_RBUTTONDOWN )
     {
          destroy_selection_window_flag=1;
         // cout << "Right button of the mouse is clicked - position (" << x << ", " << y << ")" << endl;

     }
     else if  ( event == EVENT_MBUTTONDOWN )
     {
      //    cout << "Middle button of the mouse is clicked - position (" << x << ", " << y << ")" << endl;
     flag_clk=1;
     }
     else if ( event == EVENT_MOUSEMOVE )
     {
    //          cout << "Mouse move over the window - position (" << x << ", " << y << ")" << endl;

     }
}
//For FreeStylePolyGon
void CallBackFunc2(int event, int x, int y, int flags, void* userdata)
{
     if  ( event == EVENT_LBUTTONDOWN )
     {
          //cout << "Left button of the mouse is clicked - position (" << x << ", " << y << ")" << endl;

      flag_VALUE_CHANGED++;

     }
     else if  ( event == EVENT_RBUTTONDOWN )
     {
   destroy_selection_window_flag=2;
          //cout << "Right button of the mouse is clicked - position (" << x << ", " << y << ")" << endl;

     }
     else if  ( event == EVENT_MBUTTONDOWN )
     {
      //    cout << "Middle button of the mouse is clicked - position (" << x << ", " << y << ")" << endl;
     flag_clk=1;
     }
     else if ( event == EVENT_MOUSEMOVE )
     {
    //          cout << "Mouse move over the window - position (" << x << ", " << y << ")" << endl;
         if(flag_VALUE_CHANGED==1)
         {
        ptd.x=x;
        ptd.y=y;
        ptlst2.push_back(ptd);
     }
         }
}

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{

    ui->setupUi(this);
    for(int i=0;i<=10;i++)
    {
     ui->sizefilter_comboBox->addItem(QString::number(i));
    }
   // ui->Sizefilter_horizontalSlider->setRange(2,100);
    ui->pixel_spinBox->setRange(2,100);
  //  ui->pixel_spinBox->setSuffix("Pixel");
    ui->label->setStyleSheet("font: 18pt;");
    ui->label->setAlignment(Qt::AlignCenter);

    ui->label->setText("<i><u><b>Video Analyser Beta</b></u></i>");
    ui->record_pushButton->setCheckable(true);

    ui->webcam_indicator_label->setStyleSheet("color: red;");
    ui->webcam_indicator_label->setText("Not Processing");


    ui->recording_indicator_label->setStyleSheet("color: red");
    ui->recording_indicator_label->setText("Not Recording");

   time_stamp();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::FreeStylePolygon()
{
    frame2= Mat::zeros(frame.rows,frame.cols, CV_8UC3);
    namedWindow("Selection Frame",CV_WINDOW_AUTOSIZE);
    coun=0;

    while(1)
   {

       imshow("Selection Frame",frame);
     for(int j=0;j<ptlst2.size();j++)
     {
         circle( frame, ptlst2[j], 2.0, Scalar( 255, 0, 0 ), -1, 8 );
          circle( frame2, ptlst2[j], 2.0, Scalar( 255, 255, 255 ), -1, 8 );
         if(flag_VALUE_CHANGED==2)
         {int a=ptlst2.size();
             line( frame, ptlst2[a-1], ptlst2[0], Scalar( 255, 0, 0 ),  2, 8 );
             line( frame2, ptlst2[a-1], ptlst2[0], Scalar( 255, 255, 255 ),  2, 8 );
         }

     imshow("Selection Frame",frame);
     }
        setMouseCallback
                ("Selection Frame", CallBackFunc2, NULL);
        waitKey(30);
        if(destroy_selection_window_flag==2)
        {
            destroyWindow("Selection Frame");
            break;
        }

   }
}

void MainWindow::Polygon()
{
frame2= Mat::zeros(frame.rows,frame.cols, CV_8UC3);
  namedWindow("Selection Frame",CV_WINDOW_AUTOSIZE);
   while(1)
  {

    imshow("Selection Frame",frame);

        if(pointList.size()>=2)
        {    for(int i=1;i<coun;i++)
              {
                pt1= pointList[i-1];
                pt2= pointList[i];
                line( frame, pt1, pt2, Scalar( 255,255 , 255 ),  2, 8 );
               }

                line( frame, pointList[coun-1], pointList[0], Scalar( 255, 255,255 ),  2, 8 );
                imshow("Selection Frame",frame);
      }
    setMouseCallback("Selection Frame", CallBackFunc, NULL);
    waitKey(30);

       if(destroy_selection_window_flag==1)
       {
           destroyWindow("Selection Frame");
           break;
       }
  }
   if(pointList.size()>=2)
   {    for(int i=1;i<coun;i++)
         {
           pt1= pointList[i-1];
           pt2= pointList[i];
           line( frame2, pt1, pt2, Scalar( 255, 255, 255 ),  2, 8 );
          }

           line( frame2, pointList[coun-1], pointList[0], Scalar( 255, 255, 255 ),  2, 8 );

 }

  /* for(int i=0;i<=pointList.size();i++)
             {int x,y;
                 pt1= pointList[i];
x=pt1.x;y=pt1.y;
                 std::cout<<"coun = "<<coun<<"i "<<i<<" x= "<<x<<" y= "<<y<<endl;

   }*/
}
/*
 * used while making
 *
 * QMessageBox::information(0,"Error","No further code written");
*/
void MainWindow::on_Run_pushButton_clicked()
{
    if(ui->Polygon_radioButton->isChecked())
    {   Polygon();    }

    if(ui->Freestyle_radioButton->isChecked())
    {   FreeStylePolygon();    }

}

/*
void MainWindow::on_Sizefilter_horizontalSlider_sliderMoved(int position)
{   QString label_of_size="Filter Size :";

    label_of_size=label_of_size+QString::number(position);
    slider_position=position;
    ui->Sizefilter_label->setText(label_of_size);
}
*/


void MainWindow::on_Process_pushButton_clicked()
{

    cap.open(0);
    if(!cap.isOpened())
           {      //   cout<<"camera or video not found /n";
    }

//imshow("Selection Frame",frame);
VideoWriter video(path_to_save,CV_FOURCC('M','J','P','G'),30, Size(frame_width,frame_height),true);
     while(1)
   {  bool bSuccess=cap.read(frame);
                  if((!bSuccess))
                  {break;}

            ui->webcam_indicator_label->setStyleSheet("color: green");
            ui->webcam_indicator_label->setText("Processing");

            imshow("Selection Frame",frame);

            if(checked_record)
            {
                video.write(frame);
            }

            //To select ROI
            frame=frame+frame2;

            //destroy_selection_window_flag=0;
            //Frame 1 definitions i.e stream
            cvtColor(frame,Q_frame,CV_BGR2RGB);
            QImage image1= QImage((uchar*) Q_frame.data, Q_frame.cols,Q_frame.rows, Q_frame.step, QImage::Format_RGB888);
            ui->stream_label->setPixmap(QPixmap::fromImage(image1));
            ui->stream_label->setScaledContents( true );
            ui->stream_label->setSizePolicy( QSizePolicy::Ignored, QSizePolicy::Ignored );

            //Frame 2 definitions i.e processed
            cvtColor(frame,Q_frame,CV_BGR2GRAY);
            QImage image2= QImage((uchar*) Q_frame.data, Q_frame.cols,Q_frame.rows, Q_frame.step, QImage::Format_Grayscale8);
            ui->Processed_stream_label->setPixmap(QPixmap::fromImage(image2));
            ui->Processed_stream_label->setScaledContents( true );
            ui->Processed_stream_label->setSizePolicy( QSizePolicy::Ignored, QSizePolicy::Ignored );

            //Frame  definitions summary1
            cvtColor(frame,Q_frame,CV_BGR2GRAY);
            QImage image3= QImage((uchar*) Q_frame.data, Q_frame.cols,Q_frame.rows, Q_frame.step, QImage::Format_Grayscale8);
            ui->summary_label->setPixmap(QPixmap::fromImage(image3));
            ui->summary_label->setScaledContents( true );
            ui->summary_label->setSizePolicy( QSizePolicy::Ignored, QSizePolicy::Ignored );

            cvtColor(frame,Q_frame,CV_BGR2RGB);
            QImage image4= QImage((uchar*) Q_frame.data, Q_frame.cols,Q_frame.rows, Q_frame.step, QImage::Format_RGBX8888);
            ui->summary_label2->setPixmap(QPixmap::fromImage(image4));
            ui->summary_label2->setScaledContents( true );
            ui->summary_label2->setSizePolicy( QSizePolicy::Ignored, QSizePolicy::Ignored );

            //cout<<"frame should have been written"<<endl;
            waitKey(33);


  }

}
void MainWindow::on_Stopstream_pushButton_clicked()
{
    ui->webcam_indicator_label->setStyleSheet("color: red");
    ui->webcam_indicator_label->setText("Not Processing");

    cap.release();
   /*
   QString fileName = "/home/sumakar/'gui trials'/abc.txt";
   Logger *logger = new Logger(this, fileName, editor);
   logger.write("trial\n");
   logger.write("\n");
   */
   ui->plainTextEdit->appendPlainText("*************************************************");
    ui->plainTextEdit->appendPlainText("DTRL");
                                                        //+QString::number
    ui->plainTextEdit->appendPlainText("Slider value :"+(ui->sizefilter_comboBox->currentText()));
    ui->plainTextEdit->appendPlainText("Pixesl Size :"+QString::number(ui->pixel_spinBox->value())+" Pixels");

    ui->plainTextEdit->appendPlainText(" \nPoints Used in PolyGon :\n");
/*
   logger.write("*************************************************");
   logger.write("DTRL");
   logger.write("Slider value :"+(ui->sizefilter_comboBox->currentText()));
   logger.write("Pixesl Size :"+QString::number(ui->pixel_spinBox->value())+" Pixels");
   logger.write((" \nPoints Used in PolyGon :\n");;
*/
    if(pointList.size()!=0)
    {

     for(int i=0;i<=pointList.size();i++)
               {int x,y;
                   pt1= pointList[i];
                    x=pt1.x;y=pt1.y;
            ui->plainTextEdit->appendPlainText( QString::number(i+1)+QString(" x = ")+QString::number(x)+QString(" y = ")+QString::number(y));
            //logger.write( QString::number(i+1)+QString(" x = ")+QString::number(x)+QString(" y = ")+QString::number(y));

     }
    }
    ui->plainTextEdit->appendPlainText(" \nPoints Used in FreeStyle PolyGon :\n");
   // logger.write(" \nPoints Used in FreeStyle PolyGon :\n");


    if(ptlst2.size()!=0)
     {
         for(int i=0;i<=ptlst2.size();i++)
                   {int x,y;
                       pt1= ptlst2[i];
                        x=pt1.x;y=pt1.y;
                ui->plainTextEdit->appendPlainText( QString::number(i+1)+QString(" x = ")+QString::number(x)+QString(" y = ")+QString::number(y));
               // logger.write( QString::number(i+1)+QString(" x = ")+QString::number(x)+QString(" y = ")+QString::number(y));

         }
     }
     ui->plainTextEdit->appendPlainText("*************************************************");
     ui->plainTextEdit->appendPlainText("#################################################");
    ui->plainTextEdit->appendHtml("www.tinyurl.com/sum1dtrl");

    ui->plainTextEdit->appendPlainText("#################################################");
/*
    logger.write("*************************************************\n");
    logger.write("#################################################\n");
    logger.write("www.tinyurl.com/sum1dtrl\n");
    logger.write("#################################################\n");
*/
}
void MainWindow::mouseMoveEvent(QMouseEvent *event)
{   cout<<"From main window: ";
    if(event->MouseMove)
    {     event_in_label->pos()=event->pos();

        cout<<event->x()<<"  "<<event->y()<<endl;
    }
}

void MainWindow::on_set_pushButton_clicked()
{                                                   //QString::number
    ui->plainTextEdit->appendPlainText("Slider value :"+(ui->sizefilter_comboBox->currentText()));
    ui->plainTextEdit->appendPlainText("Pixesl Size :"+QString::number(ui->pixel_spinBox->value())+" Pixels");

   /* QString print_pixel_val= ui->Dpixel_label->text();
    int print_pixel_val2= ui->Dpixel_label->text().toInt();

    cout<<"SLider position ="<<slider_position<<"Line edit of pixel values"<<(print_pixel_val2)<<endl;
*/
}
/*void QLabel::mouseMoveEvent(QMouseEvent *ev)
{   cout<<"From label window: ";
    if(ev->MouseMove)
    {         cout<<ev->x()<<"  "<<ev->y()<<endl;
    }
}


also used this somewhere
                //QPoint mappedPos = ui->stream_label->mapFromParent(ui,event_in_label->pos());
                        //(mainWindow, mouseEvent->pos());
                //cout<<event_in_label->x()<<"  "<<event_in_label->y()<<endl;

*/

void MainWindow::on_Clear_ROI_pushButton_clicked()
{

    frame2= Mat::zeros(frame.rows,frame.cols, CV_8UC3);
}


void MainWindow::on_record_pushButton_toggled(bool checked)
{
    if(checked)
    { checked_record=true;

                ui->recording_indicator_label->setStyleSheet("color: green");
                ui->recording_indicator_label->setText("Recording");

        //video.write(frame);
    }
    if(!checked)
    {checked_record=false;

        ui->recording_indicator_label->setStyleSheet("color: red");
        ui->recording_indicator_label->setText("Not Recording");
        //do nothing
    }

}



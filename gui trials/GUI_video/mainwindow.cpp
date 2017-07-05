#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<iostream>
#include<QMessageBox>
#include<QApplication>
#include<QSlider>
#include<QPixmap>
#include "/usr/local/include/opencv2/opencv.hpp"
#include "/usr/local/include/opencv2/highgui/highgui.hpp"
#include "/usr/local/include/opencv/cv.h"

using namespace std;
using namespace cv;

VideoCapture cap(0);
Mat frame,Q_frame;



MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_Run_pushButton_clicked()
{
    if(ui->Polygon_radioButton->isChecked())
    {
        cout<<"Polygon has been clicked "<<endl;
        QMessageBox::information(0,"Error","No further code written");
    }
    if(ui->Freestyle_radioButton->isChecked())
        {
        cout<<"Freestyle has been clicked"<<endl;
    QMessageBox::information(0,"Error","No further code written");
    }
}


void MainWindow::on_Sizefilter_horizontalSlider_sliderMoved(int position)
{   QString label_of_size="Filter Size :";

    ui->Sizefilter_horizontalSlider->setRange(2,100);
    //cout<<ui->Sizefilter_horizontalSlider->value()<<"  "<<position<<endl;
    label_of_size=label_of_size+QString::number(position);

    ui->Sizefilter_label->setText(label_of_size);
}

void MainWindow::on_lineEdit_editingFinished()
{
//cant detlete thsi    cout<<"Line edit of pixel values"<<ui->Dpixel_label->text().toInt();
}

void MainWindow::on_lineEdit_textEdited(const QString &arg1)
{
    cout<<"Line edit of pixel values"<<ui->Dpixel_label->text().toInt();
    //connect(ui->Dpixel_label,SIGNAL(windowIconTextChanged(QString)),
    //ui->Sizefilter_label,SLOT(ui->Sizefilter_label->setText(ui->Dpixel_label->text().toInt())));
}

void MainWindow::on_lineEdit_returnPressed()
{
    cout<<"Line edit of pixel values"<<ui->Dpixel_label->text().toInt();
}


void MainWindow::on_Process_pushButton_clicked()
{

    cap.open(0);
    if(!cap.isOpened())
           {      //   cout<<"camera or video not found /n";
    }


    while(1)
   {


      bool bSuccess=cap.read(frame);
                  if(!bSuccess)
                  {break;}

            //Frame 1 definitions
            cvtColor(frame,Q_frame,CV_BGR2RGB);
            QImage image1= QImage((uchar*) Q_frame.data, Q_frame.cols,Q_frame.rows, Q_frame.step, QImage::Format_RGB888);
            ui->stream_label->setPixmap(QPixmap::fromImage(image1));
            ui->stream_label->setScaledContents( true );
            ui->stream_label->setSizePolicy( QSizePolicy::Ignored, QSizePolicy::Ignored );

            //Frame 2 definitions
            cvtColor(frame,Q_frame,CV_BGR2GRAY);
            QImage image2= QImage((uchar*) Q_frame.data, Q_frame.cols,Q_frame.rows, Q_frame.step, QImage::Format_Grayscale8);
            ui->Processed_stream_label->setPixmap(QPixmap::fromImage(image2));
            ui->Processed_stream_label->setScaledContents( true );
            ui->Processed_stream_label->setSizePolicy( QSizePolicy::Ignored, QSizePolicy::Ignored );



      char c = (char)waitKey(33);
      if( c == 27 ) break;

  }

}

void MainWindow::on_Stopstream_pushButton_clicked()
{
    cap.release();
}

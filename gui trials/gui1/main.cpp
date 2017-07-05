#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include<QVideoPlayer>

int main (int argc, char *argv[])
{
  return 0;
}





/*
 *
 * #include <QApplication>
#include<QLabel>
#include<QPushButton>
#include<QHBoxLayout>
#include<QSlider>
#include<QSpinBox>


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);


    return a.exec();
}


 * 1.1
 * QPushButton *button =new QPushButton("YES");

    QObject::connect(button,SIGNAL(clicked()),&a,SLOT(quit()));
    button->show();

 * 1.2
 *   QWidget *mainWindow=new QWidget;

    mainWindow->setWindowTitle("How many days?");

    QSpinBox *spinner =new QSpinBox;
    QSlider *splider =new QSlider(Qt::Horizontal);
    spinner->setRange(1,30);
    splider->setRange(1,30);

    QObject::connect(spinner,SIGNAL(valueChanged(int)),splider,SLOT(setValue(int)));
    QObject::connect(splider,SIGNAL(valueChanged(int)),spinner,SLOT(setValue(int)));
    QLabel *lbl=new QLabel("Sumakar");

    spinner->setValue(10);
    QHBoxLayout *layout =new QHBoxLayout;
    layout->addWidget(lbl);
    layout->addWidget(splider);
    layout->addWidget(spinner);


    mainWindow->setLayout(layout);
    mainWindow->show();
   */

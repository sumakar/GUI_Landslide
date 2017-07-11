#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:


    void on_Run_pushButton_clicked();

//    void on_Sizefilter_horizontalSlider_sliderMoved(int position);

   // void on_lineEdit_editingFinished();

   // void on_lineEdit_returnPressed();

    //void on_lineEdit_textEdited(const QString &arg1);

    void on_Process_pushButton_clicked();


    void on_Stopstream_pushButton_clicked();
     void mouseMoveEvent(QMouseEvent *event);

     void on_set_pushButton_clicked();
     void FreeStylePolygon();
     void Polygon();

     void on_Clear_ROI_pushButton_clicked();

     void on_pixel_spinBox_valueChanged(int arg1);

     void on_record_pushButton_toggled(bool checked);

     void on_Process_pushButton_toggled(bool checked);

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H

/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QGroupBox *groupBox_4;
    QGroupBox *groupBox_3;
    QLabel *stream_label;
    QLabel *Processed_stream_label;
    QPushButton *Process_pushButton;
    QPushButton *Stopstream_pushButton;
    QPlainTextEdit *plainTextEdit;
    QGroupBox *groupBox_2;
    QLabel *Sizefilter_label;
    QSlider *Sizefilter_horizontalSlider;
    QLabel *pxl_label;
    QSpinBox *pixel_spinBox;
    QPushButton *set_pushButton;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QRadioButton *Polygon_radioButton;
    QRadioButton *Freestyle_radioButton;
    QPushButton *Run_pushButton;
    QPushButton *Clear_ROI_pushButton;
    QLabel *label;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(788, 510);
        MainWindow->setMouseTracking(true);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        groupBox_4 = new QGroupBox(centralWidget);
        groupBox_4->setObjectName(QStringLiteral("groupBox_4"));
        groupBox_3 = new QGroupBox(groupBox_4);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        groupBox_3->setGeometry(QRect(10, 40, 451, 251));
        stream_label = new QLabel(groupBox_3);
        stream_label->setObjectName(QStringLiteral("stream_label"));
        stream_label->setGeometry(QRect(20, 30, 181, 171));
        stream_label->setMouseTracking(false);
        stream_label->setAutoFillBackground(true);
        stream_label->setFrameShape(QFrame::Box);
        Processed_stream_label = new QLabel(groupBox_3);
        Processed_stream_label->setObjectName(QStringLiteral("Processed_stream_label"));
        Processed_stream_label->setGeometry(QRect(250, 30, 181, 171));
        Processed_stream_label->setMouseTracking(false);
        Processed_stream_label->setAutoFillBackground(true);
        Processed_stream_label->setFrameShape(QFrame::Box);
        Process_pushButton = new QPushButton(groupBox_3);
        Process_pushButton->setObjectName(QStringLiteral("Process_pushButton"));
        Process_pushButton->setGeometry(QRect(120, 210, 96, 25));
        Stopstream_pushButton = new QPushButton(groupBox_3);
        Stopstream_pushButton->setObjectName(QStringLiteral("Stopstream_pushButton"));
        Stopstream_pushButton->setGeometry(QRect(230, 210, 80, 25));
        plainTextEdit = new QPlainTextEdit(groupBox_4);
        plainTextEdit->setObjectName(QStringLiteral("plainTextEdit"));
        plainTextEdit->setGeometry(QRect(0, 310, 761, 111));
        groupBox_2 = new QGroupBox(groupBox_4);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(510, 184, 251, 111));
        Sizefilter_label = new QLabel(groupBox_2);
        Sizefilter_label->setObjectName(QStringLiteral("Sizefilter_label"));
        Sizefilter_label->setGeometry(QRect(10, 30, 71, 16));
        Sizefilter_horizontalSlider = new QSlider(groupBox_2);
        Sizefilter_horizontalSlider->setObjectName(QStringLiteral("Sizefilter_horizontalSlider"));
        Sizefilter_horizontalSlider->setGeometry(QRect(80, 30, 161, 20));
        Sizefilter_horizontalSlider->setOrientation(Qt::Horizontal);
        pxl_label = new QLabel(groupBox_2);
        pxl_label->setObjectName(QStringLiteral("pxl_label"));
        pxl_label->setGeometry(QRect(10, 70, 41, 21));
        pixel_spinBox = new QSpinBox(groupBox_2);
        pixel_spinBox->setObjectName(QStringLiteral("pixel_spinBox"));
        pixel_spinBox->setGeometry(QRect(70, 70, 71, 21));
        set_pushButton = new QPushButton(groupBox_2);
        set_pushButton->setObjectName(QStringLiteral("set_pushButton"));
        set_pushButton->setGeometry(QRect(150, 70, 89, 25));
        groupBox = new QGroupBox(groupBox_4);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(550, 40, 191, 141));
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        Polygon_radioButton = new QRadioButton(groupBox);
        Polygon_radioButton->setObjectName(QStringLiteral("Polygon_radioButton"));

        verticalLayout->addWidget(Polygon_radioButton);

        Freestyle_radioButton = new QRadioButton(groupBox);
        Freestyle_radioButton->setObjectName(QStringLiteral("Freestyle_radioButton"));

        verticalLayout->addWidget(Freestyle_radioButton);

        Run_pushButton = new QPushButton(groupBox);
        Run_pushButton->setObjectName(QStringLiteral("Run_pushButton"));

        verticalLayout->addWidget(Run_pushButton);

        Clear_ROI_pushButton = new QPushButton(groupBox);
        Clear_ROI_pushButton->setObjectName(QStringLiteral("Clear_ROI_pushButton"));

        verticalLayout->addWidget(Clear_ROI_pushButton);

        label = new QLabel(groupBox_4);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(180, -10, 401, 41));
        label->setFrameShape(QFrame::NoFrame);

        gridLayout->addWidget(groupBox_4, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 788, 22));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Video Analyser Beta 1.0", Q_NULLPTR));
        groupBox_4->setTitle(QString());
        groupBox_3->setTitle(QApplication::translate("MainWindow", "VideoOutPut", Q_NULLPTR));
        stream_label->setText(QString());
        Processed_stream_label->setText(QString());
        Process_pushButton->setText(QApplication::translate("MainWindow", "Process/Play", Q_NULLPTR));
        Stopstream_pushButton->setText(QApplication::translate("MainWindow", "Stop", Q_NULLPTR));
        groupBox_2->setTitle(QApplication::translate("MainWindow", "Size and Pixel", Q_NULLPTR));
        Sizefilter_label->setText(QApplication::translate("MainWindow", "Size Filter", Q_NULLPTR));
        pxl_label->setText(QApplication::translate("MainWindow", "pixel", Q_NULLPTR));
        set_pushButton->setText(QApplication::translate("MainWindow", "Set", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("MainWindow", "ROI", Q_NULLPTR));
        Polygon_radioButton->setText(QApplication::translate("MainWindow", "PolyGon", Q_NULLPTR));
        Freestyle_radioButton->setText(QApplication::translate("MainWindow", "FreeStyle", Q_NULLPTR));
        Run_pushButton->setText(QApplication::translate("MainWindow", "Run", Q_NULLPTR));
        Clear_ROI_pushButton->setText(QApplication::translate("MainWindow", "Clear ROI", Q_NULLPTR));
        label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H

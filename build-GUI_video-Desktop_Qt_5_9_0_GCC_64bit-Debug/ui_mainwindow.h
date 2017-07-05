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
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QRadioButton *Polygon_radioButton;
    QRadioButton *Freestyle_radioButton;
    QPushButton *Run_pushButton;
    QPushButton *Clear_ROI_pushButton;
    QSlider *Sizefilter_horizontalSlider;
    QLabel *Sizefilter_label;
    QLabel *pxl_label;
    QLabel *stream_label;
    QPushButton *Process_pushButton;
    QLabel *Processed_stream_label;
    QPushButton *Stopstream_pushButton;
    QPushButton *set_pushButton;
    QPlainTextEdit *plainTextEdit;
    QSpinBox *pixel_spinBox;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(774, 463);
        MainWindow->setMouseTracking(true);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(590, 0, 171, 151));
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

        Sizefilter_horizontalSlider = new QSlider(centralWidget);
        Sizefilter_horizontalSlider->setObjectName(QStringLiteral("Sizefilter_horizontalSlider"));
        Sizefilter_horizontalSlider->setGeometry(QRect(590, 150, 161, 20));
        Sizefilter_horizontalSlider->setOrientation(Qt::Horizontal);
        Sizefilter_label = new QLabel(centralWidget);
        Sizefilter_label->setObjectName(QStringLiteral("Sizefilter_label"));
        Sizefilter_label->setGeometry(QRect(520, 150, 141, 16));
        pxl_label = new QLabel(centralWidget);
        pxl_label->setObjectName(QStringLiteral("pxl_label"));
        pxl_label->setGeometry(QRect(610, 180, 41, 21));
        stream_label = new QLabel(centralWidget);
        stream_label->setObjectName(QStringLiteral("stream_label"));
        stream_label->setGeometry(QRect(60, 40, 181, 171));
        stream_label->setMouseTracking(false);
        stream_label->setAutoFillBackground(true);
        stream_label->setFrameShape(QFrame::Box);
        Process_pushButton = new QPushButton(centralWidget);
        Process_pushButton->setObjectName(QStringLiteral("Process_pushButton"));
        Process_pushButton->setGeometry(QRect(190, 230, 89, 25));
        Processed_stream_label = new QLabel(centralWidget);
        Processed_stream_label->setObjectName(QStringLiteral("Processed_stream_label"));
        Processed_stream_label->setGeometry(QRect(300, 40, 181, 171));
        Processed_stream_label->setMouseTracking(false);
        Processed_stream_label->setAutoFillBackground(true);
        Processed_stream_label->setFrameShape(QFrame::Box);
        Stopstream_pushButton = new QPushButton(centralWidget);
        Stopstream_pushButton->setObjectName(QStringLiteral("Stopstream_pushButton"));
        Stopstream_pushButton->setGeometry(QRect(290, 230, 89, 25));
        set_pushButton = new QPushButton(centralWidget);
        set_pushButton->setObjectName(QStringLiteral("set_pushButton"));
        set_pushButton->setGeometry(QRect(600, 230, 89, 25));
        plainTextEdit = new QPlainTextEdit(centralWidget);
        plainTextEdit->setObjectName(QStringLiteral("plainTextEdit"));
        plainTextEdit->setGeometry(QRect(20, 280, 711, 111));
        pixel_spinBox = new QSpinBox(centralWidget);
        pixel_spinBox->setObjectName(QStringLiteral("pixel_spinBox"));
        pixel_spinBox->setGeometry(QRect(670, 180, 71, 21));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 774, 22));
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
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("MainWindow", "ROI", Q_NULLPTR));
        Polygon_radioButton->setText(QApplication::translate("MainWindow", "PolyGon", Q_NULLPTR));
        Freestyle_radioButton->setText(QApplication::translate("MainWindow", "FreeStyle", Q_NULLPTR));
        Run_pushButton->setText(QApplication::translate("MainWindow", "Run", Q_NULLPTR));
        Clear_ROI_pushButton->setText(QApplication::translate("MainWindow", "Clear ROI", Q_NULLPTR));
        Sizefilter_label->setText(QApplication::translate("MainWindow", "Size Filter", Q_NULLPTR));
        pxl_label->setText(QApplication::translate("MainWindow", "pixel", Q_NULLPTR));
        stream_label->setText(QString());
        Process_pushButton->setText(QApplication::translate("MainWindow", "Process/Play", Q_NULLPTR));
        Processed_stream_label->setText(QString());
        Stopstream_pushButton->setText(QApplication::translate("MainWindow", "Stop", Q_NULLPTR));
        set_pushButton->setText(QApplication::translate("MainWindow", "Set", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H

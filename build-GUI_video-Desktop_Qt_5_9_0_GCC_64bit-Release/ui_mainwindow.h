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
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
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
    QHBoxLayout *horizontalLayout_7;
    QGroupBox *groupBox_4;
    QGroupBox *groupBox_3;
    QWidget *widget;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QPushButton *Process_pushButton;
    QPushButton *Stopstream_pushButton;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *set_pushButton;
    QPushButton *record_pushButton;
    QWidget *widget1;
    QGridLayout *gridLayout_2;
    QLabel *stream_label;
    QLabel *summary_label;
    QLabel *Processed_stream_label;
    QLabel *summary_label2;
    QPlainTextEdit *plainTextEdit;
    QLabel *label;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QLabel *ROI_label;
    QHBoxLayout *_3;
    QRadioButton *Freestyle_radioButton;
    QRadioButton *Polygon_radioButton;
    QHBoxLayout *_2;
    QPushButton *Run_pushButton;
    QPushButton *Clear_ROI_pushButton;
    QFrame *line;
    QLabel *Filter_label;
    QHBoxLayout *horizontalLayout_5;
    QHBoxLayout *horizontalLayout_3;
    QLabel *Sizefilter_label;
    QComboBox *sizefilter_comboBox;
    QHBoxLayout *horizontalLayout_4;
    QLabel *pxl_label;
    QSpinBox *pixel_spinBox;
    QWidget *widget2;
    QHBoxLayout *horizontalLayout_6;
    QLabel *webcam_indicator_label;
    QLabel *recording_indicator_label;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(788, 649);
        MainWindow->setMouseTracking(true);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        horizontalLayout_7 = new QHBoxLayout(centralWidget);
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        groupBox_4 = new QGroupBox(centralWidget);
        groupBox_4->setObjectName(QStringLiteral("groupBox_4"));
        groupBox_3 = new QGroupBox(groupBox_4);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        groupBox_3->setGeometry(QRect(20, 40, 451, 511));
        widget = new QWidget(groupBox_3);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(10, 420, 431, 62));
        verticalLayout_2 = new QVBoxLayout(widget);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        Process_pushButton = new QPushButton(widget);
        Process_pushButton->setObjectName(QStringLiteral("Process_pushButton"));

        horizontalLayout->addWidget(Process_pushButton);

        Stopstream_pushButton = new QPushButton(widget);
        Stopstream_pushButton->setObjectName(QStringLiteral("Stopstream_pushButton"));

        horizontalLayout->addWidget(Stopstream_pushButton);


        verticalLayout_2->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        set_pushButton = new QPushButton(widget);
        set_pushButton->setObjectName(QStringLiteral("set_pushButton"));

        horizontalLayout_2->addWidget(set_pushButton);

        record_pushButton = new QPushButton(widget);
        record_pushButton->setObjectName(QStringLiteral("record_pushButton"));

        horizontalLayout_2->addWidget(record_pushButton);


        verticalLayout_2->addLayout(horizontalLayout_2);

        widget1 = new QWidget(groupBox_3);
        widget1->setObjectName(QStringLiteral("widget1"));
        widget1->setGeometry(QRect(11, 21, 421, 391));
        gridLayout_2 = new QGridLayout(widget1);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        stream_label = new QLabel(widget1);
        stream_label->setObjectName(QStringLiteral("stream_label"));
        stream_label->setMouseTracking(false);
        stream_label->setAutoFillBackground(true);
        stream_label->setFrameShape(QFrame::Box);

        gridLayout_2->addWidget(stream_label, 0, 0, 1, 1);

        summary_label = new QLabel(widget1);
        summary_label->setObjectName(QStringLiteral("summary_label"));
        summary_label->setMouseTracking(false);
        summary_label->setAutoFillBackground(true);
        summary_label->setFrameShape(QFrame::Box);

        gridLayout_2->addWidget(summary_label, 1, 0, 1, 1);

        Processed_stream_label = new QLabel(widget1);
        Processed_stream_label->setObjectName(QStringLiteral("Processed_stream_label"));
        Processed_stream_label->setMouseTracking(false);
        Processed_stream_label->setAutoFillBackground(true);
        Processed_stream_label->setFrameShape(QFrame::Box);

        gridLayout_2->addWidget(Processed_stream_label, 0, 1, 1, 1);

        summary_label2 = new QLabel(widget1);
        summary_label2->setObjectName(QStringLiteral("summary_label2"));
        summary_label2->setMouseTracking(false);
        summary_label2->setAutoFillBackground(true);
        summary_label2->setFrameShape(QFrame::Box);

        gridLayout_2->addWidget(summary_label2, 1, 1, 1, 1);

        plainTextEdit = new QPlainTextEdit(groupBox_4);
        plainTextEdit->setObjectName(QStringLiteral("plainTextEdit"));
        plainTextEdit->setGeometry(QRect(480, 270, 281, 281));
        label = new QLabel(groupBox_4);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(0, -10, 771, 41));
        label->setFrameShape(QFrame::NoFrame);
        groupBox = new QGroupBox(groupBox_4);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(480, 90, 281, 171));
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        ROI_label = new QLabel(groupBox);
        ROI_label->setObjectName(QStringLiteral("ROI_label"));
        ROI_label->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(ROI_label);

        _3 = new QHBoxLayout();
        _3->setSpacing(6);
        _3->setObjectName(QStringLiteral("_3"));
        Freestyle_radioButton = new QRadioButton(groupBox);
        Freestyle_radioButton->setObjectName(QStringLiteral("Freestyle_radioButton"));

        _3->addWidget(Freestyle_radioButton);

        Polygon_radioButton = new QRadioButton(groupBox);
        Polygon_radioButton->setObjectName(QStringLiteral("Polygon_radioButton"));

        _3->addWidget(Polygon_radioButton);


        verticalLayout->addLayout(_3);

        _2 = new QHBoxLayout();
        _2->setSpacing(6);
        _2->setObjectName(QStringLiteral("_2"));
        Run_pushButton = new QPushButton(groupBox);
        Run_pushButton->setObjectName(QStringLiteral("Run_pushButton"));

        _2->addWidget(Run_pushButton);

        Clear_ROI_pushButton = new QPushButton(groupBox);
        Clear_ROI_pushButton->setObjectName(QStringLiteral("Clear_ROI_pushButton"));

        _2->addWidget(Clear_ROI_pushButton);


        verticalLayout->addLayout(_2);

        line = new QFrame(groupBox);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line);

        Filter_label = new QLabel(groupBox);
        Filter_label->setObjectName(QStringLiteral("Filter_label"));
        Filter_label->setLayoutDirection(Qt::LeftToRight);
        Filter_label->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(Filter_label);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        Sizefilter_label = new QLabel(groupBox);
        Sizefilter_label->setObjectName(QStringLiteral("Sizefilter_label"));

        horizontalLayout_3->addWidget(Sizefilter_label);

        sizefilter_comboBox = new QComboBox(groupBox);
        sizefilter_comboBox->setObjectName(QStringLiteral("sizefilter_comboBox"));

        horizontalLayout_3->addWidget(sizefilter_comboBox);


        horizontalLayout_5->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        pxl_label = new QLabel(groupBox);
        pxl_label->setObjectName(QStringLiteral("pxl_label"));

        horizontalLayout_4->addWidget(pxl_label);

        pixel_spinBox = new QSpinBox(groupBox);
        pixel_spinBox->setObjectName(QStringLiteral("pixel_spinBox"));

        horizontalLayout_4->addWidget(pixel_spinBox);


        horizontalLayout_5->addLayout(horizontalLayout_4);


        verticalLayout->addLayout(horizontalLayout_5);

        line->raise();
        ROI_label->raise();
        Filter_label->raise();
        widget2 = new QWidget(groupBox_4);
        widget2->setObjectName(QStringLiteral("widget2"));
        widget2->setGeometry(QRect(480, 60, 271, 31));
        horizontalLayout_6 = new QHBoxLayout(widget2);
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
        webcam_indicator_label = new QLabel(widget2);
        webcam_indicator_label->setObjectName(QStringLiteral("webcam_indicator_label"));
        QFont font;
        font.setFamily(QStringLiteral("Waree"));
        webcam_indicator_label->setFont(font);
        webcam_indicator_label->setFrameShape(QFrame::Box);
        webcam_indicator_label->setAlignment(Qt::AlignCenter);

        horizontalLayout_6->addWidget(webcam_indicator_label);

        recording_indicator_label = new QLabel(widget2);
        recording_indicator_label->setObjectName(QStringLiteral("recording_indicator_label"));
        recording_indicator_label->setFont(font);
        recording_indicator_label->setFrameShape(QFrame::Box);
        recording_indicator_label->setAlignment(Qt::AlignCenter);

        horizontalLayout_6->addWidget(recording_indicator_label);

        plainTextEdit->raise();
        label->raise();
        groupBox->raise();
        groupBox_3->raise();
        webcam_indicator_label->raise();
        recording_indicator_label->raise();
        webcam_indicator_label->raise();
        recording_indicator_label->raise();

        horizontalLayout_7->addWidget(groupBox_4);

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
        Process_pushButton->setText(QApplication::translate("MainWindow", "Process/Play", Q_NULLPTR));
        Stopstream_pushButton->setText(QApplication::translate("MainWindow", "Stop", Q_NULLPTR));
        set_pushButton->setText(QApplication::translate("MainWindow", "Set Filter", Q_NULLPTR));
        record_pushButton->setText(QApplication::translate("MainWindow", "Record", Q_NULLPTR));
        stream_label->setText(QString());
        summary_label->setText(QString());
        Processed_stream_label->setText(QString());
        summary_label2->setText(QString());
        label->setText(QString());
        groupBox->setTitle(QString());
        ROI_label->setText(QApplication::translate("MainWindow", "ROI", Q_NULLPTR));
        Freestyle_radioButton->setText(QApplication::translate("MainWindow", "FreeStyle", Q_NULLPTR));
        Polygon_radioButton->setText(QApplication::translate("MainWindow", "PolyGon", Q_NULLPTR));
        Run_pushButton->setText(QApplication::translate("MainWindow", "Run", Q_NULLPTR));
        Clear_ROI_pushButton->setText(QApplication::translate("MainWindow", "Clear ROI", Q_NULLPTR));
        Filter_label->setText(QApplication::translate("MainWindow", "Filter", Q_NULLPTR));
        Sizefilter_label->setText(QApplication::translate("MainWindow", "Size ", Q_NULLPTR));
        pxl_label->setText(QApplication::translate("MainWindow", "Pixel", Q_NULLPTR));
        webcam_indicator_label->setText(QString());
        recording_indicator_label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H

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
    QGroupBox *groupBox_4;
    QGroupBox *groupBox_3;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QPushButton *Process_pushButton;
    QPushButton *Stopstream_pushButton;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *set_pushButton;
    QPushButton *record_pushButton;
    QPlainTextEdit *plainTextEdit;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_9;
    QLabel *stream_label;
    QLabel *Processed_stream_label;
    QWidget *layoutWidget2;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_2;
    QPushButton *toggle_stream_pushButton;
    QLabel *label_4;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *_3;
    QRadioButton *Freestyle_radioButton;
    QRadioButton *Polygon_radioButton;
    QHBoxLayout *_2;
    QPushButton *Run_pushButton;
    QPushButton *Clear_ROI_pushButton;
    QWidget *layoutWidget3;
    QHBoxLayout *horizontalLayout_4;
    QGroupBox *groupBox_5;
    QWidget *layoutWidget4;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_3;
    QComboBox *distance_comboBox;
    QGroupBox *groupBox_2;
    QWidget *layoutWidget5;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_3;
    QLabel *Sizefilter_label;
    QComboBox *sizefilter_comboBox;
    QHBoxLayout *horizontalLayout_5;
    QLabel *pxl_label;
    QSpinBox *pixel_spinBox;
    QWidget *layoutWidget6;
    QHBoxLayout *horizontalLayout_7;
    QLabel *summary_label;
    QLabel *summary_label2;
    QWidget *layoutWidget7;
    QVBoxLayout *verticalLayout_4;
    QLabel *label;
    QLabel *webcam_indicator_label;
    QLabel *recording_indicator_label;
    QLabel *alert_label;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1174, 654);
        MainWindow->setMouseTracking(true);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        groupBox_4 = new QGroupBox(centralWidget);
        groupBox_4->setObjectName(QStringLiteral("groupBox_4"));
        groupBox_4->setGeometry(QRect(9, 23, 1156, 561));
        groupBox_3 = new QGroupBox(groupBox_4);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        groupBox_3->setGeometry(QRect(10, 10, 721, 551));
        layoutWidget = new QWidget(groupBox_3);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(30, 360, 661, 71));
        verticalLayout_2 = new QVBoxLayout(layoutWidget);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        Process_pushButton = new QPushButton(layoutWidget);
        Process_pushButton->setObjectName(QStringLiteral("Process_pushButton"));

        horizontalLayout->addWidget(Process_pushButton);

        Stopstream_pushButton = new QPushButton(layoutWidget);
        Stopstream_pushButton->setObjectName(QStringLiteral("Stopstream_pushButton"));

        horizontalLayout->addWidget(Stopstream_pushButton);


        verticalLayout_2->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        set_pushButton = new QPushButton(layoutWidget);
        set_pushButton->setObjectName(QStringLiteral("set_pushButton"));

        horizontalLayout_2->addWidget(set_pushButton);

        record_pushButton = new QPushButton(layoutWidget);
        record_pushButton->setObjectName(QStringLiteral("record_pushButton"));

        horizontalLayout_2->addWidget(record_pushButton);


        verticalLayout_2->addLayout(horizontalLayout_2);

        plainTextEdit = new QPlainTextEdit(groupBox_3);
        plainTextEdit->setObjectName(QStringLiteral("plainTextEdit"));
        plainTextEdit->setGeometry(QRect(30, 430, 661, 111));
        layoutWidget1 = new QWidget(groupBox_3);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(30, 30, 661, 281));
        horizontalLayout_9 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_9->setSpacing(6);
        horizontalLayout_9->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        horizontalLayout_9->setContentsMargins(0, 0, 0, 0);
        stream_label = new QLabel(layoutWidget1);
        stream_label->setObjectName(QStringLiteral("stream_label"));
        stream_label->setMouseTracking(false);
        stream_label->setAutoFillBackground(true);
        stream_label->setFrameShape(QFrame::Box);

        horizontalLayout_9->addWidget(stream_label);

        Processed_stream_label = new QLabel(layoutWidget1);
        Processed_stream_label->setObjectName(QStringLiteral("Processed_stream_label"));
        Processed_stream_label->setMouseTracking(false);
        Processed_stream_label->setAutoFillBackground(true);
        Processed_stream_label->setFrameShape(QFrame::Box);

        horizontalLayout_9->addWidget(Processed_stream_label);

        layoutWidget2 = new QWidget(groupBox_3);
        layoutWidget2->setObjectName(QStringLiteral("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(100, 320, 511, 31));
        horizontalLayout_6 = new QHBoxLayout(layoutWidget2);
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(layoutWidget2);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setAlignment(Qt::AlignCenter);

        horizontalLayout_6->addWidget(label_2);

        toggle_stream_pushButton = new QPushButton(layoutWidget2);
        toggle_stream_pushButton->setObjectName(QStringLiteral("toggle_stream_pushButton"));

        horizontalLayout_6->addWidget(toggle_stream_pushButton);

        label_4 = new QLabel(layoutWidget2);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setAlignment(Qt::AlignCenter);

        horizontalLayout_6->addWidget(label_4);

        groupBox = new QGroupBox(groupBox_4);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(930, 40, 204, 111));
        groupBox->setAlignment(Qt::AlignCenter);
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
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

        layoutWidget3 = new QWidget(groupBox_4);
        layoutWidget3->setObjectName(QStringLiteral("layoutWidget3"));
        layoutWidget3->setGeometry(QRect(750, 160, 401, 141));
        horizontalLayout_4 = new QHBoxLayout(layoutWidget3);
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        groupBox_5 = new QGroupBox(layoutWidget3);
        groupBox_5->setObjectName(QStringLiteral("groupBox_5"));
        groupBox_5->setAlignment(Qt::AlignCenter);
        layoutWidget4 = new QWidget(groupBox_5);
        layoutWidget4->setObjectName(QStringLiteral("layoutWidget4"));
        layoutWidget4->setGeometry(QRect(11, 53, 153, 27));
        horizontalLayout_8 = new QHBoxLayout(layoutWidget4);
        horizontalLayout_8->setSpacing(6);
        horizontalLayout_8->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        horizontalLayout_8->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(layoutWidget4);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout_8->addWidget(label_3);

        distance_comboBox = new QComboBox(layoutWidget4);
        distance_comboBox->setObjectName(QStringLiteral("distance_comboBox"));

        horizontalLayout_8->addWidget(distance_comboBox);


        horizontalLayout_4->addWidget(groupBox_5);

        groupBox_2 = new QGroupBox(layoutWidget3);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setAlignment(Qt::AlignCenter);
        layoutWidget5 = new QWidget(groupBox_2);
        layoutWidget5->setObjectName(QStringLiteral("layoutWidget5"));
        layoutWidget5->setGeometry(QRect(10, 34, 161, 101));
        verticalLayout_3 = new QVBoxLayout(layoutWidget5);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        Sizefilter_label = new QLabel(layoutWidget5);
        Sizefilter_label->setObjectName(QStringLiteral("Sizefilter_label"));

        horizontalLayout_3->addWidget(Sizefilter_label);

        sizefilter_comboBox = new QComboBox(layoutWidget5);
        sizefilter_comboBox->setObjectName(QStringLiteral("sizefilter_comboBox"));

        horizontalLayout_3->addWidget(sizefilter_comboBox);


        verticalLayout_3->addLayout(horizontalLayout_3);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        pxl_label = new QLabel(layoutWidget5);
        pxl_label->setObjectName(QStringLiteral("pxl_label"));

        horizontalLayout_5->addWidget(pxl_label);

        pixel_spinBox = new QSpinBox(layoutWidget5);
        pixel_spinBox->setObjectName(QStringLiteral("pixel_spinBox"));

        horizontalLayout_5->addWidget(pixel_spinBox);


        verticalLayout_3->addLayout(horizontalLayout_5);


        horizontalLayout_4->addWidget(groupBox_2);

        layoutWidget6 = new QWidget(groupBox_4);
        layoutWidget6->setObjectName(QStringLiteral("layoutWidget6"));
        layoutWidget6->setGeometry(QRect(750, 310, 391, 231));
        horizontalLayout_7 = new QHBoxLayout(layoutWidget6);
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        horizontalLayout_7->setContentsMargins(0, 0, 0, 0);
        summary_label = new QLabel(layoutWidget6);
        summary_label->setObjectName(QStringLiteral("summary_label"));
        summary_label->setMouseTracking(false);
        summary_label->setAutoFillBackground(true);
        summary_label->setFrameShape(QFrame::Box);

        horizontalLayout_7->addWidget(summary_label);

        summary_label2 = new QLabel(layoutWidget6);
        summary_label2->setObjectName(QStringLiteral("summary_label2"));
        summary_label2->setMouseTracking(false);
        summary_label2->setAutoFillBackground(true);
        summary_label2->setFrameShape(QFrame::Box);

        horizontalLayout_7->addWidget(summary_label2);

        layoutWidget7 = new QWidget(groupBox_4);
        layoutWidget7->setObjectName(QStringLiteral("layoutWidget7"));
        layoutWidget7->setGeometry(QRect(760, 46, 151, 111));
        verticalLayout_4 = new QVBoxLayout(layoutWidget7);
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setContentsMargins(11, 11, 11, 11);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget7);
        label->setObjectName(QStringLiteral("label"));
        label->setFrameShape(QFrame::Box);

        verticalLayout_4->addWidget(label);

        webcam_indicator_label = new QLabel(layoutWidget7);
        webcam_indicator_label->setObjectName(QStringLiteral("webcam_indicator_label"));
        QFont font;
        font.setFamily(QStringLiteral("Waree"));
        webcam_indicator_label->setFont(font);
        webcam_indicator_label->setFrameShape(QFrame::Box);
        webcam_indicator_label->setAlignment(Qt::AlignCenter);

        verticalLayout_4->addWidget(webcam_indicator_label);

        recording_indicator_label = new QLabel(layoutWidget7);
        recording_indicator_label->setObjectName(QStringLiteral("recording_indicator_label"));
        recording_indicator_label->setFont(font);
        recording_indicator_label->setFrameShape(QFrame::Box);
        recording_indicator_label->setAlignment(Qt::AlignCenter);

        verticalLayout_4->addWidget(recording_indicator_label);

        layoutWidget->raise();
        layoutWidget->raise();
        layoutWidget->raise();
        groupBox->raise();
        groupBox_3->raise();
        alert_label = new QLabel(centralWidget);
        alert_label->setObjectName(QStringLiteral("alert_label"));
        alert_label->setGeometry(QRect(10, 0, 1151, 41));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1174, 22));
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
        groupBox_3->setTitle(QString());
        Process_pushButton->setText(QApplication::translate("MainWindow", "Process/Play", Q_NULLPTR));
        Stopstream_pushButton->setText(QApplication::translate("MainWindow", "Stop", Q_NULLPTR));
        set_pushButton->setText(QApplication::translate("MainWindow", "Set Filter", Q_NULLPTR));
        record_pushButton->setText(QApplication::translate("MainWindow", "Record", Q_NULLPTR));
        stream_label->setText(QString());
        Processed_stream_label->setText(QString());
        label_2->setText(QApplication::translate("MainWindow", "Webcam", Q_NULLPTR));
        toggle_stream_pushButton->setText(QApplication::translate("MainWindow", "Toggle", Q_NULLPTR));
        label_4->setText(QApplication::translate("MainWindow", "Processed", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("MainWindow", "ROI", Q_NULLPTR));
        Freestyle_radioButton->setText(QApplication::translate("MainWindow", "FreeStyle", Q_NULLPTR));
        Polygon_radioButton->setText(QApplication::translate("MainWindow", "PolyGon", Q_NULLPTR));
        Run_pushButton->setText(QApplication::translate("MainWindow", "Run", Q_NULLPTR));
        Clear_ROI_pushButton->setText(QApplication::translate("MainWindow", "Clear ROI", Q_NULLPTR));
        groupBox_5->setTitle(QApplication::translate("MainWindow", "Distance Filter", Q_NULLPTR));
        label_3->setText(QApplication::translate("MainWindow", "Distance", Q_NULLPTR));
        groupBox_2->setTitle(QApplication::translate("MainWindow", "Size Filter", Q_NULLPTR));
        Sizefilter_label->setText(QApplication::translate("MainWindow", "Size ", Q_NULLPTR));
        pxl_label->setText(QApplication::translate("MainWindow", "Pixel", Q_NULLPTR));
        summary_label->setText(QString());
        summary_label2->setText(QString());
        label->setText(QString());
        webcam_indicator_label->setText(QString());
        recording_indicator_label->setText(QString());
        alert_label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H

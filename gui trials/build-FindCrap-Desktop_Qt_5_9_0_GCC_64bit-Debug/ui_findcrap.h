/********************************************************************************
** Form generated from reading UI file 'findcrap.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FINDCRAP_H
#define UI_FINDCRAP_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FindCrap
{
public:
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QTextEdit *textEdit;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lineEdit;
    QPushButton *goButton;

    void setupUi(QWidget *FindCrap)
    {
        if (FindCrap->objectName().isEmpty())
            FindCrap->setObjectName(QStringLiteral("FindCrap"));
        FindCrap->resize(400, 300);
        widget = new QWidget(FindCrap);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(10, 10, 381, 281));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        textEdit = new QTextEdit(widget);
        textEdit->setObjectName(QStringLiteral("textEdit"));

        verticalLayout->addWidget(textEdit);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(widget);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        lineEdit = new QLineEdit(widget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        horizontalLayout->addWidget(lineEdit);

        goButton = new QPushButton(widget);
        goButton->setObjectName(QStringLiteral("goButton"));

        horizontalLayout->addWidget(goButton);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(FindCrap);

        QMetaObject::connectSlotsByName(FindCrap);
    } // setupUi

    void retranslateUi(QWidget *FindCrap)
    {
        FindCrap->setWindowTitle(QApplication::translate("FindCrap", "FindCrap", Q_NULLPTR));
        label->setText(QApplication::translate("FindCrap", "Search for :", Q_NULLPTR));
        goButton->setText(QApplication::translate("FindCrap", "Go!", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class FindCrap: public Ui_FindCrap {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FINDCRAP_H

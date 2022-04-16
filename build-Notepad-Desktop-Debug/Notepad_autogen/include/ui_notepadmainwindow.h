/********************************************************************************
** Form generated from reading UI file 'notepadmainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NOTEPADMAINWINDOW_H
#define UI_NOTEPADMAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_NotepadMainWindow
{
public:
    QWidget *centralwidget;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QSpinBox *spinBox;
    QPushButton *saveButton;
    QPushButton *OpenButton;
    QPushButton *saveAndQuite;
    QTextEdit *textEdit;
    QMenuBar *menubar;

    void setupUi(QMainWindow *NotepadMainWindow)
    {
        if (NotepadMainWindow->objectName().isEmpty())
            NotepadMainWindow->setObjectName(QString::fromUtf8("NotepadMainWindow"));
        NotepadMainWindow->resize(844, 647);
        centralwidget = new QWidget(NotepadMainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayoutWidget = new QWidget(centralwidget);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(40, 90, 741, 521));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        spinBox = new QSpinBox(verticalLayoutWidget);
        spinBox->setObjectName(QString::fromUtf8("spinBox"));
        spinBox->setValue(13);

        horizontalLayout->addWidget(spinBox);

        saveButton = new QPushButton(verticalLayoutWidget);
        saveButton->setObjectName(QString::fromUtf8("saveButton"));
        saveButton->setAutoRepeat(false);

        horizontalLayout->addWidget(saveButton);

        OpenButton = new QPushButton(verticalLayoutWidget);
        OpenButton->setObjectName(QString::fromUtf8("OpenButton"));

        horizontalLayout->addWidget(OpenButton);

        saveAndQuite = new QPushButton(verticalLayoutWidget);
        saveAndQuite->setObjectName(QString::fromUtf8("saveAndQuite"));

        horizontalLayout->addWidget(saveAndQuite);


        verticalLayout->addLayout(horizontalLayout);

        textEdit = new QTextEdit(verticalLayoutWidget);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));

        verticalLayout->addWidget(textEdit);

        NotepadMainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(NotepadMainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 844, 29));
        NotepadMainWindow->setMenuBar(menubar);

        retranslateUi(NotepadMainWindow);

        QMetaObject::connectSlotsByName(NotepadMainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *NotepadMainWindow)
    {
        NotepadMainWindow->setWindowTitle(QCoreApplication::translate("NotepadMainWindow", "NotepadMainWindow", nullptr));
        saveButton->setText(QCoreApplication::translate("NotepadMainWindow", "Save", nullptr));
        OpenButton->setText(QCoreApplication::translate("NotepadMainWindow", "Open", nullptr));
        saveAndQuite->setText(QCoreApplication::translate("NotepadMainWindow", ":wq", nullptr));
    } // retranslateUi

};

namespace Ui {
    class NotepadMainWindow: public Ui_NotepadMainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NOTEPADMAINWINDOW_H

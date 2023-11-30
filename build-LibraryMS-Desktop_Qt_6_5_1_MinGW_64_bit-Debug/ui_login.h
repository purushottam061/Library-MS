/********************************************************************************
** Form generated from reading UI file 'login.ui'
**
** Created by: Qt User Interface Compiler version 6.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_H
#define UI_LOGIN_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_login
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QFrame *frame;
    QGridLayout *gridLayout_2;
    QLineEdit *lineEdit_id;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *lineEdit_password;
    QPushButton *pushButton_login;
    QSpacerItem *horizontalSpacer_5;
    QSpacerItem *verticalSpacer;
    QSpacerItem *verticalSpacer_3;
    QLabel *label_3;
    QSpacerItem *verticalSpacer_2;
    QSpacerItem *horizontalSpacer_4;
    QMenuBar *menubar;
    QMenu *menuHelp;
    QMenu *menuAbout;

    void setupUi(QMainWindow *login)
    {
        if (login->objectName().isEmpty())
            login->setObjectName("login");
        login->resize(750, 466);
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::MinimumExpanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(login->sizePolicy().hasHeightForWidth());
        login->setSizePolicy(sizePolicy);
        centralwidget = new QWidget(login);
        centralwidget->setObjectName("centralwidget");
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName("gridLayout");
        frame = new QFrame(centralwidget);
        frame->setObjectName("frame");
        QSizePolicy sizePolicy1(QSizePolicy::MinimumExpanding, QSizePolicy::MinimumExpanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(1);
        sizePolicy1.setHeightForWidth(frame->sizePolicy().hasHeightForWidth());
        frame->setSizePolicy(sizePolicy1);
        frame->setMinimumSize(QSize(0, 0));
        frame->setMaximumSize(QSize(3000, 200));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        gridLayout_2 = new QGridLayout(frame);
        gridLayout_2->setObjectName("gridLayout_2");
        gridLayout_2->setVerticalSpacing(0);
        gridLayout_2->setContentsMargins(9, -1, -1, 0);
        lineEdit_id = new QLineEdit(frame);
        lineEdit_id->setObjectName("lineEdit_id");
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(1);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(lineEdit_id->sizePolicy().hasHeightForWidth());
        lineEdit_id->setSizePolicy(sizePolicy2);

        gridLayout_2->addWidget(lineEdit_id, 0, 1, 1, 1);

        label = new QLabel(frame);
        label->setObjectName("label");
        label->setMargin(0);

        gridLayout_2->addWidget(label, 0, 0, 1, 1);

        label_2 = new QLabel(frame);
        label_2->setObjectName("label_2");
        label_2->setMargin(0);

        gridLayout_2->addWidget(label_2, 2, 0, 1, 1);

        lineEdit_password = new QLineEdit(frame);
        lineEdit_password->setObjectName("lineEdit_password");
        lineEdit_password->setEchoMode(QLineEdit::Password);

        gridLayout_2->addWidget(lineEdit_password, 2, 1, 1, 1);

        pushButton_login = new QPushButton(frame);
        pushButton_login->setObjectName("pushButton_login");

        gridLayout_2->addWidget(pushButton_login, 3, 1, 1, 1);


        gridLayout->addWidget(frame, 3, 1, 1, 1);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_5, 3, 2, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 2, 0, 1, 3);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_3, 0, 0, 1, 3);

        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");
        QFont font;
        font.setFamilies({QString::fromUtf8("DejaVu Serif")});
        font.setPointSize(25);
        font.setBold(true);
        label_3->setFont(font);
        label_3->setAlignment(Qt::AlignCenter);
        label_3->setWordWrap(false);
        label_3->setMargin(12);

        gridLayout->addWidget(label_3, 1, 0, 1, 3);

        verticalSpacer_2 = new QSpacerItem(20, 98, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_2, 4, 1, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_4, 3, 0, 1, 1);

        login->setCentralWidget(centralwidget);
        menubar = new QMenuBar(login);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 750, 26));
        menuHelp = new QMenu(menubar);
        menuHelp->setObjectName("menuHelp");
        menuAbout = new QMenu(menubar);
        menuAbout->setObjectName("menuAbout");
        login->setMenuBar(menubar);

        menubar->addAction(menuAbout->menuAction());
        menubar->addAction(menuHelp->menuAction());

        retranslateUi(login);

        QMetaObject::connectSlotsByName(login);
    } // setupUi

    void retranslateUi(QMainWindow *login)
    {
        login->setWindowTitle(QCoreApplication::translate("login", "Library Management", nullptr));
        lineEdit_id->setText(QString());
        label->setText(QCoreApplication::translate("login", "User ID", nullptr));
        label_2->setText(QCoreApplication::translate("login", "Password", nullptr));
        pushButton_login->setText(QCoreApplication::translate("login", "Login", nullptr));
        label_3->setText(QCoreApplication::translate("login", "Library Management System", nullptr));
        menuHelp->setTitle(QCoreApplication::translate("login", "Help", nullptr));
        menuAbout->setTitle(QCoreApplication::translate("login", "About", nullptr));
    } // retranslateUi

};

namespace Ui {
    class login: public Ui_login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H

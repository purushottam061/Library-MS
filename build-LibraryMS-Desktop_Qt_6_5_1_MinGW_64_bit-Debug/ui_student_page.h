/********************************************************************************
** Form generated from reading UI file 'student_page.ui'
**
** Created by: Qt User Interface Compiler version 6.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STUDENT_PAGE_H
#define UI_STUDENT_PAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_student_page
{
public:
    QGridLayout *gridLayout;
    QStackedWidget *stackedWidget;
    QWidget *page_detail;
    QGridLayout *gridLayout_2;
    QSpacerItem *horizontalSpacer_3;
    QSpacerItem *verticalSpacer_4;
    QSpacerItem *horizontalSpacer;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_detail_name;
    QLabel *label_detail_roll;
    QLabel *label_detail_course;
    QLabel *label_detail_year;
    QLabel *label_detail_part;
    QSpacerItem *verticalSpacer_3;
    QSpacerItem *horizontalSpacer_5;
    QSpacerItem *verticalSpacer_2;
    QLabel *label_profile;
    QSpacerItem *verticalSpacer_9;
    QLabel *label;
    QWidget *page_issue_detail;
    QGridLayout *gridLayout_3;
    QSpacerItem *horizontalSpacer_2;
    QTableWidget *tableWidget_issuedBooks;
    QSpacerItem *horizontalSpacer_4;
    QLabel *label_2;
    QWidget *page_search_book;
    QGridLayout *gridLayout_4;
    QPushButton *pushButton_search;
    QLabel *label_5;
    QLabel *label_3;
    QLineEdit *lineEdit_search_words;
    QTableWidget *tableWidget_show_result;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_4;
    QPushButton *pushButton_4;

    void setupUi(QDialog *student_page)
    {
        if (student_page->objectName().isEmpty())
            student_page->setObjectName("student_page");
        student_page->resize(800, 471);
        gridLayout = new QGridLayout(student_page);
        gridLayout->setSpacing(0);
        gridLayout->setObjectName("gridLayout");
        stackedWidget = new QStackedWidget(student_page);
        stackedWidget->setObjectName("stackedWidget");
        QFont font;
        font.setPointSize(22);
        stackedWidget->setFont(font);
        stackedWidget->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgb(46, 52, 54);"));
        page_detail = new QWidget();
        page_detail->setObjectName("page_detail");
        gridLayout_2 = new QGridLayout(page_detail);
        gridLayout_2->setObjectName("gridLayout_2");
        horizontalSpacer_3 = new QSpacerItem(136, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_3, 2, 5, 1, 1);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer_4, 1, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(124, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer, 2, 0, 1, 1);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        label_detail_name = new QLabel(page_detail);
        label_detail_name->setObjectName("label_detail_name");
        QFont font1;
        font1.setPointSize(13);
        label_detail_name->setFont(font1);
        label_detail_name->setStyleSheet(QString::fromUtf8("color: rgb(238, 238, 236);"));

        verticalLayout_2->addWidget(label_detail_name);

        label_detail_roll = new QLabel(page_detail);
        label_detail_roll->setObjectName("label_detail_roll");
        label_detail_roll->setFont(font1);
        label_detail_roll->setStyleSheet(QString::fromUtf8("color: rgb(238, 238, 236);"));

        verticalLayout_2->addWidget(label_detail_roll);

        label_detail_course = new QLabel(page_detail);
        label_detail_course->setObjectName("label_detail_course");
        label_detail_course->setFont(font1);
        label_detail_course->setStyleSheet(QString::fromUtf8("color: rgb(238, 238, 236);"));

        verticalLayout_2->addWidget(label_detail_course);

        label_detail_year = new QLabel(page_detail);
        label_detail_year->setObjectName("label_detail_year");
        label_detail_year->setFont(font1);
        label_detail_year->setStyleSheet(QString::fromUtf8("color: rgb(238, 238, 236);"));

        verticalLayout_2->addWidget(label_detail_year);

        label_detail_part = new QLabel(page_detail);
        label_detail_part->setObjectName("label_detail_part");
        label_detail_part->setFont(font1);
        label_detail_part->setStyleSheet(QString::fromUtf8("color: rgb(238, 238, 236);\n"
""));

        verticalLayout_2->addWidget(label_detail_part);


        gridLayout_2->addLayout(verticalLayout_2, 2, 1, 1, 1);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer_3, 3, 1, 1, 1);

        horizontalSpacer_5 = new QSpacerItem(271, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_5, 2, 2, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer_2, 4, 1, 1, 1);

        label_profile = new QLabel(page_detail);
        label_profile->setObjectName("label_profile");
        label_profile->setStyleSheet(QString::fromUtf8("background-color: rgb(46, 52, 54);"));
        label_profile->setMargin(0);

        gridLayout_2->addWidget(label_profile, 1, 3, 3, 2);

        verticalSpacer_9 = new QSpacerItem(20, 123, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer_9, 4, 4, 1, 1);

        label = new QLabel(page_detail);
        label->setObjectName("label");
        QFont font2;
        font2.setPointSize(20);
        font2.setBold(true);
        label->setFont(font2);
        label->setStyleSheet(QString::fromUtf8("color: rgb(238, 238, 236);"));
        label->setAlignment(Qt::AlignCenter);
        label->setMargin(25);

        gridLayout_2->addWidget(label, 0, 0, 1, 6);

        stackedWidget->addWidget(page_detail);
        page_issue_detail = new QWidget();
        page_issue_detail->setObjectName("page_issue_detail");
        gridLayout_3 = new QGridLayout(page_issue_detail);
        gridLayout_3->setObjectName("gridLayout_3");
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_2, 1, 0, 1, 1);

        tableWidget_issuedBooks = new QTableWidget(page_issue_detail);
        if (tableWidget_issuedBooks->columnCount() < 5)
            tableWidget_issuedBooks->setColumnCount(5);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget_issuedBooks->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget_issuedBooks->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget_issuedBooks->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget_issuedBooks->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidget_issuedBooks->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        if (tableWidget_issuedBooks->rowCount() < 1)
            tableWidget_issuedBooks->setRowCount(1);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        __qtablewidgetitem5->setTextAlignment(Qt::AlignLeading|Qt::AlignVCenter);
        tableWidget_issuedBooks->setVerticalHeaderItem(0, __qtablewidgetitem5);
        tableWidget_issuedBooks->setObjectName("tableWidget_issuedBooks");
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(tableWidget_issuedBooks->sizePolicy().hasHeightForWidth());
        tableWidget_issuedBooks->setSizePolicy(sizePolicy);
        QFont font3;
        font3.setKerning(true);
        tableWidget_issuedBooks->setFont(font3);
        tableWidget_issuedBooks->viewport()->setProperty("cursor", QVariant(QCursor(Qt::ArrowCursor)));
        tableWidget_issuedBooks->setStyleSheet(QString::fromUtf8("color: rgb(243, 243, 243);\n"
"background-color: rgb(46, 52, 54);"));
        tableWidget_issuedBooks->setFrameShape(QFrame::NoFrame);
        tableWidget_issuedBooks->setSizeAdjustPolicy(QAbstractScrollArea::AdjustToContents);
        tableWidget_issuedBooks->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableWidget_issuedBooks->setAlternatingRowColors(false);
        tableWidget_issuedBooks->setSortingEnabled(false);
        tableWidget_issuedBooks->setCornerButtonEnabled(true);

        gridLayout_3->addWidget(tableWidget_issuedBooks, 1, 1, 1, 2);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_4, 1, 3, 1, 1);

        label_2 = new QLabel(page_issue_detail);
        label_2->setObjectName("label_2");
        label_2->setFont(font2);
        label_2->setStyleSheet(QString::fromUtf8("color: rgb(238, 238, 236);"));
        label_2->setAlignment(Qt::AlignCenter);
        label_2->setMargin(18);

        gridLayout_3->addWidget(label_2, 0, 0, 1, 4);

        stackedWidget->addWidget(page_issue_detail);
        page_search_book = new QWidget();
        page_search_book->setObjectName("page_search_book");
        gridLayout_4 = new QGridLayout(page_search_book);
        gridLayout_4->setObjectName("gridLayout_4");
        pushButton_search = new QPushButton(page_search_book);
        pushButton_search->setObjectName("pushButton_search");

        gridLayout_4->addWidget(pushButton_search, 2, 3, 1, 1);

        label_5 = new QLabel(page_search_book);
        label_5->setObjectName("label_5");
        QFont font4;
        font4.setPointSize(22);
        font4.setBold(true);
        label_5->setFont(font4);
        label_5->setAlignment(Qt::AlignCenter);
        label_5->setMargin(14);

        gridLayout_4->addWidget(label_5, 0, 0, 1, 4);

        label_3 = new QLabel(page_search_book);
        label_3->setObjectName("label_3");

        gridLayout_4->addWidget(label_3, 2, 0, 1, 1);

        lineEdit_search_words = new QLineEdit(page_search_book);
        lineEdit_search_words->setObjectName("lineEdit_search_words");
        lineEdit_search_words->setStyleSheet(QString::fromUtf8("color: rgb(46, 52, 54);\n"
"background-color: rgb(255, 255, 255);"));

        gridLayout_4->addWidget(lineEdit_search_words, 2, 2, 1, 1);

        tableWidget_show_result = new QTableWidget(page_search_book);
        if (tableWidget_show_result->columnCount() < 4)
            tableWidget_show_result->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        tableWidget_show_result->setHorizontalHeaderItem(0, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        tableWidget_show_result->setHorizontalHeaderItem(1, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        tableWidget_show_result->setHorizontalHeaderItem(2, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        tableWidget_show_result->setHorizontalHeaderItem(3, __qtablewidgetitem9);
        tableWidget_show_result->setObjectName("tableWidget_show_result");
        tableWidget_show_result->setSizeAdjustPolicy(QAbstractScrollArea::AdjustToContents);
        tableWidget_show_result->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableWidget_show_result->setGridStyle(Qt::DotLine);
        tableWidget_show_result->horizontalHeader()->setCascadingSectionResizes(false);
        tableWidget_show_result->horizontalHeader()->setProperty("showSortIndicator", QVariant(false));
        tableWidget_show_result->horizontalHeader()->setStretchLastSection(false);
        tableWidget_show_result->verticalHeader()->setStretchLastSection(false);

        gridLayout_4->addWidget(tableWidget_show_result, 3, 1, 1, 3);

        stackedWidget->addWidget(page_search_book);

        gridLayout->addWidget(stackedWidget, 4, 2, 5, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        verticalLayout->setContentsMargins(0, -1, 4, -1);
        pushButton = new QPushButton(student_page);
        pushButton->setObjectName("pushButton");
        pushButton->setEnabled(true);
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::MinimumExpanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(pushButton->sizePolicy().hasHeightForWidth());
        pushButton->setSizePolicy(sizePolicy1);
        pushButton->setMinimumSize(QSize(0, 0));
        QFont font5;
        font5.setPointSize(11);
        pushButton->setFont(font5);
        pushButton->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton->setFocusPolicy(Qt::StrongFocus);
        pushButton->setStyleSheet(QString::fromUtf8("border-bottom-color: rgb(85, 87, 83);"));
        pushButton->setIconSize(QSize(18, 18));
        pushButton->setCheckable(false);
        pushButton->setAutoDefault(true);
        pushButton->setFlat(false);

        verticalLayout->addWidget(pushButton);

        pushButton_2 = new QPushButton(student_page);
        pushButton_2->setObjectName("pushButton_2");
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(pushButton_2->sizePolicy().hasHeightForWidth());
        pushButton_2->setSizePolicy(sizePolicy2);
        pushButton_2->setSizeIncrement(QSize(0, 0));
        pushButton_2->setBaseSize(QSize(0, 0));
        pushButton_2->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_2->setFlat(false);

        verticalLayout->addWidget(pushButton_2);

        pushButton_3 = new QPushButton(student_page);
        pushButton_3->setObjectName("pushButton_3");
        sizePolicy2.setHeightForWidth(pushButton_3->sizePolicy().hasHeightForWidth());
        pushButton_3->setSizePolicy(sizePolicy2);
        pushButton_3->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_3->setFlat(false);

        verticalLayout->addWidget(pushButton_3);

        verticalSpacer = new QSpacerItem(20, 284, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        gridLayout->addLayout(verticalLayout, 4, 0, 1, 1);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        horizontalLayout_4->setContentsMargins(-1, -1, -1, 4);
        label_4 = new QLabel(student_page);
        label_4->setObjectName("label_4");
        label_4->setMaximumSize(QSize(16777215, 30));
        QFont font6;
        font6.setPointSize(12);
        label_4->setFont(font6);

        horizontalLayout_4->addWidget(label_4);

        pushButton_4 = new QPushButton(student_page);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_4->setStyleSheet(QString::fromUtf8(""));
        pushButton_4->setFlat(false);

        horizontalLayout_4->addWidget(pushButton_4, 0, Qt::AlignRight);


        gridLayout->addLayout(horizontalLayout_4, 0, 0, 1, 3);


        retranslateUi(student_page);

        stackedWidget->setCurrentIndex(1);
        pushButton->setDefault(false);
        pushButton_3->setDefault(false);


        QMetaObject::connectSlotsByName(student_page);
    } // setupUi

    void retranslateUi(QDialog *student_page)
    {
        student_page->setWindowTitle(QCoreApplication::translate("student_page", "Library Management", nullptr));
        label_detail_name->setText(QCoreApplication::translate("student_page", "Name is ginna be here0000", nullptr));
        label_detail_roll->setText(QCoreApplication::translate("student_page", "Roll no.", nullptr));
        label_detail_course->setText(QCoreApplication::translate("student_page", "BEI", nullptr));
        label_detail_year->setText(QCoreApplication::translate("student_page", "Year", nullptr));
        label_detail_part->setText(QCoreApplication::translate("student_page", "Part", nullptr));
        label_profile->setText(QString());
        label->setText(QCoreApplication::translate("student_page", "  Student's Detail", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidget_issuedBooks->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("student_page", "Book ID", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget_issuedBooks->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("student_page", "Book Name", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget_issuedBooks->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("student_page", "Issue Date", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget_issuedBooks->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("student_page", "Return Date", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget_issuedBooks->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("student_page", "Fine", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidget_issuedBooks->verticalHeaderItem(0);
        ___qtablewidgetitem5->setText(QCoreApplication::translate("student_page", "1", nullptr));
        label_2->setText(QCoreApplication::translate("student_page", "Issued books", nullptr));
        pushButton_search->setText(QCoreApplication::translate("student_page", "Search", nullptr));
        label_5->setText(QCoreApplication::translate("student_page", "Search Book", nullptr));
        label_3->setText(QCoreApplication::translate("student_page", "Book Name:", nullptr));
        QTableWidgetItem *___qtablewidgetitem6 = tableWidget_show_result->horizontalHeaderItem(0);
        ___qtablewidgetitem6->setText(QCoreApplication::translate("student_page", "BookID", nullptr));
        QTableWidgetItem *___qtablewidgetitem7 = tableWidget_show_result->horizontalHeaderItem(1);
        ___qtablewidgetitem7->setText(QCoreApplication::translate("student_page", "Book Name", nullptr));
        QTableWidgetItem *___qtablewidgetitem8 = tableWidget_show_result->horizontalHeaderItem(2);
        ___qtablewidgetitem8->setText(QCoreApplication::translate("student_page", "Author", nullptr));
        QTableWidgetItem *___qtablewidgetitem9 = tableWidget_show_result->horizontalHeaderItem(3);
        ___qtablewidgetitem9->setText(QCoreApplication::translate("student_page", "Book Status", nullptr));
        pushButton->setText(QCoreApplication::translate("student_page", "Details", nullptr));
        pushButton_2->setText(QCoreApplication::translate("student_page", "Issue Details", nullptr));
        pushButton_3->setText(QCoreApplication::translate("student_page", "  Search Books  ", nullptr));
        label_4->setText(QCoreApplication::translate("student_page", "Welcome,", nullptr));
        pushButton_4->setText(QCoreApplication::translate("student_page", "Logout", nullptr));
    } // retranslateUi

};

namespace Ui {
    class student_page: public Ui_student_page {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STUDENT_PAGE_H

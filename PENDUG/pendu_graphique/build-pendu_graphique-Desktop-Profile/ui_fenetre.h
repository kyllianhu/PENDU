/********************************************************************************
** Form generated from reading UI file 'fenetre.ui'
**
** Created by: Qt User Interface Compiler version 5.15.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FENETRE_H
#define UI_FENETRE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_fenetre
{
public:
    QWidget *centralwidget;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *l_titre;
    QLabel *l_image_titre;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *verticalLayout_2;
    QLabel *l_lettre;
    QLineEdit *lineEdit;
    QPushButton *pushButton;
    QLabel *label_message;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *fenetre)
    {
        if (fenetre->objectName().isEmpty())
            fenetre->setObjectName(QString::fromUtf8("fenetre"));
        fenetre->resize(800, 600);
        centralwidget = new QWidget(fenetre);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayoutWidget = new QWidget(centralwidget);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(50, 30, 202, 288));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        l_titre = new QLabel(verticalLayoutWidget);
        l_titre->setObjectName(QString::fromUtf8("l_titre"));
        l_titre->setMinimumSize(QSize(200, 80));
        QFont font;
        font.setFamily(QString::fromUtf8("Noto Sans Mono"));
        font.setPointSize(40);
        font.setBold(true);
        l_titre->setFont(font);
        l_titre->setStyleSheet(QString::fromUtf8("color: darkgreen;"));
        l_titre->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(l_titre);

        l_image_titre = new QLabel(verticalLayoutWidget);
        l_image_titre->setObjectName(QString::fromUtf8("l_image_titre"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(l_image_titre->sizePolicy().hasHeightForWidth());
        l_image_titre->setSizePolicy(sizePolicy);
        l_image_titre->setMinimumSize(QSize(200, 200));
        l_image_titre->setStyleSheet(QString::fromUtf8("border-width: 3px;\n"
"border-style: dotted;"));
        l_image_titre->setTextFormat(Qt::AutoText);
        l_image_titre->setScaledContents(true);
        l_image_titre->setMargin(4);

        verticalLayout->addWidget(l_image_titre);

        verticalLayoutWidget_2 = new QWidget(centralwidget);
        verticalLayoutWidget_2->setObjectName(QString::fromUtf8("verticalLayoutWidget_2"));
        verticalLayoutWidget_2->setGeometry(QRect(270, 200, 501, 121));
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        l_lettre = new QLabel(verticalLayoutWidget_2);
        l_lettre->setObjectName(QString::fromUtf8("l_lettre"));
        l_lettre->setStyleSheet(QString::fromUtf8("font-family: sans-serif;\n"
"font-size: 40px;\n"
"color: red;\n"
""));

        verticalLayout_2->addWidget(l_lettre);

        lineEdit = new QLineEdit(verticalLayoutWidget_2);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        verticalLayout_2->addWidget(lineEdit);

        pushButton = new QPushButton(verticalLayoutWidget_2);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        verticalLayout_2->addWidget(pushButton);

        label_message = new QLabel(centralwidget);
        label_message->setObjectName(QString::fromUtf8("label_message"));
        label_message->setGeometry(QRect(271, 340, 501, 20));
        fenetre->setCentralWidget(centralwidget);
        menubar = new QMenuBar(fenetre);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 21));
        fenetre->setMenuBar(menubar);
        statusbar = new QStatusBar(fenetre);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        fenetre->setStatusBar(statusbar);

        retranslateUi(fenetre);

        QMetaObject::connectSlotsByName(fenetre);
    } // setupUi

    void retranslateUi(QMainWindow *fenetre)
    {
        fenetre->setWindowTitle(QCoreApplication::translate("fenetre", "fenetre", nullptr));
        l_titre->setText(QCoreApplication::translate("fenetre", "Pendu", nullptr));
        l_image_titre->setText(QString());
        l_lettre->setText(QString());
        pushButton->setText(QCoreApplication::translate("fenetre", "jouer", nullptr));
        label_message->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class fenetre: public Ui_fenetre {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FENETRE_H

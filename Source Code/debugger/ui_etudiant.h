/********************************************************************************
** Form generated from reading UI file 'etudiant.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ETUDIANT_H
#define UI_ETUDIANT_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_etudiant
{
public:
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QFrame *line;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton_delete;
    QPushButton *pushButton;
    QTableWidget *tableWidget;
    QGridLayout *gridLayout_2;
    QPushButton *pushButton_registre;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QDialog *etudiant)
    {
        if (etudiant->objectName().isEmpty())
            etudiant->setObjectName("etudiant");
        etudiant->resize(571, 461);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/img_file/student.png"), QSize(), QIcon::Normal, QIcon::Off);
        etudiant->setWindowIcon(icon);
        gridLayout = new QGridLayout(etudiant);
        gridLayout->setObjectName("gridLayout");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        label = new QLabel(etudiant);
        label->setObjectName("label");
        QFont font;
        font.setFamilies({QString::fromUtf8("Times New Roman")});
        font.setPointSize(12);
        font.setBold(true);
        label->setFont(font);

        verticalLayout->addWidget(label);

        line = new QFrame(etudiant);
        line->setObjectName("line");
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pushButton_delete = new QPushButton(etudiant);
        pushButton_delete->setObjectName("pushButton_delete");
        pushButton_delete->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_delete->setStyleSheet(QString::fromUtf8("/* Style pour le bouton Filiers - Style moderne d'entreprise */\n"
"#pushButton_delete {\n"
"    background: #ffffff; /* Fond blanc */\n"
"    color: #333333; /* Texte gris fonc\303\251 */\n"
"    padding: 15px 25px; /* Espacement autour du texte */\n"
"    border: 2px solid #555555; /* Contour gris fonc\303\251 */\n"
"    border-radius: 22px; /* Coins arrondis */\n"
"    font: 16px \"Helvetica Neue\", sans-serif; /* Police sans-serif moderne */\n"
"    cursor: pointer; /* Curseur pointer au survol */\n"
"    transition: background 0.3s ease, color 0.3s ease, border-color 0.3s ease; /* Animation de transition sur la couleur de fond, la couleur du texte et la couleur du contour */\n"
"}\n"
"\n"
"/* Effet de survol pour le bouton Filiers */\n"
"#pushButton_delete:hover {\n"
"    background: #f1f1f1; /* Fond l\303\251g\303\250rement plus fonc\303\251 au survol */\n"
"    color: #555555; /* Texte gris un peu plus clair au survol */\n"
"    border-color: #777777; /* Contour gris plus clair au survol */\n"
"}\n"
"\n"
""
                        "/* Effet de pression pour le bouton Filiers */\n"
"#pushButton_delete:active {\n"
"    background: #e6e6e6; /* Fond l\303\251g\303\250rement plus fonc\303\251 lorsqu'appuy\303\251 */\n"
"    box-shadow: 0 4px 6px rgba(0, 0, 0, 0.1); /* L\303\251g\303\250re ombre lorsqu'appuy\303\251 */\n"
"    transform: translateY(2px); /* L\303\251g\303\250re translation vers le bas pour l'effet de pression */\n"
"}\n"
""));

        horizontalLayout->addWidget(pushButton_delete);

        pushButton = new QPushButton(etudiant);
        pushButton->setObjectName("pushButton");
        pushButton->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton->setStyleSheet(QString::fromUtf8("/* Style pour le bouton Filiers - Style moderne d'entreprise */\n"
"#pushButton {\n"
"    background: #ffffff; /* Fond blanc */\n"
"    color: #333333; /* Texte gris fonc\303\251 */\n"
"    padding: 15px 25px; /* Espacement autour du texte */\n"
"    border: 2px solid #555555; /* Contour gris fonc\303\251 */\n"
"    border-radius: 22px; /* Coins arrondis */\n"
"    font: 16px \"Helvetica Neue\", sans-serif; /* Police sans-serif moderne */\n"
"    cursor: pointer; /* Curseur pointer au survol */\n"
"    transition: background 0.3s ease, color 0.3s ease, border-color 0.3s ease; /* Animation de transition sur la couleur de fond, la couleur du texte et la couleur du contour */\n"
"}\n"
"\n"
"/* Effet de survol pour le bouton Filiers */\n"
"#pushButton:hover {\n"
"    background: #f1f1f1; /* Fond l\303\251g\303\250rement plus fonc\303\251 au survol */\n"
"    color: #555555; /* Texte gris un peu plus clair au survol */\n"
"    border-color: #777777; /* Contour gris plus clair au survol */\n"
"}\n"
"\n"
"/* Effet de"
                        " pression pour le bouton Filiers */\n"
"#pushButton:active {\n"
"    background: #e6e6e6; /* Fond l\303\251g\303\250rement plus fonc\303\251 lorsqu'appuy\303\251 */\n"
"    box-shadow: 0 4px 6px rgba(0, 0, 0, 0.1); /* L\303\251g\303\250re ombre lorsqu'appuy\303\251 */\n"
"    transform: translateY(2px); /* L\303\251g\303\250re translation vers le bas pour l'effet de pression */\n"
"}\n"
""));

        horizontalLayout->addWidget(pushButton);


        verticalLayout->addLayout(horizontalLayout);

        tableWidget = new QTableWidget(etudiant);
        if (tableWidget->columnCount() < 5)
            tableWidget->setColumnCount(5);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        if (tableWidget->rowCount() < 10)
            tableWidget->setRowCount(10);
        tableWidget->setObjectName("tableWidget");
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(5);
        sizePolicy.setVerticalStretch(5);
        sizePolicy.setHeightForWidth(tableWidget->sizePolicy().hasHeightForWidth());
        tableWidget->setSizePolicy(sizePolicy);
        tableWidget->setMaximumSize(QSize(541, 371));
        tableWidget->setSelectionBehavior(QAbstractItemView::SelectRows);
        tableWidget->setGridStyle(Qt::SolidLine);
        tableWidget->setSortingEnabled(false);
        tableWidget->setRowCount(10);

        verticalLayout->addWidget(tableWidget);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName("gridLayout_2");
        gridLayout_2->setSizeConstraint(QLayout::SetMaximumSize);
        gridLayout_2->setHorizontalSpacing(2);
        gridLayout_2->setVerticalSpacing(4);
        gridLayout_2->setContentsMargins(2, -1, 2, -1);
        pushButton_registre = new QPushButton(etudiant);
        pushButton_registre->setObjectName("pushButton_registre");
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(pushButton_registre->sizePolicy().hasHeightForWidth());
        pushButton_registre->setSizePolicy(sizePolicy1);
        pushButton_registre->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_registre->setStyleSheet(QString::fromUtf8("/* Style pour le bouton Filiers - Style moderne d'entreprise */\n"
"#pushButton_registre {\n"
"    background: #ffffff; /* Fond blanc */\n"
"    color: #333333; /* Texte gris fonc\303\251 */\n"
"    padding: 15px 25px; /* Espacement autour du texte */\n"
"    border: 2px solid #555555; /* Contour gris fonc\303\251 */\n"
"    border-radius: 22px; /* Coins arrondis */\n"
"    font: 16px \"Helvetica Neue\", sans-serif; /* Police sans-serif moderne */\n"
"    cursor: pointer; /* Curseur pointer au survol */\n"
"    transition: background 0.3s ease, color 0.3s ease, border-color 0.3s ease; /* Animation de transition sur la couleur de fond, la couleur du texte et la couleur du contour */\n"
"}\n"
"\n"
"/* Effet de survol pour le bouton Filiers */\n"
"#pushButton_registre:hover {\n"
"    background: #f1f1f1; /* Fond l\303\251g\303\250rement plus fonc\303\251 au survol */\n"
"    color: #555555; /* Texte gris un peu plus clair au survol */\n"
"    border-color: #777777; /* Contour gris plus clair au survol */\n"
"}\n"
""
                        "\n"
"/* Effet de pression pour le bouton Filiers */\n"
"#pushButton_registre:active {\n"
"    background: #e6e6e6; /* Fond l\303\251g\303\250rement plus fonc\303\251 lorsqu'appuy\303\251 */\n"
"    box-shadow: 0 4px 6px rgba(0, 0, 0, 0.1); /* L\303\251g\303\250re ombre lorsqu'appuy\303\251 */\n"
"    transform: translateY(2px); /* L\303\251g\303\250re translation vers le bas pour l'effet de pression */\n"
"}\n"
""));

        gridLayout_2->addWidget(pushButton_registre, 0, 0, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_2, 0, 1, 1, 1);


        verticalLayout->addLayout(gridLayout_2);


        gridLayout->addLayout(verticalLayout, 0, 0, 1, 1);


        retranslateUi(etudiant);

        QMetaObject::connectSlotsByName(etudiant);
    } // setupUi

    void retranslateUi(QDialog *etudiant)
    {
        etudiant->setWindowTitle(QCoreApplication::translate("etudiant", "Etudiants", nullptr));
        label->setText(QCoreApplication::translate("etudiant", "Etudiants", nullptr));
        pushButton_delete->setText(QCoreApplication::translate("etudiant", "Supprimer", nullptr));
        pushButton->setText(QCoreApplication::translate("etudiant", "Actualiser", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("etudiant", "Nom", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("etudiant", "Pr\303\251nom", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("etudiant", "CNE", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("etudiant", "CIN", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("etudiant", "Date de naissance", nullptr));
        pushButton_registre->setText(QCoreApplication::translate("etudiant", "Inscription", nullptr));
    } // retranslateUi

};

namespace Ui {
    class etudiant: public Ui_etudiant {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ETUDIANT_H

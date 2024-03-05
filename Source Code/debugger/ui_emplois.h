/********************************************************************************
** Form generated from reading UI file 'emplois.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EMPLOIS_H
#define UI_EMPLOIS_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_emplois
{
public:
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout;
    QPushButton *Cyc1;
    QPushButton *Cyc2;
    QPushButton *Cyc3;
    QPushButton *LicEmp;
    QPushButton *MSTEmp;
    QLabel *label;
    QFrame *line;

    void setupUi(QDialog *emplois)
    {
        if (emplois->objectName().isEmpty())
            emplois->setObjectName("emplois");
        emplois->resize(285, 331);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/img_file/time.png"), QSize(), QIcon::Normal, QIcon::Off);
        emplois->setWindowIcon(icon);
        gridLayout = new QGridLayout(emplois);
        gridLayout->setObjectName("gridLayout");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        Cyc1 = new QPushButton(emplois);
        Cyc1->setObjectName("Cyc1");
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Cyc1->sizePolicy().hasHeightForWidth());
        Cyc1->setSizePolicy(sizePolicy);
        Cyc1->setCursor(QCursor(Qt::PointingHandCursor));
        Cyc1->setStyleSheet(QString::fromUtf8("/* Style pour le bouton Filiers - Style moderne d'entreprise */\n"
"#Cyc1 {\n"
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
"#Cyc1:hover {\n"
"    background: #f1f1f1; /* Fond l\303\251g\303\250rement plus fonc\303\251 au survol */\n"
"    color: #555555; /* Texte gris un peu plus clair au survol */\n"
"    border-color: #777777; /* Contour gris plus clair au survol */\n"
"}\n"
"\n"
"/* Effet de pression po"
                        "ur le bouton Filiers */\n"
"#Cyc1:active {\n"
"    background: #e6e6e6; /* Fond l\303\251g\303\250rement plus fonc\303\251 lorsqu'appuy\303\251 */\n"
"    box-shadow: 0 4px 6px rgba(0, 0, 0, 0.1); /* L\303\251g\303\250re ombre lorsqu'appuy\303\251 */\n"
"    transform: translateY(2px); /* L\303\251g\303\250re translation vers le bas pour l'effet de pression */\n"
"}\n"
""));

        verticalLayout->addWidget(Cyc1);

        Cyc2 = new QPushButton(emplois);
        Cyc2->setObjectName("Cyc2");
        Cyc2->setCursor(QCursor(Qt::PointingHandCursor));
        Cyc2->setStyleSheet(QString::fromUtf8("/* Style pour le bouton Filiers - Style moderne d'entreprise */\n"
"#Cyc2 {\n"
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
"#Cyc2:hover {\n"
"    background: #f1f1f1; /* Fond l\303\251g\303\250rement plus fonc\303\251 au survol */\n"
"    color: #555555; /* Texte gris un peu plus clair au survol */\n"
"    border-color: #777777; /* Contour gris plus clair au survol */\n"
"}\n"
"\n"
"/* Effet de pression po"
                        "ur le bouton Filiers */\n"
"#Cyc2:active {\n"
"    background: #e6e6e6; /* Fond l\303\251g\303\250rement plus fonc\303\251 lorsqu'appuy\303\251 */\n"
"    box-shadow: 0 4px 6px rgba(0, 0, 0, 0.1); /* L\303\251g\303\250re ombre lorsqu'appuy\303\251 */\n"
"    transform: translateY(2px); /* L\303\251g\303\250re translation vers le bas pour l'effet de pression */\n"
"}\n"
""));

        verticalLayout->addWidget(Cyc2);

        Cyc3 = new QPushButton(emplois);
        Cyc3->setObjectName("Cyc3");
        Cyc3->setCursor(QCursor(Qt::PointingHandCursor));
        Cyc3->setStyleSheet(QString::fromUtf8("/* Style pour le bouton Filiers - Style moderne d'entreprise */\n"
"#Cyc3 {\n"
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
"#Cyc3:hover {\n"
"    background: #f1f1f1; /* Fond l\303\251g\303\250rement plus fonc\303\251 au survol */\n"
"    color: #555555; /* Texte gris un peu plus clair au survol */\n"
"    border-color: #777777; /* Contour gris plus clair au survol */\n"
"}\n"
"\n"
"/* Effet de pression po"
                        "ur le bouton Filiers */\n"
"#Cyc3:active {\n"
"    background: #e6e6e6; /* Fond l\303\251g\303\250rement plus fonc\303\251 lorsqu'appuy\303\251 */\n"
"    box-shadow: 0 4px 6px rgba(0, 0, 0, 0.1); /* L\303\251g\303\250re ombre lorsqu'appuy\303\251 */\n"
"    transform: translateY(2px); /* L\303\251g\303\250re translation vers le bas pour l'effet de pression */\n"
"}\n"
""));

        verticalLayout->addWidget(Cyc3);

        LicEmp = new QPushButton(emplois);
        LicEmp->setObjectName("LicEmp");
        LicEmp->setCursor(QCursor(Qt::PointingHandCursor));
        LicEmp->setStyleSheet(QString::fromUtf8("/* Style pour le bouton Filiers - Style moderne d'entreprise */\n"
"#LicEmp {\n"
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
"#LicEmp:hover {\n"
"    background: #f1f1f1; /* Fond l\303\251g\303\250rement plus fonc\303\251 au survol */\n"
"    color: #555555; /* Texte gris un peu plus clair au survol */\n"
"    border-color: #777777; /* Contour gris plus clair au survol */\n"
"}\n"
"\n"
"/* Effet de pressio"
                        "n pour le bouton Filiers */\n"
"#LicEmp:active {\n"
"    background: #e6e6e6; /* Fond l\303\251g\303\250rement plus fonc\303\251 lorsqu'appuy\303\251 */\n"
"    box-shadow: 0 4px 6px rgba(0, 0, 0, 0.1); /* L\303\251g\303\250re ombre lorsqu'appuy\303\251 */\n"
"    transform: translateY(2px); /* L\303\251g\303\250re translation vers le bas pour l'effet de pression */\n"
"}\n"
""));

        verticalLayout->addWidget(LicEmp);

        MSTEmp = new QPushButton(emplois);
        MSTEmp->setObjectName("MSTEmp");
        MSTEmp->setCursor(QCursor(Qt::PointingHandCursor));
        MSTEmp->setStyleSheet(QString::fromUtf8("/* Style pour le bouton Filiers - Style moderne d'entreprise */\n"
"#MSTEmp {\n"
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
"#MSTEmp:hover {\n"
"    background: #f1f1f1; /* Fond l\303\251g\303\250rement plus fonc\303\251 au survol */\n"
"    color: #555555; /* Texte gris un peu plus clair au survol */\n"
"    border-color: #777777; /* Contour gris plus clair au survol */\n"
"}\n"
"\n"
"/* Effet de pressio"
                        "n pour le bouton Filiers */\n"
"#MSTEmp:active {\n"
"    background: #e6e6e6; /* Fond l\303\251g\303\250rement plus fonc\303\251 lorsqu'appuy\303\251 */\n"
"    box-shadow: 0 4px 6px rgba(0, 0, 0, 0.1); /* L\303\251g\303\250re ombre lorsqu'appuy\303\251 */\n"
"    transform: translateY(2px); /* L\303\251g\303\250re translation vers le bas pour l'effet de pression */\n"
"}\n"
""));

        verticalLayout->addWidget(MSTEmp);


        gridLayout->addLayout(verticalLayout, 2, 0, 1, 3);

        label = new QLabel(emplois);
        label->setObjectName("label");
        QFont font;
        font.setFamilies({QString::fromUtf8("Times New Roman")});
        font.setPointSize(12);
        font.setBold(true);
        label->setFont(font);

        gridLayout->addWidget(label, 0, 0, 1, 1);

        line = new QFrame(emplois);
        line->setObjectName("line");
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line, 1, 0, 1, 3);


        retranslateUi(emplois);

        QMetaObject::connectSlotsByName(emplois);
    } // setupUi

    void retranslateUi(QDialog *emplois)
    {
        emplois->setWindowTitle(QCoreApplication::translate("emplois", "Emplois", nullptr));
        Cyc1->setText(QCoreApplication::translate("emplois", "Cycle D'ing\303\251nieur S1", nullptr));
        Cyc2->setText(QCoreApplication::translate("emplois", "Cycle D'ing\303\251nieur S3", nullptr));
        Cyc3->setText(QCoreApplication::translate("emplois", "Cycle D'ing\303\251nieur S5", nullptr));
        LicEmp->setText(QCoreApplication::translate("emplois", "License S5", nullptr));
        MSTEmp->setText(QCoreApplication::translate("emplois", "Master S3", nullptr));
        label->setText(QCoreApplication::translate("emplois", "EMPLOIS", nullptr));
    } // retranslateUi

};

namespace Ui {
    class emplois: public Ui_emplois {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EMPLOIS_H

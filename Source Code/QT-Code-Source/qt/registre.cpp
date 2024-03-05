#include "registre.h"
#include "ui_registre.h"
#include "db.h"
#include <QMessageBox>


registre::registre(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::register_2)
{
    ui->setupUi(this);
}

registre::~registre()
{
    delete ui;
}

void registre::on_reg_button_clicked()
{
    //registre (pas encore)
    QString username , password,nom,prenom,cne,cin,date ;
    nom = ui->lineEdit_1nom->text();
    prenom  = ui->lineEdit_2prenom->text();
    cne = ui->lineEdit_3cne->text();
    cin = ui->lineEdit_4cin->text();
    date = ui->dateEdit-> text();



    if( cne.isEmpty() || cin.isEmpty() || date.isEmpty() || nom.isEmpty() || prenom.isEmpty()){
        qDebug() << "empty !!";
        QMessageBox::critical(this,tr("Attention "),tr("des informations non cmplet ! ")) ;
    }
    else{
        DB conn ;
        if(!conn.connect_db())
            qDebug() << "Failed to open Database " ;
        conn.connect_db();
        QSqlQuery qr ;
        qr.prepare("insert into etudiant (nom,prenom,cne,cin,date_ne) values ('"+nom+"','"+prenom+"','"+cne+"','"+cin+"','"+date+"') "); // katpreparer commande sql
        qDebug()<< qr.lastQuery() ;
        if(qr.exec())
        {
            QMessageBox::information(this,tr("Save"),tr("Saved")) ;
            conn.Deconnect_db();
            this->close();
        }
        else
            QMessageBox::critical(this,tr("Erreur"),qr.lastError().text());

    }



}


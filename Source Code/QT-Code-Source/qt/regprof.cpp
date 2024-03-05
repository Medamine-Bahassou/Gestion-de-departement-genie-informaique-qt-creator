#include "regprof.h"
#include "ui_regprof.h"
#include "mainwindow.h"
#include <QMessageBox>
regprof::regprof(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::regprof)
{
    ui->setupUi(this);
}

regprof::~regprof()
{
    delete ui;
}

void regprof::on_regprof_2_clicked()
{
    //registre (pas encore)
    QString username , password,nom,prenom,cne,cin,date ;
    nom = ui->lineEdit_1nom->text();
    prenom  = ui->lineEdit_2prenom->text();
    cin = ui->lineEdit_4cin->text();



    if( cin.isEmpty()  || nom.isEmpty() || prenom.isEmpty()){
        qDebug() << "empty !!";
        QMessageBox::critical(this,tr("Attention "),tr("des informations non cmplet ! ")) ;
    }
    else{
        DB conn ;
        if(!conn.connect_db())
            qDebug() << "Failed to open Database " ;
        conn.connect_db();
        QSqlQuery qr ;
        qr.prepare("insert into prof (nom,prenom,cin) values ('"+nom+"','"+prenom+"','"+cin+"') "); // katpreparer commande sql
        qDebug()<< qr.lastQuery() ;
        if(qr.exec())
        {
            QMessageBox::information(this,tr("Save"),tr("Saved")) ;
            conn.Deconnect_db();
        }
        else
            QMessageBox::critical(this,tr("Erreur"),qr.lastError().text());

    }

}


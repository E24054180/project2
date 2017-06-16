#include "setaccountwindow.h"
#include "ui_setaccountwindow.h"

setaccountwindow::setaccountwindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::setaccountwindow),
    w2(new otherwindow)
{
    ui->setupUi(this);

    std::ifstream in("secret1.txt", std::ios::in);
    in >> line1;

    std::ifstream in1("secret2.txt",std::ios::in);
    in1 >> line2;

}

setaccountwindow::~setaccountwindow()
{
    delete ui;
}






void setaccountwindow::on_pushButton_clicked()
{
    QString username = ui -> user_name -> text();
    QString password = ui -> user_password -> text();

    std::string username_1 = username.toStdString();
    std::string password_1 = password.toStdString();

    if( username_1 == line1 && password_1 == line2){
         QMessageBox::information(this,"Success pass","username and passeord are correct!");

         this->hide();
         w2->show();
         w2-> setWindowTitle(QObject::tr("cardwindow"));
         w2->move(300, 100);
         w2->startselectnumber();

     }

     else
         QMessageBox::information(this,"Failure to game","username and password are not correct!");

}




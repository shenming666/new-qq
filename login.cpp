#include "login.h"
#include "ui_login.h"

login::login(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::login)
{
    ui->setupUi(this);
}

login::~login()
{
    delete ui;
}

void login::on_btnLogin_clicked()
{
    if(ui->LineEdit_IP->text().isEmpty()){
        QMessageBox::information(this, "提示", "IP不能为空！");
        return;
    }

    if(ui->LineEdit_Port->text().isEmpty()){
        QMessageBox::information(this, "提示", "端口不能为空！");
        return;
    }

    //连接到服务器
    QString ip = ui->LineEdit_IP->text();
    int port = ui->LineEdit_Port->text().toInt();

    //NetDelegate *delegate = NetDelegate::getInstance();
   // if(delegate->connectToServer(ip, port, ui->LineEdit_Name->text())){
    //    accept();
    //}else
    {
        QMessageBox::information(this, "连接服务器失败", "请检查IP和端口是否正确，以及网络是否连通！");
    }
}

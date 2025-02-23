#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QFont font("Arial", 12, QFont::Bold);
    this->setFont(font);
    this->setWindowTitle("The grade calculation unit test");

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
        //5
        int totalQuestion=100;
        int tGrade=85;
        double tQuestion=static_cast<double>(totalQuestion);
        double totalGrade=static_cast<double>(tGrade);
        QString sGrade=calckgrade->calculategrade(totalGrade,tQuestion);
        ui->textEdit->append(sGrade);
        //4
        tGrade=75;
        tQuestion=static_cast<double>(totalQuestion);
        totalGrade=static_cast<double>(tGrade);
        sGrade=calckgrade->calculategrade(totalGrade,tQuestion);
        ui->textEdit->append(sGrade);
        //3
        tGrade=50;
        tQuestion=static_cast<double>(totalQuestion);
        totalGrade=static_cast<double>(tGrade);
        sGrade=calckgrade->calculategrade(totalGrade,tQuestion);
        ui->textEdit->append(sGrade);
        //2
        tGrade=49;
        tQuestion=static_cast<double>(totalQuestion);
        totalGrade=static_cast<double>(tGrade);
        sGrade=calckgrade->calculategrade(totalGrade,tQuestion);
        ui->textEdit->append(sGrade);
        //error 1
        totalQuestion=0;
        tGrade=85;
        tQuestion=static_cast<double>(totalQuestion);
        totalGrade=static_cast<double>(tGrade);
        sGrade=calckgrade->calculategrade(totalGrade,tQuestion);
        ui->textEdit->append(sGrade);
        //error 2
        totalQuestion=85;
        tGrade=100;
        tQuestion=static_cast<double>(totalQuestion);
        totalGrade=static_cast<double>(tGrade);
        sGrade=calckgrade->calculategrade(totalGrade,tQuestion);
        ui->textEdit->append(sGrade);


}


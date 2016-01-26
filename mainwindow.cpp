#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QPainter>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{

    ui->setupUi(this);
    m_pPixmap = new QPixmap(200, 100);
    QPixmap pix(":/img/clear.png");
    QPainter p(m_pPixmap);
    p.drawPixmap(0, 0, pix);
    p.drawPixmap(100, 0, pix);
    ui->displayImageLabel->setPixmap(*m_pPixmap);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_triangleButton_clicked()
{
    setDisplayPixmap(":/img/triangle.png", 100, 0);
}

void MainWindow::on_circleButton_clicked()
{
    setDisplayPixmap(":/img/circle.png", 100, 0);
}

void MainWindow::on_clearButton_clicked()
{
    setDisplayPixmap(":/img/clear.png", 100, 0);
}

void MainWindow::on_squareButton_clicked()
{
    setDisplayPixmap(":/img/square.png", 100, 0);
}

void MainWindow::on_squareButton_2_clicked()
{
    setDisplayPixmap(":/img/square.png", 0, 0);
}

void MainWindow::setDisplayPixmap(const char* q, int x, int y)
{
    QPixmap pix(q);
    QPainter p(m_pPixmap);
    p.drawPixmap(x, y, pix);
    ui->displayImageLabel->setPixmap(*m_pPixmap);
}

void MainWindow::on_triangleButton_2_clicked()
{
    setDisplayPixmap(":/img/triangle.png", 0, 0);
}

void MainWindow::on_circleButton_2_clicked()
{
    setDisplayPixmap(":/img/circle.png", 0, 0);
}

void MainWindow::on_clearButton_2_clicked()
{
    setDisplayPixmap(":/img/clear.png", 0, 0);
}

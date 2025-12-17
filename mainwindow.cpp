#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <random>
#include <QDebug>
#include <set>

#define PRANGE      69
#define PBALL       26
#define MRANGE      70
#define MBALL       25

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    // Make button square
    ui->btn1->setFixedSize(48, 48);
    ui->btn2->setFixedSize(48, 48);
    ui->btn3->setFixedSize(48, 48);
    ui->btn4->setFixedSize(48, 48);
    ui->btn5->setFixedSize(48, 48);
    ui->btnPB->setFixedSize(48, 48);
    ui->btnSubmit->setFixedSize(200, 32);

    // Clear Values
    ui->btn1->setText("L");
    ui->btn2->setText("E");
    ui->btn3->setText("T");
    ui->btn4->setText("S");
    ui->btn5->setText("G");
    ui->btnPB->setText("O");

    this->setStyleSheet(
        " QPushButton[type=\"primary\"] {"
        " background-color:#2979FF;"
        " color:white;"
        " border-radius:24px;"
        " padding:8px 16px;"
        " font-weight: bold;"
        "}"
        "QPushButton[type=\"danger\"] {"
        " background-color:#D32F2F;"
        " color:white;"
        " border-radius:24px;"
        " padding:8px 16px;"
        " font-weight: bold;"
        "}"
        "QPushButton[type=\"submit\"] {"
        " background-color:#2E7D32;"   /* green */
        " color:white;"
        " border-radius:12px;"
        " font-weight:bold;"
        " padding:8px 16px;"
        "}"
        "QPushButton[type=\"submit\"]:hover {"
        " background-color:#1B5E20;"
        "}"
    );

}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_btnSubmit_clicked()
{
    std::set<int> numbers;
    while (numbers.size() < 5) {
        numbers.insert(rand_generator(PRANGE));
    }

    auto it = numbers.begin();
    ui->btn1->setText(QString::number(*it));
    std::advance(it, 1);
    ui->btn2->setText(QString::number(*it));
    std::advance(it, 1);
    ui->btn3->setText(QString::number(*it));
    std::advance(it, 1);
    ui->btn4->setText(QString::number(*it));
    std::advance(it, 1);
    ui->btn5->setText(QString::number(*it));

    ui->btnPB->setText(QString::number(rand_generator(PBALL)));
}

int MainWindow::rand_generator(int range)
{
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<int> dist(1, range);

    return dist(gen);
}



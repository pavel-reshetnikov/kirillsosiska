#include "gui.h"
#include "ui_gui.h"

gui::gui(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::gui)
{
    ui->setupUi(this);
    model = new QStandardItemModel(1,3,this);
    ui->tableView->setModel( model);
    model->setHeaderData(0, Qt::Horizontal, "Фио");
     model->setHeaderData(1, Qt::Horizontal, "Мобильный телефон");
     model->setHeaderData(2, Qt::Horizontal, "Домашний телфон");
}
Library c;
gui::~gui()
{
    delete ui;
}

void gui::on_pushButton_2_clicked() // добавление строки
{
    model->insertRow(model->rowCount());
}


void gui::on_pushButton_clicked()// удаление строки
{
    model->removeRow(row);
}


void gui::on_tableView_clicked(const QModelIndex &index) // получение индекса строки и стоблца
{
    row = index.row();
    column = index.column();
}


void gui::on_pushButton_3_clicked() // добавление столбца
{
    QString namecolumn = ui->lineEdit->text();
    ncolumn = c.pluscolumn(model,namecolumn,ncolumn);
}


void gui::on_pushButton_4_clicked() //удаление столбца
{
    ncolumn = c.deletecolumn(model, column, ncolumn);
}


#ifndef GUI_H
#define GUI_H

#include <QMainWindow>
#include <QStandardItemModel>
#include <qstring.h>
#include <../library/library.h>
QT_BEGIN_NAMESPACE
namespace Ui { class gui; }
QT_END_NAMESPACE

class gui : public QMainWindow
{
    Q_OBJECT

public:
    gui(QWidget *parent = nullptr);
    ~gui();

private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

    void on_tableView_clicked(const QModelIndex &index);

    void on_pushButton_3_clicked();


    void on_pushButton_4_clicked();

private:
    Ui::gui *ui;

    QStandardItemModel *model;
    int row;
    int ncolumn =3;
    int column;

};
#endif // GUI_H

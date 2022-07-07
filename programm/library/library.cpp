#include "library.h"

Library::Library()
{ 
}
int Library::pluscolumn(QStandardItemModel *model, QString namecolumn, int ncolumn)
{
    model->insertColumn(model->columnCount());
    model->setHeaderData(ncolumn, Qt::Horizontal, namecolumn);
    return ++ncolumn;
}
int Library::deletecolumn(QStandardItemModel *model, int column, int ncolumn)
{
    model->removeColumn(column);
    return --ncolumn;
}

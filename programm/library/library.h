#ifndef LIBRARY_H
#define LIBRARY_H

#include "library_global.h"
#include "QStandardItemModel"
class LIBRARY_EXPORT Library
{
public:
    Library();
    int pluscolumn(QStandardItemModel *model, QString namecolumn, int ncolumn);
    int deletecolumn(QStandardItemModel *model,int column, int ncolumn);
};
#endif // LIBRARY_H

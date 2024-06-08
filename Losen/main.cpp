#include "Losen.h"
#include <QtWidgets/QApplication>
//
int main(int argc, char *argv[])
{
  QApplication a(argc, argv);
  Losen w;

  w.show();
  return a.exec();
}

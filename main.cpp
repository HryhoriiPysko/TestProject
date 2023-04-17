#include "ihuman.h"
#include "mainwindow.h"
#include "worker.h"
#include <QApplication>

int main(int argc, char *argv[]) {
  // QApplication a(argc, argv);
  // MainWindow w;
  // w.show();
  Ihuman *ihuman{new Worker("Garik ", 22, " terraprof ")};
  std::cout << ihuman->name() << ihuman->age() << ihuman->employment();
  // return a.exec();
}

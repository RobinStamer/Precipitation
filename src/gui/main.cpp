#include <QApplication>
#include <QPushButton>
#include <QGridLayout>
#include <QWidget>

#include "FileList.h"
#include "FileBar.h"

int main(int argc, char *argv[]) {
	QApplication app(argc, argv);

	QWidget win;
	QGridLayout grid;
	FileList fl;
	FileBar b1, b2, b3;

	fl.addFileBar(&b1);
	fl.addFileBar(&b2);
	fl.addFileBar(&b3);

	grid.addWidget(&fl, 0, 0);

	QPushButton hello("Hello world!");
	hello.resize(100, 30);
	grid.addWidget(&hello, 0, 1);

	win.setLayout(&grid);

	win.show();
	return app.exec();
}

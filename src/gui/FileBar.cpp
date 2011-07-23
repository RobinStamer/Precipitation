#include "FileBar.h"

FileBar::FileBar(QWidget *parent) : QGroupBox(parent) {
	this->setTitle(tr("FileName"));
}

FileBar::~FileBar() {
}

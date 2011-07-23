#include "FileList.h"

void FileList::addFileBar(FileBar * fb) {
	this->layout->addWidget(fb);
}

FileList::FileList(QWidget *parent) : QWidget(parent) {
	this->layout = new QVBoxLayout;

	setLayout(layout);
}

FileList::~FileList() {
	delete this->layout;
}

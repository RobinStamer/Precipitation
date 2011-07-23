#ifndef FILELIST_H
#define FILELIST_H

#include <QVBoxLayout>
#include <QWidget>

#include "FileBar.h"

class FileList : public QWidget {
	public:
		FileList(QWidget *parent = 0);
		~FileList();

		void addFileBar(FileBar *);
	protected:
		QVBoxLayout *layout;
};

#endif

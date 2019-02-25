#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_mynotpad.h"
#include<qmessagebox.h>   //弹出信息
#include<qdebug.h>        //打印信息
#include<qfile.h>
#include<qfiledialog.h>
#include<qdir.h>
#include<qtextstream.h>
class mynotpad : public QMainWindow
{
	Q_OBJECT

public:
	mynotpad(QWidget *parent = Q_NULLPTR);

private:
	Ui::mynotpadClass ui;
	QString saveFileName;
private slots:
    void newFileSlot();
	void openFileSlot();//打开一个已经存在的文本文件
	void saveFileSlot();//保存文件到磁盘
	void saveAsFileSlot();
};

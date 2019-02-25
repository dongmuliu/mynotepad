#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_mynotpad.h"
#include<qmessagebox.h>   //������Ϣ
#include<qdebug.h>        //��ӡ��Ϣ
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
	void openFileSlot();//��һ���Ѿ����ڵ��ı��ļ�
	void saveFileSlot();//�����ļ�������
	void saveAsFileSlot();
};

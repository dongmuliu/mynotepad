#include "mynotpad.h"

mynotpad::mynotpad(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	this->setWindowTitle("Unitled ---notepad");
	QObject::connect(ui.newAction, SIGNAL(triggered()), this, SLOT(newFileSlot()));
	QObject::connect(ui.openAction, SIGNAL(triggered()), this, SLOT(openFileSlot()));
	QObject::connect(ui.saveAction, SIGNAL(triggered()), this, SLOT(saveFileSlot()));
}

void mynotpad::newFileSlot()
{
	if (ui.textEdit->document()->isModified())
	{
		qDebug() << "current file modified";
	}
	else
	{
		//qDebug() << "not modified";
		ui.textEdit->clear();
		this->setWindowTitle("Unitled.txt ----------huiwensibai");
	}
}
void mynotpad::openFileSlot()
{
	//get the file name
	QString fileName = QFileDialog::getOpenFileName(this, "Open File", QDir::currentPath());
	//qDebug() << "fileName is " << fileName;
	if (fileName.isEmpty())//isNull
	{
		QMessageBox::information(this, "Error Message", "Please Select a Text");
		return;
	}
	QFile *file = new QFile;
	file->setFileName(fileName);//set file name
	bool ok = file->open(QIODevice::ReadOnly);//open file as read only mode
	if (ok)
	{
		//文件与文本流相关联
		QTextStream in(file);
		ui.textEdit->setText(in.readAll());//read all context from the file
		file->close();
		delete file;
	}
	else
	{
		QMessageBox::information(this, "Error Message", "File Open Error"+file->errorString());
		return;
	}
}
void mynotpad::saveFileSlot()
{
	QString fileName = QFileDialog::getSaveFileName(this, "Save File", QDir::currentPath());
	if (fileName.isEmpty())
	{
		QMessageBox::information(this, "Error Message", "Please Select A File");
		return;
	}
	QFile *file = new QFile;
	file->setFileName(fileName);
	bool ok = file->open(QIODevice::WriteOnly);
	if (ok)
	{
		QTextStream out(file);
		out << ui.textEdit->toPlainText();//这里是去除textEdit当中的纯文本
		file->close();
		delete file;
	}
	else
	{
		QMessageBox::information(this, "Error Message", "Save File Error");
		return;
	}
}
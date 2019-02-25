#include "mynotpad.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	mynotpad w;
	w.show();
	return a.exec();
}

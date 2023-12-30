#include<qapplication.h>
#include<qwidget.h>
int main(int argc, char* argv[])
{
	QApplication a(argc, argv);
	QWidget w;
	w.show();
	//此文件已修改

	return a.exec();
}
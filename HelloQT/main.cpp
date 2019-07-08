#include<QApplication>
#include<QWidget>
#include<QPushButton>
int main(int argc, char** argv)
{
    QApplication app(argc,argv);

    QWidget w;
    w.setWindowTitle("Hello QT");


    QPushButton b;
    b.setText("^_^");
    b.setParent(&w);
    b.move(100,100);
    //b.show();

      w.show();

    return app.exec();
}

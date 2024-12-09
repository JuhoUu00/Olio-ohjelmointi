#include <QCoreApplication>
#include "myclass.h"

int main(int argc, char *argv[]) {
    QCoreApplication app(argc, argv);

    MyClass obj;
    obj.raiseMySignal();

    return 0;
}

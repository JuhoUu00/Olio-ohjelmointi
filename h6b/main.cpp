#include <QCoreApplication>
#include "exampleclass.h"

int main(int argc, char *argv[]) {
    QCoreApplication app(argc, argv);

    ExampleClass example;
    example.startToWait();

    return app.exec();
}

//Start
    //Tämä tulostus tapahtuu ExampleClass-konstruktorissa heti, kun olio luodaan.

//End
       // Tämä tulostus tapahtuu heti connect-funktion jälkeen, vielä samassa konstruktorissa.

//Terve
    //Tämä tulostus ilmestyy, kun signaali readyToSay emitoidaan metodissa startToWait, ja siihen yhdistetty slotti sayHelloSlot suoritetaan.

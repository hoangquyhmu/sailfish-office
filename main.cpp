 
#include <QApplication>
#include <QtDeclarative/QtDeclarative>
#include <QDeclarativeView>

#include "sailfishapplication/sailfishapplication.h"
#include "models/documentlistmodel.h"

Q_DECL_EXPORT int main(int argc, char *argv[])
{
    auto app = Sailfish::createApplication(argc, argv);
    auto view = Sailfish::createView("main.qml");
    
    Sailfish::showView(view);
    
    return app->exec();
}

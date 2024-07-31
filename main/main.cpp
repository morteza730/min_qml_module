#include <QGuiApplication>
#include <QQmlApplicationEngine>

int main(int argc, char *argv[])
{
    QGuiApplication app(argc, argv);
    app.setApplicationName("MinApp");
    QQmlApplicationEngine engine;
    QObject::connect(&engine,&QQmlApplicationEngine::objectCreationFailed,&app,[&app](){app.exit(-1);});
    engine.loadFromModule("main_module","Main_Page");
    return app.exec();
}

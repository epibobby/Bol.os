#include "firstwindow.h"
#include "ui_firstwindow.h"
#include <string>
#include <iostream>

FirstWindow::FirstWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::FirstWindow)
{
    ui->setupUi(this);
    networkSession = 0;
    tcpSocket = new QTcpSocket(this);
    connect(tcpSocket, SIGNAL(readyRead()), this, SLOT(readFortune()));
    connect(tcpSocket, SIGNAL(error(QAbstractSocket::SocketError)),
            this, SLOT(displayError(QAbstractSocket::SocketError)));
}

FirstWindow::~FirstWindow()
{
    delete ui;
}

void FirstWindow::on_pushButton_Ok_clicked()
{
    std::cout << "USER :" << this->ui->Username->text().toStdString() << std::endl;
    std::cout << "PASS :" << this->ui->Password->text().toStdString() << std::endl;
    this->Username = this->ui->Username->text().toStdString();
    this->Password = this->ui->Password->text().toStdString();
    requestNewFortune();
}


void FirstWindow::on_pushButton_Cancel_clicked()
{
    this->ui->Username->clear();
    this->ui->Password->clear();
}

void FirstWindow::on_pushButton_Create_clicked()
{
    CreateCount Create;
    Create.exec();
}

void FirstWindow::requestNewFortune()
{
    int port = 4242;
    blockSize = 0;
    tcpSocket->abort();
    tcpSocket->connectToHost("10.17.72.181",
                             port);
}

void FirstWindow::readFortune()
{
    QDataStream in(tcpSocket);
    in.setVersion(QDataStream::Qt_4_0);

    if (blockSize == 0) {
        if (tcpSocket->bytesAvailable() < (int)sizeof(quint16))
            return;

        in >> blockSize;
    }

    if (tcpSocket->bytesAvailable() < blockSize)
        return;

    QString nextFortune;
    in >> nextFortune;

    if (nextFortune == currentFortune) {
        QTimer::singleShot(0, this, SLOT(requestNewFortune()));
        return;
    }

    currentFortune = nextFortune;
    std::cout << "Received = :" << currentFortune.toStdString() << std::endl;
    // CREATION FENETRE PRINCIPALE
    this->hide();
    mainwindow MainView;
    MainView.exec();
}

void FirstWindow::displayError(QAbstractSocket::SocketError socketError)
{
    switch (socketError) {
    case QAbstractSocket::RemoteHostClosedError:
        break;
    case QAbstractSocket::HostNotFoundError:
        std::cout << "The host was not found. Please check the host name and port settings." << std::endl;
        break;
    case QAbstractSocket::ConnectionRefusedError:
        std::cout << "The connection was refused by the peer. Make sure the fortune server is running, and check that the host name and port settings are correct." << std::endl;
        break;
    default:
        std::cout << "The following error occurred: %1." << tcpSocket->errorString().toStdString() << std::endl;
    }
}

void FirstWindow::sessionOpened()
{
    // Save the used configuration
    QNetworkConfiguration config = networkSession->configuration();
    QString id;
    if (config.type() == QNetworkConfiguration::UserChoice)
        id = networkSession->sessionProperty(QLatin1String("UserChoiceConfiguration")).toString();
    else
        id = config.identifier();

    QSettings settings(QSettings::UserScope, QLatin1String("Trolltech"));
    settings.beginGroup(QLatin1String("QtNetwork"));
    settings.setValue(QLatin1String("DefaultNetworkConfiguration"), id);
    settings.endGroup();

    std::cout << "This examples requires that you run the Fortune Server example as well." << std::endl;
}

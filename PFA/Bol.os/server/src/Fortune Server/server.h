#ifndef SERVER_H
 #define SERVER_H

 #include <QDialog>

 class QLabel;
 class QPushButton;
 class QTcpServer;
 class QNetworkSession;

 class Server : public QDialog
 {
     Q_OBJECT

 public:
     Server(QWidget *parent = 0);

 private slots:
     void sessionOpened();
     void sendFortune();

 private:
     QLabel *statusLabel;
     QPushButton *quitButton;
     QTcpServer *tcpServer;
     QStringList fortunes;
     QNetworkSession *networkSession;
 };

 #endif
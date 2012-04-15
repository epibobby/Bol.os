 #ifndef MEDIALAYER_H
 #define MEDIAPLAYER_H


 #pragma once

 #include <GL/GLU.h>
 #include <QtGui/QWidget>
 #include <QtGui/QApplication>
 #include <QtCore/QTimerEvent>
 #include <QtGui/QShowEvent>
 #include <QtGui/QIcon>
 #include <QtCore/QBasicTimer>
 #include <QtGui/QAction>

 #include <phonon/audiooutput.h>
 #include <phonon/backendcapabilities.h>
 #include <phonon/effect.h>
 #include <phonon/effectparameter.h>
 #include <phonon/effectwidget.h>
 #include <phonon/mediaobject.h>
 #include <phonon/seekslider.h>
 #include <phonon/videowidget.h>
 #include <phonon/volumeslider.h>

 #include "autoshutdown.h"
 #include "mywindow.h"

 class QPushButton;
 class QLabel;
 class QSlider;
 class QTextEdit;
 class QMenu;
 class Ui_settings;

 class myWindow;
 class MediaPlayer;

 class MediaVideoWidget : public Phonon::VideoWidget
 {
     Q_OBJECT

 public:
     MediaVideoWidget(MediaPlayer *player, QWidget *parent = 0);
     ~MediaVideoWidget();
     myWindow *menu;

 public slots:
     // Over-riding non-virtual Phonon::VideoWidget slot
     void setFullScreen(bool);
     void menuOn();
     void menuOff();

 signals:
     void fullScreenChanged(bool);

 protected:
     void mouseDoubleClickEvent(QMouseEvent *e);
     void mouseMoveEvent(QMouseEvent *e);
     void mousePressEvent(QMouseEvent *e);
     void keyPressEvent(QKeyEvent *e);
     bool event(QEvent *e);
     void timerEvent(QTimerEvent *e);
     void dropEvent(QDropEvent *e);
     void dragEnterEvent(QDragEnterEvent *e);

 private:
     MediaPlayer *m_player;
     QBasicTimer m_timer;
     QAction m_action;
     bool _menuOn;
     QTimer *_menuTimer;
 };

 class MediaPlayer :
             public QWidget
 {
     Q_OBJECT
 public:
     MediaPlayer();

     void dragEnterEvent(QDragEnterEvent *e);
     void dragMoveEvent(QDragMoveEvent *e);
     void dropEvent(QDropEvent *e);
     void handleDrop(QDropEvent *e);
     void setFile(const QString &text);
     void setLocation(const QString &location);
     void initVideoWindow();
     void initSettingsDialog();
     void setVolume(qreal volume);
     void setSmallScreen(bool smallScreen);

 public slots:
     void openFile();
     void rewind();
     void forward();
     void updateInfo();
     void updateTime();
     void finished();
     void playPause();
     void scaleChanged(QAction *);
     void aspectChanged(QAction *);
     void shutdown();

 private slots:
     void setAspect(int);
     void setScale(int);
     void setSaturation(int);
     void setContrast(int);
     void setHue(int);
     void setBrightness(int);
     void stateChanged(Phonon::State newstate, Phonon::State oldstate);
     void effectChanged();
     void showSettingsDialog();
     void showContextMenu(const QPoint& point);
     void bufferStatus(int percent);
     void openUrl();
 #ifdef Q_OS_SYMBIAN
     void selectIAP();
 #endif
     void openRamFile();
     void configureEffect();
     void hasVideoChanged(bool);

 private:
     bool playPauseForDialog();
 #ifdef Q_OS_SYMBIAN
     void selectIAPL();
 #endif

     QIcon playIcon;
     QIcon pauseIcon;
     QMenu *fileMenu;
     QPushButton *playButton;
     QPushButton *rewindButton;
     QPushButton *forwardButton;
     Phonon::SeekSlider *slider;
     QLabel *timeLabel;
     QLabel *progressLabel;
     Phonon::VolumeSlider *volume;
     QSlider *m_hueSlider;
     QSlider *m_satSlider;
     QSlider *m_contSlider;
     QLabel *info;
     Phonon::Effect *nextEffect;
     QDialog *settingsDialog;
     Ui_settings *ui;
     QAction *m_fullScreenAction;

     QWidget m_videoWindow;
     Phonon::MediaObject m_MediaObject;
     Phonon::AudioOutput m_AudioOutput;
     MediaVideoWidget *m_videoWidget;
     Phonon::Path m_audioOutputPath;
     bool m_smallScreen;
     AutoShutdown *AutoS;
 };

 #endif //MEDIAPLAYER_H

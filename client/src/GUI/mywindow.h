#ifndef MYWINDOW_H
#define MYWINDOW_H


#pragma once


#include "mediaplayer.h"
#include "myGLWidget.h"

class MediaPlayer;
class myWindow : public myGLWidget
{
    Q_OBJECT
public:
    explicit myWindow(QWidget *parent = 0);
    void initPlayer(MediaPlayer*);
    void keyPressEvent(QKeyEvent *keyEvent);
    void initializeGL();
    void resizeGL(int width, int height);
    void paintGL();
    void loadTexture(QString textureName);
    void loadTextureMenu();
private:
    MediaPlayer *_player;
    GLuint texture[2];
    float f_x;
    int _play;
    int _playerWidth;
    int _playerHeight;
};

#endif // MYWINDOW_H

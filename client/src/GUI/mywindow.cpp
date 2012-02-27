#include "mywindow.h"
#include <iostream>

myWindow::myWindow(QWidget *parent)
    : myGLWidget(60, parent, "Premier Polygone avec OpenGL et Qt")
{
    _play = 1;
}

void myWindow::initPlayer(MediaPlayer *player)
{
    _player= player;
}

void myWindow::keyPressEvent(QKeyEvent *keyEvent)
{
    switch(keyEvent->key())
    {
        case Qt::Key_Space:
            _player->playPause();
          break;
    }
}

void myWindow::loadTexture(QString textureName)
{
    static int i;
    QImage qim_Texture;
    QImage qim_TempTexture;
    qim_TempTexture.load(textureName);
    qim_Texture = QGLWidget::convertToGLFormat( qim_TempTexture );
    glGenTextures(2, &texture[i]);
    glBindTexture(GL_TEXTURE_2D, texture[i++]);
    glTexImage2D(GL_TEXTURE_2D, 0, 3, qim_Texture.width(), qim_Texture.height(), 0, GL_RGBA, GL_UNSIGNED_BYTE, qim_Texture.bits() );
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
}


void myWindow::initializeGL()
{
    f_x = 0.0;
    loadTexture("images/play.png");
    loadTexture("images/pause.png");
    glEnable(GL_TEXTURE_2D);
    glShadeModel(GL_SMOOTH);

    glClearColor(0.0f, 0.0f, 0.0f, 0.0f);
    glClearDepth(1.0f);

    glEnable(GL_DEPTH_TEST);
    glDepthFunc(GL_LEQUAL);

    glHint(GL_PERSPECTIVE_CORRECTION_HINT, GL_NICEST);
}

void myWindow::resizeGL(int width, int height)
{
    if(height == 0)
        height = 1;
    glViewport(0, 0, width, height);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluPerspective(45.0f, (GLfloat)width/(GLfloat)height, 0.1f, 100.0f);
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
}

void myWindow::loadTextureMenu()
{
    switch (_play) {
        case 0 : _play = 1; break;
        case 1 : _play = 0; break;
    }
}

void myWindow::paintGL()
{
    f_x += 0.1;
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glLoadIdentity();
    glTranslatef(-1.5f, 0.0f, -6.0f);
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glBindTexture(GL_TEXTURE_2D, texture[_play]);
    glBegin(GL_QUADS);
    glTexCoord2f(0.0f, 0.0f); glVertex3f(-7.1f, -2.0f,  1.0f);
    glTexCoord2f(1.0f, 0.0f); glVertex3f( 10.2f, -2.0f,  1.0f);
    glTexCoord2f(1.0f, 1.0f); glVertex3f( 10.2f,  2.1f,  1.0f);
    glTexCoord2f(0.0f, 1.0f); glVertex3f(-7.1f,  2.1f,  1.0f);
    glEnd();
}

#include "lmc.h"
#include <iostream>
#include "ui_mainwindow.h"


LMC::LMC(MainWindow *w)
{
}

LMC::~LMC()
{
}

void LMC::on_AddYourLibrary_clicked()
{
    std::cout << "Add your library" << std::endl;
}

void LMC::on_PlayDayMovie_clicked()
{
   std::cout << "Play a movie" << std::endl;
}


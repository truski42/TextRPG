#ifndef INTRO_H
#define INTRO_H

#include <iostream>
#include "Levels\level1.h"

class PlayerClass
{
    protected:
        char choiceLetter;
        std::string playerName;
        int health;
        int mana;
        int strenght;
    public:
        PlayerClass();
        void ChooseClass();
        void DescriptionClass(char numberClass);
        void EnterName(std::string playerName);
};

class PlayerInfo : public PlayerClass
{
    public:
        void PrintName();   
};

#endif



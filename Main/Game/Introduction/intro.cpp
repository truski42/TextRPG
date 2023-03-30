#include "intro.h"
#include "Levels\level1.h"

#include <iostream>
#include <string>

PlayerInfo pi;
// constructor
PlayerClass::PlayerClass()
{
}

// function for choosing a class
void PlayerClass::ChooseClass(){
    system("cls");
    std::cout << "[1]. Warrior\n";
    std::cout << "[2]. Mage\n";
    std::cout << "Choose your class: ";
    std::cin >> choiceLetter;

    switch (choiceLetter)
    {
    case '1':
        PlayerClass::DescriptionClass(choiceLetter);
        break;
    case '2':
        PlayerClass::DescriptionClass(choiceLetter);
        break;
    default:
        std::cout << "Invalid key";

    }
}

// function for description class
void PlayerClass::DescriptionClass(char numberClass){
       // system("cls");
        // showing correct class description
    switch (numberClass)
    {
        case '1':
            std::cout << "You choose Warrior\n";
            std::cout << "| HP 100 | Strenght 10 | Mana 0 |\n";
            std::cout << "Are you sure you want to become a warrior ?\n";
            std::cout << "[y/n] ";
            std::cin >> choiceLetter;
            // confirmation of class selection
            if (choiceLetter == 'y') 
            {
                PlayerClass::EnterName(playerName);
                break;
            }
            else
            {
                PlayerClass::ChooseClass();
            }
            break;
        case '2':
            std::cout << "You choose Mage\n";
            std::cout << "| HP 50 | Strenght 5 | Mana 10 |\n";
            std::cout << "Are you sure you want to become a mage ?\n";
            std::cout << "[y/n] ";
            std::cin >> choiceLetter;
            // confirmation of class selection
            if (choiceLetter == 'y')
            {
                //   system("cls");
                PlayerClass::EnterName(playerName);
            }
            else
            {
                PlayerClass::ChooseClass();
            }
            break;
    }
}

void PlayerClass::EnterName(std::string playerName){
    system("cls");
    std::cout << "| Please enter your name: ";
    std::cin >> playerName;
    //std::getline(std::cin, playerName);
}


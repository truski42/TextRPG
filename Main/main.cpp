#include <iostream>
#include "Game\Introduction\intro.cpp"
#include "main.h"

int choice;
// Menu section

int main(){
    ShowMenu(choice);
    return 0; 
}
PlayerClass p1;
//Showing up game menu
void ShowMenu (char choice){
    while(true)
    {
        //system("cls");
        std::cout << "/-----/\t  Menu\t\t/-----/" << std::endl;
        std::cout << "/-----/\t  [1]. Play\t/-----/" << std::endl;
       // std::cout << "[2]. Language\n";
        std::cout << "/-----/\t  [2]. Quit\t/-----/" << std::endl;
        std::cout << "/-----/\t  Choice: ";
        switch (choice)
        {
        case '1':
            p1.ChooseClass();
            break;
        
        /*case '2': 
            Language(choice);
            break;
        */
        case '2':
            system("cls");
            std::cout << "Quiting.";
            Sleep(300);
            system("cls");
            std::cout << "Quiting..";
            Sleep(300);
            system("cls");
            std::cout << "Quiting...";
            exit(0);
        }
        std::cin >> choice;
    }
}

//Change game language
/*void Language(int choice){
    system("cls");
    while (choice != -1)
    {
    std::cout << "[1]. English\n";
    std::cout << "[2]. Polish\n";
    std::cout << "[0]. Back to menu\n";
    std::cout << "Your choice: ";
    std::cin >> choice;

    switch (choice)
    {
    case '0':
        //std::cout << "oke";
        ShowMenu(choice);
        break;
    case '1':
        std::cout << "You choose english";
        break;
    case '2':
        std::cout << "Wybrales polski";
        break;
    default:
        std::cout << "Invalid key";
        Sleep(1000);
        system(" cls ");
        break;
    }
    }
}
*/
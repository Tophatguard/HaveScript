#include <iostream>
#include <string>

using namespace std;

int story() {
    system("CLS");
    string name;
    string input;
    int health = 50;
    std::cout << "enter your name\n";
    std::cin >> name;
    std::cout << "Hello, " + name + '\n';
    std::cout << "type newFile for start\n";
    std::cin >> input;
    if (input == "newFile") {
        std::cout << "then your journey begins...\n";
        system("pause");
        system("CLS");
        std::cout << name + "! WAKE UP!\n";
        std::cout << "you find yourself in a forest. where do you go?\n";
        std::cout << "you can go forwards or to the right.\n";
        std::cout << "(forwards or right) ";
        std::cin >> input;
        if (input == "right") {
            std::cout << "it's just a path to the forward path.\n";
            system("pause");
        }
        std::cout << "you go forwards...\n";
        std::cout << "you also find a snake.\n";
        std::cout << "the snake bites you.\n";
        std::cout << "your HP went down by 10!\n";
        std::cout << "your health is now " + health + '!';
        std::cout << "what to do: runAway or fightBack\n";
        std::cin >> input;
        if (input == "fightBack") {
            std::cout << "you try, but you fail.\n";
            std::cout << "game over. restart the application to retry\n";
            system("pause");
        }
    }
    else {
        return 0;
    }
}
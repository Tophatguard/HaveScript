#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

int startupterminal();
int story();
int compile();

string input;
string fileName;
int main() {
    std::cout << "Tophatguard's HaveScript\n";
    std::cout << "Hs terminal. type ? or help for a command list\n";
    std::cout << ">>";
    std::cin >> input;
    // commands
    if (input == "help") {
        std::cout << "new file - creates a new file\n";
        std::cout << "exit - exits the file and IDE/languge\n";
        std::cout << "clear - clears the screen\n";
        std::cout << "games - gives a selection of games\n";
        std::cout << "compile - chooses a file to compile\n";
        system("pause");
        startupterminal();
    }

    if (input == "games") {
        std::cout << "input 1 listen to a story.\n";
        std::cin >> input;
        if (input == "1") {
            story();
        }
        else {
            std::cout << "that is not a valid input.\n";
            system("pause");
            startupterminal();
        }
    }

    if (input == "?") {
        std::cout << "new file - creates a new file\n";
        std::cout << "exit - exits the file and IDE/languge\n";
        std::cout << "clear - clears the screen\n";
        system("pause");
        startupterminal();
    }

    if (input == "compile") {
        compile();
    }

    if (input == "newFile") {
        std::cout << "C:/desktop/Hs/build/out/scripts is the current folder.\n";
        std::cout << "to rename the folder, just go to C:/Hs/scripts and rename it there.\n";
        std::cout << "to exit press ctrl + Z once you press ctrl + Z you should see ^Z on the input after that press enter.\n";
        system("pause");
        system("cd scripts");
        system("copy con newFile.hs");
        startupterminal();
    }

    if (input == "exit") {
        return 0;
    }

    if (input == "clear") {
        system("CLS");
        startupterminal();
    }
    return 0;
};

int startupterminal() {
    std::cout << ">>";
    std::cin >> input;
    // commands
    if (input == "help") {
        std::cout << "new file - creates a new file\n";
        std::cout << "exit - exits the file and IDE/languge\n";
        std::cout << "side note, there are no caps\n";
        std::cout << "install - installs extra item's like the ability to create files\n";
        std::cout << "side note, there are no caps\n";
        system("pause");
        startupterminal();
    }

    if (input == "install") {
        std::cout << "creating the main Hs file...\n";
        system("mkdir Hs");
        system("cd Hs");
        std::cout << "creating the scripts file...\n";
        system("mkdir scripts");
        system("cd scripts");
        system("pause");
        startupterminal();
    }

    if (input == "?") {
        std::cout << "new file - creates a new file\n";
        std::cout << "exit - exits the file and IDE/languge\n";
        std::cout << "side note, there are no caps\n";
        system("pause");
        startupterminal();
    }

    if (input == "new file") {
        std::cout << "C:/Hs/scripts is the current folder.\n";
        std::cout << "to rename the folder, just go to C:/Hs/scripts and rename it there.\n";
        system("pause");
        system("cd C:/Hs/scripts");
        system("copy con newFile.hs");
        startupterminal();
    }

    if (input == "exit") {
        return 0;
    }
    return 0;
}
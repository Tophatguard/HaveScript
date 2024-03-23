#include <iostream>
#include <fstream>
#include <string>

int compile() {
    std::string filedew;

    std::cout << "type the file name(including.hs)\n";
    std::cin >> filedew;
    
    std::string filename = filedew; // Change to the name of your file

    // Open the file
    std::ifstream file(filename);

    // Check if the file was opened successfully
    if (!file.is_open()) {
        std::cerr << "Error: Unable to open file '" << filename << "'" << std::endl;
        system("pause");
        return 1;
    }

    // Read and print the file contents line by line
    std::string line;
    while (std::getline(file, line)) {
        std::cout << line << std::endl;
    }
    system("pause");
    // Close the file
    file.close();

    return 0;
}
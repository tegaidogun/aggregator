#include "../include/cli.h"

void CLI::start() {
    std::string command;
    std::cout << "Aggregator CLI Started. Enter command: \n";
    while (true) {
        std::cout << "> ";
        std::getline(std::cin, command);
        if (command == "exit" || command == "quit") break;
        std::cout << "Command received: " << command << std::endl;
    }
}
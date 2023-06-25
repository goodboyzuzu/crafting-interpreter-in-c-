#include <iostream>
#include <fstream>
#include <string>
#include <lox/Scanner.h>

void run(const std::string& source){
    
    std::cout << source << std::endl;
}

void runFile(const std::string& filename){
    // read file
    std::ifstream file{filename};
    if (!file.good()){
        std::cout << "Could not open file " << filename << std::endl;
        return;
    }
    std::string line;
    std::string source;
    while(std::getline(file, line)){
        source += line + "\n";
    }
    run(source);
}

void runPrompt(){
    std::cout << "Welcome to the C++ REPL!" << std::endl;
    std::cout << "Type 'exit' to exit." << std::endl;

    std::string input;
    while(true){
        std::cout << "> ";
        if (std::getline(std::cin, input)){
            if (input == "exit"){
                break;
            }
            run(input);
        } 
    }
}

int main(int args, char* argv[]){
    if (args ==2){
        runFile(argv[1]);
    }
    else if (args==1)
    {
        runPrompt();
    }
    
}
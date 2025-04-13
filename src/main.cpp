#include <iostream>
#include <unordered_set>
#include <unordered_map>
#include <fstream>
#include <vector>
#include "huffman/huffmanNode.h"
#include "messages.cpp"

int main(int argc, char **argv)
{
    if (argc == 1) // if no command line arguments are given, print error
    {
        std::cout << "error: incorrect usage" << std::endl;
        std::cout << "try \"./huffman help\" for more info" << std::endl;
        exit(1);
    }
    std::string cmdLineArgs = argv[1]; //
    if (cmdLineArgs == "help")
    {
        std::cout << helpMsg << "\n";
        exit(1);
    }
    // checking out all args
    std::unordered_map<std::string, bool> flags =
        {
            {"-R", false}
            , {"-o",false}, {"-d", false}
        };
    
    bool textFileNext = false;
    std::string fileToRead = "", fileToOutput = "huffman.txt", currFlag = "";
    std::string decode[2];

    for (int i = 1; i < argc; i++)
    {
        cmdLineArgs = argv[i];
        if (textFileNext)
        {
            
        }
        if (flags.find(cmdLineArgs) != flags.end())
        {
            flags[cmdLineArgs] = true;
            currFlag = cmdLineArgs;
            cmdLineArgs = true;
        }
        else
        {
            std::cout << "error: unknown command line argument" << std::endl;
            std::cout << "try \"./huffman help\" for more info" << std::endl;
            exit(1);
        }
    }
    if (textFileNext)
    {
        std::cout << "error: failed to give text file" << std::endl;
        std::cout << "try \"./huffman help\" for more info" << std::endl;
        exit(1);
    }

    return 0;
}
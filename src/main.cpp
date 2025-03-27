#include <iostream>
#include <unordered_map>

const std::string helpMsg =
    R"(Flags

-R

 -Next command line argument must be the text file that program reads
 -Ex:
    ./huffman -R myDiary.txt

-o

 -Not needed but next command line argument must be a valid file name to 
  where the huffman coding of the file will be outputted
 -Ex:
    ./huffman -R myDiary.txt -o homework.txt

-r 
 
 -Must be the only flag present, the next command line argument must be 
  the huffman file, next one should be the given frequencies
 -Ex:
    ./huffman -r homework.txt freq.txt
)";

int main(int argc, char **argv)
{
    if (argc == 1)//if no command line arguments are given, print error
    {
        std::cout << "error: incorrect usage" << std::endl;
        std::cout << "try \"./huffman help\" for more info" << std::endl;
        exit(1);
    }
    std::string cmdLineArgs = argv[1];//
    if (cmdLineArgs == "help")
    {
        std::cout << helpMsg << "\n";
        exit(1);
    }
    // checking out all args
    std::unordered_map<std::string, bool> flags =
        {
            {"-R", false},
            {"-o", false},
            {"-r", false}
        };

    bool textFileNext = false;
    std::string fileToRead = "huffman.txt"; 
    for (int i = 1; i < argc; i++)
    {
        cmdLineArgs = argv[i];
        if (textFileNext)
        {

        }
        if (flags.find(cmdLineArgs) != flags.end())
        {

        }
        else
        {
            std::cout<<"error: unknown command line argument"<<std::endl;
            std::cout << "try \"./huffman help\" for more info" << std::endl;
            exit(1);
        }
    }
}
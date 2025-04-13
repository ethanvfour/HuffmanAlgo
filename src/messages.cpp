#include <string>

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

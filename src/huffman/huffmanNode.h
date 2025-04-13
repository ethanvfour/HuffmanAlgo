#ifndef HUFFMAN
#define HUFFMAN

struct huffmanNode
{
    huffmanNode *ptrAbove;
    int pointersToMe;
    int frequency;
    bool isLeft;
    bool isRight;
    char myChar;
    /*
    Default constructor
    */
    huffmanNode();
};

#endif
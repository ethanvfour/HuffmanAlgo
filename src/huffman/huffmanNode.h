#ifndef HUFFMAN
#define HUFFMAN

struct huffmanNode
{
    huffmanNode *ptrAbove;
    int pointersToMe;
    int frequency;
    bool isLeft;
    bool isRight;
    /*
    Default constructor
    */
    huffmanNode();
};

#endif
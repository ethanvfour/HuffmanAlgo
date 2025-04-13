#include "huffmanNode.h"

huffmanNode::huffmanNode()
{
    ptrAbove = nullptr;
    pointersToMe = 0;
    frequency = 0;
    isLeft = false;
    isRight = false;
    myChar = '\0';
}
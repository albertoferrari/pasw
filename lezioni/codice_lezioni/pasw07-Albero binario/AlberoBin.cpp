#include "AlberoBin.h"
#include <iostream>

using namespace std;

AlberoBin::AlberoBin(): info(""), left(nullptr), right(nullptr) {}

AlberoBin::AlberoBin(string i): info(i), left(nullptr), right(nullptr) {}

AlberoBin::AlberoBin(string i, AlberoBin* l, AlberoBin* r):
    info(i), left(l), right(r) {}

AlberoBin::~AlberoBin() {}

void AlberoBin::preOrder()
{
    cout << info << " - ";
    if (left!=nullptr)
        left->preOrder();
    if (right!=nullptr)
        right->preOrder();
}

void AlberoBin::inOrder()
{
    if (left!=nullptr)
        left->inOrder();
    cout << info << " - ";
    if (right!=nullptr)
        right->inOrder();
}

void AlberoBin::postOrder()
{
    if (left!=nullptr)
        left->postOrder();
    if (right!=nullptr)
        right->postOrder();
    cout << info << " - ";
}

#ifndef ALBEROBIN_H
#define ALBEROBIN_H
#include <iostream>

class AlberoBin
{
    public:
        AlberoBin();
        AlberoBin(std::string i);
        AlberoBin(std::string i, AlberoBin* l, AlberoBin* r);
        virtual ~AlberoBin();
        std::string getInfo() { return info; }
        void setInfo(std::string val) { info = val; }
        AlberoBin* getLeft() { return left; }
        AlberoBin* getRight(){ return right; }
        void setLeft(AlberoBin* val) { left = val; }
        void setRight(AlberoBin* val) { right = val; }
        void preOrder();
        void inOrder();
        void postOrder();
    private:
        std::string info;
        AlberoBin* left;
        AlberoBin* right;
};

#endif // ALBEROBIN_H

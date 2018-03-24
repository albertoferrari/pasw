#include "Nodo.h"

Nodo::Nodo()
{
    info = "";
    next = nullptr;
}

Nodo::Nodo(std::string i): info(i), next(nullptr) {}

Nodo::Nodo(std::string i, Nodo* n): info(i), next(n) {}

Nodo::~Nodo() {}

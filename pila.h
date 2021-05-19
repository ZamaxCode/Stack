#ifndef PILA_H_INCLUDED
#define PILA_H_INCLUDED
#include "LSL.h"

template<typename T>
class Pila
{
private:
    LSL<T> lista;

public:
    Pila(){}

    bool empty()const;
    size_t size()const;
    const T& top()const;
    void push(const T& element);
    void pop();
};

template<typename T>
bool Pila<T>::empty()const
{
    return lista.empty();
}

template<typename T>
size_t Pila<T>::size()const
{
    return lista.size();
}

template<typename T>
const T& Pila<T>::top()const
{
    if(empty())
        throw range_error("top() on empty stack");
    return lista.back();
}

template<typename T>
void Pila<T>::push(const T& element)
{
    lista.push_back(element);
}

template<typename T>
void Pila<T>::pop()
{
    if(empty())
        throw range_error("pop() on empty stack");
    lista.pop_back();
}

#endif // PILA_H_INCLUDED

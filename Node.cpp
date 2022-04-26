#include "Node.h"

template <class T>
Node<T>::Node()
{
    data = NULL;
    next = NULL;
}

template <class T>
Node<T>::Node(T &data)
{
    this->data = data;
    next = NULL;
}

template <class T>
Node<T>::~Node()
{
}

template <class T>
T &Node<T>::getData()
{
    return data;
}

template <class T>
Node<T> *Node<T>::getNext()
{
    return next;
}

template <class T>
void Node<T>::setNext(Node *next)
{
    this->next = next;
}

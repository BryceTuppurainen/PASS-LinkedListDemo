#ifndef NODE_H
#define NODE_H

#include <iostream>

/**
 * @brief Templated immutable Node Class for a Singly-Linked-List Datastructure
 *
 * @author Bryce Tuppurainen c3286917
 * @since April-May 2022
 *
 */
template <class T>
class Node
{
private:
    T data;
    Node<T> *next;

public:
    Node();
    Node(T &);
    ~Node();
    T &getData();
    Node<T> *getNext();
    void setNext(Node<T> *);
};

#endif
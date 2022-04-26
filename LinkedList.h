#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include "Node.cpp"

/**
 * @brief Linked List Class for a Singly-Linked-List Datastructure
 *
 * @author Bryce Tuppurainen c3286917
 * @since April-May 2022
 *
 */
template <class T>
class LinkedList
{
private:
    Node<T> *head;
    int size;

public:
    LinkedList();
    ~LinkedList();

    int getSize();

    void insert(T, int);

    T &remove(int);

    T &get(int);
};

#endif
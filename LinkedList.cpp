#include "LinkedList.h"

template <class T>
LinkedList<T>::LinkedList()
{
    head = NULL;
    size = 0;
}

template <class T>
LinkedList<T>::~LinkedList()
{
    Node<T> *cursor = head;

    while (cursor != NULL)
    {
        Node<T> *trailingCursor = cursor;
        cursor = cursor->getNext();
        delete trailingCursor;
    }
}

template <class T>
int LinkedList<T>::getSize()
{
    return size;
}

template <class T>
void LinkedList<T>::insert(T data, int index)
{
    if (index > size || index < 0)
    {
        std::cout << "ERROR - Index " << index << " does not exist in list of size " << size << " cannot insert" << std::endl;
    }

    Node<T> *newNode = new Node<T>(data);
    Node<T> *cursor = head;

    if (index == 0)
    {
        newNode->setNext(head);
        head = newNode;
        size++;
        return;
    }

    for (int iter = 1; iter < index; iter++)
    {
        cursor = cursor->getNext();
    }

    newNode->setNext(cursor->getNext());
    cursor->setNext(newNode);

    size++;
}

template <class T>
T &LinkedList<T>::remove(int index)
{
    if (index >= size || index < 0)
    {
        std::cout << "ERROR - Index " << index << " does not exist in list of size " << size << " cannot remove" << std::endl;
    }

    if (index == 0)
    {
        T &data = head->getData();
        head = head->getNext();
        size--;
        return data;
    }

    Node<T> *cursor = head;

    for (int iter = 1; iter < index; iter++)
    {
        cursor = cursor->getNext();
    }

    Node<T> *cursorNext = cursor->getNext();

    if (cursorNext->getNext() == NULL)
    {
        cursor->setNext(NULL);
    }
    else
    {
        cursor->setNext(cursorNext->getNext());
    }

    T &data = cursorNext->getData();
    delete cursorNext;
    size--;
    return data;
}

template <class T>
T &LinkedList<T>::get(int index)
{
    if (index >= size || index < 0)
    {
        std::cout << "ERROR - Index " << index << " does not exist in list of size " << size << std::endl;
    }

    Node<T> *cursor = head;
    for (int iter = 0; iter < index; iter++)
    {
        cursor = cursor->getNext();
    }

    return cursor->getData();
}
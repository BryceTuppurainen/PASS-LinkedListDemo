#include <iostream>
#include <string>
#include "LinkedList.cpp"

template <class T>
void readList(LinkedList<T> *list)
{
    if (list->getSize() == 0)
    {
        std::cout << "[]" << std::endl;
        return;
    }

    std::cout << "[";
    for (int iter = 0; iter < list->getSize() - 1; iter++)
    {
        std::cout << list->get(iter) << ", ";
    }
    std::cout << list->get(list->getSize() - 1) << "]" << std::endl
              << std::endl;
}

int main(int argc, char const *argv[])
{
    LinkedList<std::string> *phoneNumbers = new LinkedList<std::string>();

    std::cout << "Prepending some demo values..." << std::endl;

    phoneNumbers->insert("456123", 0);
    phoneNumbers->insert("5315", 0);
    phoneNumbers->insert("361353", 0);

    readList(phoneNumbers);

    std::cout << "Appending some more demo values..." << std::endl;

    phoneNumbers->insert("55", phoneNumbers->getSize());
    phoneNumbers->insert("3", phoneNumbers->getSize());

    readList(phoneNumbers);

    std::cout << "Adding some values in the middle..." << std::endl;

    phoneNumbers->insert("55315", 1);
    phoneNumbers->insert("315763", 3);

    readList(phoneNumbers);

    std::cout << "Removing the head..." << std::endl;

    phoneNumbers->remove(0);

    readList(phoneNumbers);

    std::cout << "Removing index one..." << std::endl;

    phoneNumbers->remove(1);

    readList(phoneNumbers);

    std::cout << "Removing index " << phoneNumbers->getSize() - 1 << " (i.e. tail)..." << std::endl;

    phoneNumbers->remove(phoneNumbers->getSize() - 1);

    readList(phoneNumbers);

    delete phoneNumbers;
    return 0;
}

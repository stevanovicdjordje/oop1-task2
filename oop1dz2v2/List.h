#ifndef OOP1DZ2V1_LIST_H
#define OOP1DZ2V1_LIST_H

#include "Errors.h"

template<typename T>
class List {
    struct Node {
        T data;
        Node *next;

        Node(const T &data, Node *next = nullptr) : data(data), next(next) {}
    };
    void copy(const List& list);
    void move(List& list);
    void clear();
    Node *head;
public:
    List() : head(nullptr) {}

    List(const List& list) { copy(list); }

    List& operator=(const List& list) {
        if (this != &list) {
            clear();
            copy(list);
        }
        return *this;
    }

    List(List&& list) { move(list); };

    List& operator=(List&& list) {
        if (this != &list) {
            clear();
            move(list);
        }
        return *this;
    }

    void operator+=(const T& data);

    int get_number_of_elements() const;

    T &operator[](int index);

    const T& operator[](int index) const {return const_cast<List &>(*this)[index];};

    ~List() { clear(); };
};

template<typename T>
void List<T>::operator+=(const T &data) {
    Node *new_node = new Node(data);

    if (!head) {
        head = new_node;
    } else {
        Node *current = head;
        while (current->next) {
            current = current->next;
        }
        current->next = new_node;
    }
}

template<typename T>
void List<T>::move(List &list) {
    head = list.head;
    list.head = nullptr;
}

template<typename T>
void List<T>::clear() {
    Node* current = head;
    while (current) {
        Node* temp = current;
        current = current->next;
        delete temp;
    }
    head = nullptr;
}


template<typename T>
void List<T>::copy(const List &list) {
    if (!list.head) {
        head = nullptr;
        return;
    }

    head = new Node(list.head->data);
    Node* current = head;
    Node* list_current = list.head->next;

    while (list_current) {
        current->next = new Node(list_current->data);
        current = current->next;
        list_current = list_current->next;
    }
}


template<typename T>
T &List<T>::operator[](int index) {
    Node *current = head;
    int count = 0;
    while (count < index) {
        if (current) {
            current = current->next;
            count++;
        } else {
            throw InvalidIndex();
        }
    }
    if (current) {
        return current->data;
    }
    throw InvalidIndex();
}


template<typename T>
int List<T>::get_number_of_elements() const {
    int count = 0;
    Node *current = head;
    while (current) {
        count++;
        current = current->next;
    }
    return count;
}



#endif //OOP1DZ2V1_LIST_H

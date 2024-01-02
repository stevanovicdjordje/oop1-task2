#ifndef OOP1DZ2V4_LIST_H
#define OOP1DZ2V4_LIST_H

#include <string>
#include "Errors.h"
using namespace std;

template<typename T>
class List {
    struct Node {
        T data;
        Node *next;

        Node(const T &data, Node *next = nullptr) : data(data), next(next) {}
    };

    void copy(const List &list);

    void move(List &list);

    void clear();

    Node *head, *current_element = nullptr;
public:
    List() : head(nullptr) {}

    List(const List &list) { copy(list); }

    List &operator=(const List &list) {
        if (this != &list) {
            clear();
            copy(list);
        }
        return *this;
    }

    List(List &&list) { move(list); };

    List &operator=(List &&list) {
        if (this != &list) {
            clear();
            move(list);
        }
        return *this;
    }

    void operator+=(const T &data);

    void operator+=(const List<T> &list);

    void declare_current() { current_element = head; }

    void move_to_next_element();

    int get_number_of_elements() const;

    bool is_current_exists() const;

    T get_current_data() const;

    bool is_list_empty() const;

    bool is_list_contains(const T &data) const;

    string get_textual_description(const std::string &separator) const;

    ~List() { clear(); };
};

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

template<typename T>
std::string List<T>::get_textual_description(const string &separator) const {
    string result;
    for (Node *curr = this->head; curr; curr = curr->next) {
        result += curr->data;
        if (curr->next) {
            result += separator;
        }
    }
    return result;
}


template<typename T>
bool List<T>::is_list_contains(const T &data) const {
    Node *current = head;
    while (current) {
        if (current->data == data) {
            return true;
        }
        current = current->next;
    }
    return false;
}

template<typename T>
bool List<T>::is_list_empty() const {
    if (!head) return true;
    return false;
}

template<typename T>
T List<T>::get_current_data() const {
    if (current_element) return current_element->data;
    else throw NoCurrentElement();
}

template<typename T>
bool List<T>::is_current_exists() const {
    if (current_element) return true;
    return false;
}

template<typename T>
void List<T>::move_to_next_element(){
    if (current_element and current_element->next) {
        current_element = current_element->next;
    }
}

template<typename T>
void List<T>::operator+=(const List<T> &list) {
    Node *curr = list.head;
    while (curr) {
        *this += curr->data;
        curr = curr->next;
    }
}

template<typename T>
void List<T>::move(List &list) {
    head = list.head;
    list.head = nullptr;
}

template<typename T>
void List<T>::clear() {
    Node *curr = head;
    while (curr) {
        Node *temp = curr;
        curr = curr->next;
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
    Node *curr = head;
    Node *list_current = list.head->next;

    while (list_current) {
        curr->next = new Node(list_current->data);
        curr = curr->next;
        list_current = list_current->next;
    }
}


template<typename T>
void List<T>::operator+=(const T &data) {
    Node *new_node = new Node(data);

    if (!head) {
        head = new_node;
    } else {
        Node *curr = head;
        while (curr->next) {
            curr = curr->next;
        }
        curr->next = new_node;
    }
}


#endif //OOP1DZ2V4_LIST_H

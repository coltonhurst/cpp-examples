/*
    Implementation for LinkedList
*/

#include "linked-list.hpp"

struct Node {
    int data;
    Node* next;
};

LinkedList::LinkedList() {
    head = nullptr;
    tail = nullptr;
}

void LinkedList::Add(int item) {
    Node* temp = new Node;
    temp->data = item;
    temp->next = nullptr;

    if (head == nullptr) {
        head = temp;
        tail = temp;
    } else {
        tail->next = temp;
        tail = tail->next;
    }
}

int LinkedList::GetFirst() {
    return head->data;
}

int LinkedList::GetLast() {
    return tail->data;
}
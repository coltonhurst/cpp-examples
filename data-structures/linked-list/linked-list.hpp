/*
    The header file for LinkedList
*/

#ifndef LINKEDLIST_H
#define LINKEDLIST_H

struct Node;

class LinkedList
{
    private:
        Node* head;
        Node* tail;
        
    public:
        LinkedList();
        void Add(int);
        int GetFirst();
        int GetLast();
};

#endif  /* LINKEDLIST_H */
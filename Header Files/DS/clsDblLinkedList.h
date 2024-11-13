#pragma once

#include <iostream>
using namespace std;

template <class T> class clsDblLinkedList {
protected:
    int _Size = 0;
public:
    class Node {
    public:
        T value;
        Node* next;
        Node* prev;


    };

    Node* head = NULL;
    Node* tail = NULL;

    void InsertAtBeggining(T Value) {
        Node* new_node = new Node();

        new_node->value = Value;
        new_node->next = head;
        new_node->prev = NULL;

        if (head != NULL) {
            head->prev = new_node;
        }
        head = new_node;
        _Size++;
    }

    void InsertAtEnd(T value) {

        Node* new_node = new Node();
        new_node->value = value;
        new_node->next = NULL;

        if (head == NULL) {
            new_node->prev = NULL;
            head = new_node;
        }
        else {
            Node* Current = head;
            while(Current->next != NULL) {
            Current = Current->next;
            }
            Current->next = new_node;
            new_node->prev = Current;
        }

        _Size++;
    }

    void PrintList() {
        Node* Current = head;
        cout << "Head <--> ";
        while (Current != NULL) {
            cout << Current->value << " <--> ";
            Current = Current->next;
        }
        cout << "NULL" << endl;
    }

    Node* Find(T Value) {
        Node* Current = head;
        while(Current != NULL) {
            if (Current->value == Value) {
                return Current;
            }
            Current = Current->next;
        }
        return NULL;
    }

    void InsertAfter(Node* Current, T Value) {
        Node* new_node = new Node();
        new_node->value = Value;
        new_node->next = Current->next;
        new_node->prev = Current;

        if (Current->next != NULL) {
            Current->next->prev = new_node;
        }
        Current->next = new_node;

        _Size++;
    }

    void DeleteNode(Node*& NodeToDelete) {

        if (head == NULL || NodeToDelete == NULL) {
            return;
        }

        if (head == NodeToDelete) {
            head = NodeToDelete->next;
        }

        if (NodeToDelete->next != NULL) {
            NodeToDelete->next->prev = NodeToDelete->prev;
        }

        if (NodeToDelete->prev != NULL) {
            NodeToDelete->prev->next = NodeToDelete->next;
        }

        delete NodeToDelete;
        _Size--;
    }

    void DeleteFirstNode() {
        if (head == NULL) {
            return;
        }

        Node* temp = head;
        head = head->next;
        if (head != NULL) {
            head->prev = NULL;
        }
        delete temp;
        _Size--;
    }

    void DeleteLastNode() {
        if (head == NULL) {
            return;
        }

        if (head->next == NULL) {
            delete head;
            head = NULL;
            return;
        }

        Node* Current = head;
        while (Current->next->next != NULL) {
            Current = Current->next;
        }
        Node* temp = Current->next;
        Current->next = NULL;
        delete temp;
        _Size--;
    }

    int Size() {
        return _Size;
    }

    bool isEmpty() {
        return _Size == 0;
    }

    void Clear() {
        while (_Size > 0) {
            DeleteFirstNode();
        }
    }

    void Reverse() {
        Node* current = head;
        Node* temp = nullptr;
        while (current != nullptr) {
            temp = current->prev;
            current->prev = current->next;
            current->next = temp;
            current = current->prev;
        }

        if (temp != nullptr) {
            head = temp->prev;
        }
    }

    Node* GetNode(int Index){
        int Counter = 0;

        if (Index > _Size - 1 || Index < 0){
            return nullptr;
        }

        Node* Current = head;

        while (Current != nullptr && Current->next != nullptr){

            if (Index == Counter){
                break;
            }

            Current = Current->next;
            Counter++;
        }
        return Current;

    }

    T GetItem(int Index){
        Node* N = GetNode(Index);
        if (N == nullptr)
            return NULL;
        else
            return N->value;
    }

    bool Update(int Index, T NewValue){
        Node* N = GetNode(Index);
        if (N == NULL){
            return false;
        }
        N->value = NewValue;
        return true;
    }

    bool InsertAfter(int Index, T Value){
        Node* N = GetNode(Index);
        if (N == NULL){
            return false;
        }
        InsertAfter(N, Value);
        return true;
    }
};
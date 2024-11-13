#pragma once
#include <iostream>
#include "clsDblLinkedList.h"

using namespace std;

template <class T>
class clsMyQueue {
protected:
    clsDblLinkedList<T> _MyList;

public:
    void push(T value){
        _MyList.InsertAtEnd(value);
    }
    void pop(){
        _MyList.DeleteFirstNode();
    }
    void Print(){
        _MyList.PrintList();
    }

    int Size(){
        return _MyList.Size();
    }
    bool IsEmpty(){
        return _MyList.Size() == 0;
    }

    T front(){
        return _MyList.GetItem(0);
    }
    T back(){
        return _MyList.GetItem(Size()-1);
    }

    // GetItem(), Reverse(), UpdateItem(), InsertAfter(), InsertAtFront(), InsertAtBack(), Clear()
    T GetItem(int Index){
        return _MyList.GetItem(Index);
    }
    void Reverse(){
        return _MyList.Reverse();
    }
    void UpdateItem(int Index, T NewValue){
        _MyList.Update(Index, NewValue);
    }
    void InsertAfter(int Index, T value){
        _MyList.InsertAfter(Index, value);
    }
    void InsertAtFront(T value){
        _MyList.InsertAtBeggining(value);
    }
    void InsertAtBack(T value){
        _MyList.InsertAtEnd(value);
    }
    void Clear(){
        _MyList.Clear();
    }

};
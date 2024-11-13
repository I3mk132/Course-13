#pragma once
#include <iostream>
#include "clsDynamicArray.h"

using namespace std;

template <class T>
class clsMyQueueArr {
protected:
    clsDynamicArray <T> MyDynamicArray;

public:
    void push(T value){
        MyDynamicArray.InsertAtEnd(value);
    }
    void Print(){
        MyDynamicArray.PrintList();
    }
    int Size(){
        return MyDynamicArray.Size();
    }
    T front(){
        return MyDynamicArray.GetItem(0);
    }
    T back(){
        return MyDynamicArray.GetItem(Size()-1);
    }
    void pop(){
        MyDynamicArray.DeleteFirstItem();
    }
    T GetItem(int Index){
        return MyDynamicArray.GetItem(Index);
    }
    void Reverse(){
        MyDynamicArray.Reverse();
    }
    void UpdateItem(int Index, T value){
        MyDynamicArray.SetItem(Index, value);
    }
    void InsertAfter(int Index, T value){
        MyDynamicArray.InsertAfter(Index, value);
    }
    void InsertAtFront(T value){
        MyDynamicArray.InsertAtBeginning(value);
    }
    void InsertAtBack(T value){
        MyDynamicArray.InsertAtEnd(value);
    }
    void Clear(){
        MyDynamicArray.Clear();
    }
    bool isEmpty(){
        return MyDynamicArray.isEmpty();
    }

};
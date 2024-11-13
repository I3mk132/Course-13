#pragma once
#include <iostream>
#include "clsDynamicArray.h"
#include "clsMyQueueArr.h"

using namespace std;

template <class T>
class clsMyStackArr : public clsMyQueueArr<T>{
    /*
protected:
    clsDynamicArray<T> MyList;

public:
    void push(T value){
        MyList.InsertAtEnd(value);
    }
    void Print(){
        MyList.PrintList();
    }
    int Size(){
        return MyList.Size();
    }
    T Top(){
        return MyList.GetItem(Size()-1);
    }
    T Bottom(){
        return MyList.GetItem(0);
    }
    void pop(){
        MyList.DeleteLastItem();
    }
    T GetItem(int Index){
        return MyList.GetItem(Index);
    }
    void Reverse(){
        MyList.Reverse();
    }
    void UpdateItem(int Index, T value){
        MyList.SetItem(Index, value);
    }
    void InsertAfter(int Index, T value){
        MyList.InsertAfter(Index, value);
    }
    void InsertAtFront(T value){
        MyList.InsertAtBeginning(value);
    }
    void InsertAtBack(T value){
        MyList.InsertAtEnd(value);
    }
    void Clear(){
        MyList.Clear();
    }
    void isEmpty(){
        MyList.isEmpty();
    }
     */

public:
    void Push(T value){
        clsMyQueueArr <T>::MyDynamicArray.InsertAtBeginning(value);
    }

    T Top(){
        return clsMyQueueArr<T>::front();
    }

    T Bottom(){
        return clsMyQueueArr<T>::back();
    }

};
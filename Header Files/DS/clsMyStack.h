#pragma once
#include <iostream>
#include "clsDblLinkedList.h"
#include "clsMyQueue.h"

using namespace std;

template<class T> class clsMyStack : public clsMyQueue<T> {
public:

    void push(T Item){
        clsMyQueue<T>::_MyList.InsertAtBeggining(Item);
    }
    T Top(){
        return clsMyQueue<T>::front();
    }
    T Bottom(){
        return clsMyQueue<T>::back();
    }
    void InsertAtTop(T value){
        clsMyQueue<T>::InsertAtFront(value);
    }
    void InsertAtBottom(T value){
        clsMyQueue<T>::InsertAtBack(value);
    }

};
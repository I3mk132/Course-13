#pragma once
#include <iostream>
using namespace std;

template <class T>
class clsDynamicArray {
protected:
    int _Size =0;
    T * _TempArray;


public:
    T * OriginalArray;
    clsDynamicArray(int size = 0){
        if (size < 0){
            size = 0;
        }
        _Size = size;

        OriginalArray = new T[_Size];
    }

    ~clsDynamicArray(){
        delete[] OriginalArray;
    }

    bool SetItem(int index, T value){
        if ( index >= _Size || _Size < 0)
            return false;

        OriginalArray[index] = value;
        return true;
    }

    bool isEmpty(){
        return _Size == 0;
    }

    int Size(){
        return _Size;
    }

    void PrintList(){
        cout << " ";
        for (int i = 0; i < _Size; i++){
            cout << OriginalArray[i] << " ";
        }
        cout << "\n";
    }

    void Resize(int NewSize){
        if (NewSize < 0){
            _Size = 0;
        }

        if (NewSize < _Size){
            _Size = NewSize;
        }

        _TempArray = new T[NewSize];
        for (int i = 0; i < _Size; i++){
            _TempArray[i] = OriginalArray[i];
        }

        _Size = NewSize;
        delete[] OriginalArray;
        OriginalArray = _TempArray;
    }

    T GetItem(int Index){
        return OriginalArray[Index];
    }

    void Reverse(){
        _TempArray = new T[_Size];
        for (int i = 0; i < _Size; i++){
            _TempArray[i] = OriginalArray[_Size - i - 1];
        }
        delete[] OriginalArray;
        OriginalArray = _TempArray;
    }

    void Clear(){
        _Size = 0;
        _TempArray = new T[0];
        delete[] OriginalArray;
        OriginalArray = new T[_Size];
    }

    bool DeleteItemAt(int Index){

        if (Index >= _Size || Index < 0){
            return false;
        }

        _Size--;
        _TempArray = new T[_Size];

        for (int i = 0; i < Index; i++){
            _TempArray[i] = OriginalArray[i];
        }
        for (int i = Index+1; i < _Size + 1; i++){
            _TempArray[i-1] = OriginalArray[i];
        }
        delete[] OriginalArray;
        OriginalArray = _TempArray;
        return true;
    }

    bool DeleteFirstItem(){
        return DeleteItemAt(0);
    }

    bool DeleteLastItem(){
        return DeleteItemAt(_Size-1);
    }

    int Find(T value){
        for (int i = 0; i < _Size; i++){
            if (OriginalArray[i] == value){
                return i;
            }
        }
        return -1;
    }

    bool DeleteItem(T value){
        int index = Find(value);
        if (index == -1){
            return false;
        }

        DeleteItemAt(index);
        return true;
    }

    bool InsertAt(int Index, T value){

        if (Index > _Size || Index < 0){
            return false;
        }

        _Size++;
        _TempArray = new T[_Size];

        for (int i = 0; i < Index; i++){
            _TempArray[i] = OriginalArray[i];
        }
        _TempArray[Index] = value;

        for (int i = Index; i < _Size-1; i++){
            _TempArray[i+1] = OriginalArray[i];
        }

        delete[] OriginalArray;
        OriginalArray = _TempArray;
        return true;
    }

    void InsertAtBeginning(T value){
        InsertAt(0, value);
    }

    bool InsertBefore(int index, T value){

        if (index < 0){
            return InsertAt(0, value);
        }
        else {
            return InsertAt(index - 1, value);
        }

    }

    bool InsertAfter(int index, T value){
        if (index >= _Size){
            return InsertAt(_Size - 1, value);
        }
        else {
            return InsertAt(index+1, value);
        }
    }

    void InsertAtEnd(T value){
        InsertAt(_Size, value);
    }
};
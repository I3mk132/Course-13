#pragma once
#include "DS/clsMyStackArr.h"
#include <iostream>
using namespace std;


class clsMyString {
protected:
    string _String;
    clsMyStackArr<string> _undo, _redo;

public:

    clsMyString (){
        set(" ");
    }
    void set(string String){
        _undo.Push(String);
        _String = String;
    }
    string get(){
        return _String;
    }

    void Undo(){
        if (!_undo.isEmpty()) {
            _redo.Push(_undo.Top());
            _undo.pop();
            _String = _undo.Top();
        }
    }

    void Redo(){
        _undo.Push(_String);
        _String = _redo.Top();
        _redo.pop();
    }
};
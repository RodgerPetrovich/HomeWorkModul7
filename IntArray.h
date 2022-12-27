#pragma once
#include <iostream>
#include <string>
#include "bad_length.h"
#include "bad_range.h"
class IntArray
{
private:
	int m_length{};
	int* m_data{};
public:
    IntArray() = default;

    IntArray(int length);
    ~IntArray();
    
    void erase();

    int& operator[](int index);

     int getLength()const;

     void reallocate(int newLength);

     void resize(int newLength);

     void insertBefore(int value, int index);

     void remove(int index);
     void insertAtBeginning(int value);
     void insertAtEnd(int value);

};


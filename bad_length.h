#pragma once
#include <iostream>
#include <exception>
#include <string>
using namespace std;

class bad_length :public exception
{
public:
    virtual const char* what() const noexcept override
    {
        return "ERROR: Bad Length";
    }
};
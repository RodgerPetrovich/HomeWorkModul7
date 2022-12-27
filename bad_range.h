#pragma once
#include <iostream>
#include <exception>
#include <string>
using namespace std;

class bad_range :public exception
{
    virtual const char* what() const noexcept override
    {
        return "ERROR: Bad Range";
    }
};
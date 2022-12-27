#include <iostream>
#include <string>
#include <exception>
#include "IntArray.h"
#include "bad_length.h"
#include "bad_range.h"

using namespace std;

int main()
{
	setlocale(LC_ALL, "");
    try {
        IntArray array(10);

        for (int i{ 0 }; i < 10; ++i)
            array[i] = i + 1;

        array.resize(8);

        array.insertBefore(20, 5);

        array.remove(3);

        array.insertAtEnd(30);
        array.insertAtBeginning(40);

        for (int i{ 0 }; i < array.getLength(); ++i)
            std::cout << array[i] << ' ';

        std::cout << '\n';
    }
    catch (exception& e)
    {
      cout << e.what();
    }


	return 0;
}
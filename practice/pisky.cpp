#include "includes.h"

int main() {
    int sum = 0;
    
    int salaries[] = { 1161, 1465, 999, 666 };

    int length = sizeof(salaries) / sizeof(salaries[0]);
    // size of byte = 4 byte
    // size of array = 32 byte
    // array / cell of byte = 32 / 4 = 8
    // have data of 8 numbers in array

    for (int i = 0; i < length; i++)
    {
       
        sum += salaries[i];
    }


    std::cout << "Salaries sum: $" << sum << "\n";

    return 0;
}
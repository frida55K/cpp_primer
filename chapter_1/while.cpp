#include <iostream>

int main()
{
    int val = 50;
    int sum = 0;

    while(val <= 100)
    {
        sum += val;
        ++val;
    }

    std::cout << "The sum of all numbers between 50 and 100 is " << sum;  
}
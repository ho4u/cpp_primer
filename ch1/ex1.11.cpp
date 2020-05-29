#include <iostream>

int main()
{
    int val1, val2;
    std::cout << "Enter two integer numbers: ";
    std::cin >> val1 >> val2;
    if (val1 < val2)
    {
        while (val1 <= val2)
        {
            std::cout << val1 << " ";
            ++val1;
        }
    }
    else
    {
        while (val1 >= val2)
        {
            std::cout << val1 << " ";
            --val1;
        }
    }  
    
    std::cout << std::endl;

    return 0;
}
#include <iostream>

void prog1()
{
    std::cout << "Enter two numbers: ";
    int v1 = 0, v2 = 0;
    std::cin >> v1 >> v2;
    std::cout << "The sum of " << v1 << " and " << v2 
              << " is " << v1 + v2 << std::endl;
}

void prog2()
{
    int sum = 0, val = 1;
    while (val <= 10)
    {
        sum += val;
        ++val;
    }
    std::cout << "Sum of 1 to 10 inclusive is " 
              << sum << std::endl;
}    
int main()
{
    //prog1();
    prog2();
    return 0;
}
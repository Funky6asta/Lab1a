// Lab1a.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.






#include <iostream>
#include <math.h>

int main()
{
    
    int x = 45; 
    int y = -54;
    
    float z = 45 * pow(10, -1);

    double result{ ( (19 * y -1.5 * y + (13 * z - y) / x * y - 13 ) / ( 2.54 * z + 12 * y / ( z + 1 ) ) )};
    
    std::cout << "Result=" << result;
}

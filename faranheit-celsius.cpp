// Write a c++ program to convert value faranheit to selsius

#include <iostream>

int main()
{
    double temp;
    std::cout << "Enter Temperature in Faranheit" << std::endl;
    std::cin >> temp;

    double celsius = (temp - 32) * (5.0 / 9.0);
    std::cout<< "Temperature is " << celsius << "°";
    return 0;
}
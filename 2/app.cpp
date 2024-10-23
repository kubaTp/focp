// data type which I choose is double because of quit big range and availability of fractional part which is common in cartesian coordinate system

#include <iostream>
#include <cmath>

void solveTheEquation(double a, double b);

int main()
{
    double a, b;

    std::cout << "---------- SOLVING THE LINEAR EQUATION ----------" << std::endl;
    std::cout << "please type the value of a: ";
    std::cin >> a;

    std::cout << "please type the value of b: ";
    std::cin >> b;

    if(b >= 0)
        std::cout << "\nyour equation is: " << a << "x + " <<  b << " = 0" << std::endl;
    else
        std::cout << "\nyour equation is: " << a << "x - " <<  abs(b) << " = 0" << std::endl;

    solveTheEquation(a, b);

    return 0;
}

void solveTheEquation(double a, double b)
{
    if (a == 0) 
    {
        if (b == 0) 
            std::cout << "the equation has infite number of solutions" << std::endl;
        else
            std::cout << "the equation has no solutions" << std::endl;
    } 
    else 
    {
        double x = -b / a;
        std::cout << "the solution is: x = " << x << std::endl;
    }

}
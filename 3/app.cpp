// data type which I choose is double because of quit big range and availability of fractional part which is common in cartesian coordinate system

#include <iostream>
#include <cmath>
#include <string>

void solveTheEquation(double, double, double);
void writeTheEquation(double&, double&, double&);

int main()
{
    double a, b, c;

    std::cout << "---------- SOLVING THE QUADRATIC EQUATION ----------" << std::endl;
    std::cout << "please type the value of a: ";
    std::cin >> a;

    std::cout << "please type the value of b: ";
    std::cin >> b;

    std::cout << "please type the value of c: ";
    std::cin >> c;

    writeTheEquation(a, b, c);

    solveTheEquation(a, b, c);

    return 0;
}

void solveTheEquation(double a, double b, double c)
{
    double delta = pow(b, 2) - (4 * a * c);

    if(delta > 0)
    {
        double sqrtDelta = sqrt(delta);
        double x1 = (-b - sqrtDelta) / (2 * a);
        double x2 = (-b + sqrtDelta) / (2 * a);

        std::cout << "x1 is: " << x1 << std::endl;
        std::cout << "x2 is: " << x2 << std::endl;
    }
    if(delta == 0)
    {
        double x1 = -b / (2 * a);

        std::cout << "x1 is: " << x1 << std::endl;
    }
    if(delta < 0)
    {
        std::string result = "";
        delta = abs(delta);

        double sqrtDelta = sqrt(delta);

        double realPart = -b / (2 * a);
        double imaginaryPart1 = sqrtDelta / (2 * a);
        double imaginaryPart2 = -sqrtDelta / (2 * a);

        std::cout << "x1 is: " << realPart << " - " << abs(imaginaryPart2) << "i" << std::endl;
        std::cout << "x2 is: " << realPart << " + " << imaginaryPart1 << "i" << std::endl;
    }
}

void writeTheEquation(double& a, double& b, double& c)
{
    if(b >= 0)
    {
        std::cout << "\nyour equation is: " << a << "x^2 + " << b;

        if(c >= 0)
            std::cout << "x + " << c << " = 0" << std::endl;
        else
            std::cout << "x - " << abs(c) << " = 0" << std::endl;
    }
    else
    {
        std::cout << "\nyour equation is: " << a << "x^2 - " <<  abs(b);


        if(c >= 0)
            std::cout << "x + " << c << " = 0" << std::endl;
        else
            std::cout << "x - " << abs(c) << " = 0" << std::endl;
    }
}
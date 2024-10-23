#include <iostream>

int main()
{
    /*
    char               a = 10;
    short              b = 645;
    int                c = 120;
    long               d = -4430;
    long long          e = 5148;
    unsigned char      f = 2;
    unsigned short     g = 120;
    unsigned int       h = 124;
    unsigned long      i = 170;
    unsigned long long j = 1804;


    auto r1 = f - g; // data type is int
    std::cout << "subtracting uchar(2) with ushort(120) = " << r1 << " data type changed from unsigned to signed" << std::endl;
    auto r2 = g - f; // data type is int
    std::cout << "subtracting ushort(120) with uchar(2) = " << r2 << " data type is also signed" << "\n\n";
    
    auto r3 = d + e; // data type is long long
    std::cout << "adding long(-4430) with long long(5148) = " << r3 << " data type changed from unsigned to signed" << std::endl;
    auto r4 = e + d;
    std::cout << "adding long long(5148) with long(-4430) = " << r4 << " data type is signed everything as expected" << "\n\n";

    auto r5 = a * b; // data type is int
    std::cout << "multiplying of char(10) with short(645) = " << r5 << " data type is not char and auto scaled to needed type" << std::endl;
    auto r6 = b * a; // data type is int
    std::cout << "multiplying of short(645) with char(10) = " << r6 << " the same as above" << "\n\n";

    auto r7 = f / a; // data type is int
    std::cout << "dividing uchar(2) by char(10) = " << r7 << " not as expected: the data type was not changed to floating point and is equal to 0 (data type is int)" << std::endl;
    auto r8 = a / f; // data type is int
    std::cout << "dividing char(10) by uchar(2) = " << r8 << " outcome is as expected" << "\n\n";

    auto r9 = f % a; // data type is int
    std::cout << "modulo of uchar(2) and char(10) = " << r9 << " as expected: the operation gives two" << std::endl;
    auto r10 = a % f; // data type is int
    std::cout << "modulo of char(10) and uchar(2) = " << r10 << " as expected: the operation gives zero" << std::endl;
    */
    
    /*
    short k = 32767;
    short l = -32768;
     

    auto r11 = ++k;
    auto r12 = k++;
    std::cout << "using pre incremention on char 127 " << r11 << std::endl; // value is min of the range
    std::cout << "using post incremention on char 127 " << r12 << std::endl; // value is the min of the range

    auto r13 = --l;
    auto r14 = l--;
    std::cout << "using pre decremntation on char -128 " << r13 << std::endl; // value is max of the range
    std::cout << "using post decremntation on char -128 " << r14 << std::endl; // value is max of the range
    */

    auto op1 = 17;
    auto op2 = 2;

    auto r1 = op1 << op2;
    std::cout << r1 << std::endl; // left bitwise opertion it shifts all the bits of 17 by all bits of 2 (00010001) = (01000100) => 68
    r1 = op1 >> op2; 
    std::cout << r1 << std::endl; // right bitwise operation the same but to the right (00010001) = (00000100) => 4
    r1 = op1 & op2; 
    std::cout << r1 << std::endl; // it compares all the bits of two numbers if one bit is 1 and another is 1 it gives 1 and rest is 0
    r1 = op1 | op2;
    std::cout << r1 << std::endl; // as above but 1 + 0 = 1
    r1 = op1 ^ op2; 
    std::cout << r1 << std::endl; // the result is 1 if two compared bits are different
    r1 ^= op2;
    std::cout << r1 << std::endl; // the result is 1 if two compared bits are different


    // operators like -=, <<=, += are just a shortcut for a -= b -> a = a - b and etc.

    float a = 3.1, b = 4.2; 
    double c = 10.43, d = 2.32; 
    long double e = 19.3251289, f = 5.1271642;

    // modulus operation does not work on floating point variables
    return 0;
}
#include <iostream>
#include <cmath>


int main()
{
    double a;
    double b;
    double c;

    std::cout << "This program solves a quadratic formula, you need to input the coefficients in format ax^2 + bx + c\n";
    std::cout << "Give me a value for a: ";
    std::cin >> a;
    std::cout << "Give me a value for b: ";
    std::cin >> b;
    std::cout << "Give me a value for c: ";
    std::cin >> c;

    double sqrtpart = pow(b,2) - 4 * a * c;
    if (sqrtpart < 0)
    {
        std::cout << "Hmm, there are no real roots of x.  We don't do imaginary numbers here pal\n";
    }
    else if (sqrtpart == 0)
    {
        double root = -b / (2 * a);
        std::cout << "There is one real root, it is: " << root << "!\n";
    }
    else
    {
        double root1 = (-b + sqrt(sqrtpart)) / (2 * a);
        double root2 = (-b - sqrt(sqrtpart)) / (2 * a);
        std::cout << "The first root is " << root1 << " and the second root is " << root2 << "!\n";
    }
    
}
/*
BuoyantForce.cpp
Aras Cicek
CIT 245
Assignment 1 - Chapter 2
September 1, 2026
*/

#include <iostream>

int main()

{
    const double PI = 3.141592;
    double radius, weight, volume, buoyantForce;
    int recalculate;

    std::cout << "This program computes Buoyant Force in water given sphere radius.\n";
    std::cout << "Based on the weight of the sphere, it determines whether the sphere floats or sinks.\n";
    do {
        std::cout << "Enter the radius of the sphere.\n";
        std::cin >> radius;
        std::cout << "You entered " << radius << "\n";

        std::cout << "Enter the weight of the sphere.\n";
        std::cin >> weight;
        std::cout << "You entered " << weight << "\n";

        volume = 4.0 / 3.0 * PI * (radius * radius * radius);

        buoyantForce = volume * 62.4;

        std::cout << "Buoyont Force = " << buoyantForce << "\n";

        if (weight < buoyantForce) {
            std::cout << "It floats!\n";
        }
        else {
            std::cout << "It sunk...\n";
        }

        std::cout << "Recalculate? (1 = yes, 0 = exit)\n";

        std::cin >> recalculate;

    } while (recalculate == 1);
    return 0;
}

#include <iostream>

double kineticEnergy(double mass, double velocity)
{
    return 0.5 * mass * velocity * velocity;
}

int main()
{
    double mass;
    double velocity;

    std::cout << "Enter the object's mass in kilograms: ";
    std::cin >> mass;

    std::cout << "Enter the object's velocity in meters per second: ";
    std::cin >> velocity;

    std::cout << "The object's kinetic energy is "
        << kineticEnergy(mass, velocity)
        << " joules.\n";

    return 0;
}
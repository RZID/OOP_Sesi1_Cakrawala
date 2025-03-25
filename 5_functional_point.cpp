#include <iostream>
#include <cmath>

using namespace std;

// Define a pure function to create a Point
auto createPoint = [](double x, double y) -> pair<double, double>
{
    return {x, y};
};

// Pure function to calculate the distance from the origin
auto distanceFromOrigin = [](const pair<double, double> &p) -> double
{
    return hypot(p.first, p.second);
};

// Pure function to display a point
auto displayPoint = [](const pair<double, double> &p)
{
    cout << "Point(" << p.first << ", " << p.second << ")" << endl;
};

int main()
{
    // Creating a point using a pure function
    auto point = createPoint(3.0, 4.0);

    // Functionally processing the point
    displayPoint(point);
    cout << "Distance from origin: " << distanceFromOrigin(point) << endl;

    return 0;
}

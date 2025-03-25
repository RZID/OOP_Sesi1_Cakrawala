#include <iostream>
#include <cmath>

using namespace std;

class Point
{
    double x, y;

public:
    // Constructor using member initializer list
    Point(double xCoord, double yCoord) : x(xCoord), y(yCoord) {}

    // Method to calculate the distance from origin
    double distanceFromOrigin() const
    {
        return hypot(x, y); // Better readability than sqrt(x*x + y*y)
    }

    // Method to display the point
    void display() const
    {
        cout << "Point(" << x << ", " << y << ")" << endl;
    }
};

int main()
{
    // Create a Point object
    Point p(3.0, 4.0);

    // Display the point and distance from origin
    p.display();
    cout << "Distance from origin: " << p.distanceFromOrigin() << endl;

    return 0;
}

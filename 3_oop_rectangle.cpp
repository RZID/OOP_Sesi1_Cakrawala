#include <iostream>

using namespace std;

// Rectangle class
class Rectangle
{
    double length, width;

public:
    // Constructor with initialization list
    Rectangle(double length, double width) : length(length), width(width) {}

    // Getter methods (Best practice for encapsulation)
    double getLength() const { return length; }
    double getWidth() const { return width; }

    // Method to calculate area
    double calculateArea() const
    {
        return length * width;
    }

    // Method to display rectangle information
    void display() const
    {
        cout << "Rectangle Length: " << length << "\n"
             << "Rectangle Width: " << width << "\n"
             << "Area: " << calculateArea() << endl;
    }
};

// Main function
int main()
{
    double length, width;

    // Get user input
    cout << "Enter length: ";
    cin >> length;
    cout << "Enter width: ";
    cin >> width;

    // Create Rectangle object
    Rectangle rect(length, width);

    // Display rectangle details
    rect.display();

    return 0;
}

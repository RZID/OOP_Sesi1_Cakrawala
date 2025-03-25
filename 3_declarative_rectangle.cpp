#include <iostream>

using namespace std;

// Lambda function to calculate the area of a rectangle
auto calculateArea = [](double length, double width)
{
    return length * width;
};

// Lambda function to display rectangle information
auto displayRectangle = [](double length, double width)
{
    cout << "Rectangle Length: " << length << "\n"
         << "Rectangle Width: " << width << "\n"
         << "Area: " << calculateArea(length, width) << endl;
};

int main()
{
    double length, width;

    // Get user input
    cout << "Enter length: ";
    cin >> length;
    cout << "Enter width: ";
    cin >> width;

    // Display rectangle details
    displayRectangle(length, width);

    return 0;
}

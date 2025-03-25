#include <iostream>

using namespace std;

// Counter class
class Counter
{
    int count;

public:
    // Constructor initializes count to zero
    Counter() : count(0) {}

    // Method to increment the counter
    void increment()
    {
        count += 1;
    }

    // Method to get the current count
    int getCount() const
    {
        return count;
    }

    // Method to display the count
    void display() const
    {
        cout << "Current count: " << count << endl;
    }
};

int main()
{
    Counter myCounter;

    // Increment the counter twice
    myCounter.increment();
    myCounter.increment();

    // Display the count
    myCounter.display();

    return 0;
}

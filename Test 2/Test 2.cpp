#include <iostream>

using namespace std;

int counter = 0;


int main()
{
    while (counter <=100)
    {
        if (counter % 2 == 1)
        {
            cout << counter << "\n";
        }
        counter++;
    }
}

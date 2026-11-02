#include <iostream>

using namespace std;

int number;
int total;
int NOfNumbers;

int main()
{
    total = 0;
    while (number >= 0)
    {
        cout << "input?\n";
        cin >> number;
        total = total + number;
        NOfNumbers = NOfNumbers++;
    }
    cout << (total/NOfNumbers);
}


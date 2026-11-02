// while loop test.cpp : This file contains the 'main' function. Program execution begins and ends there.


#include <iostream>
#include <string>

using namespace std;

string UserInput;
string quit = "quit";
string hi = "hi";
string joke = "joke";

int main()
{
	while (UserInput != quit)
	{
		cout << "Input?";
		UserInput = ("default");
		cin >> UserInput;

		if (UserInput == hi)
		{
			cout << "hello\n";
		}

		if (UserInput == joke)
		{
			cout << "something something joke here.\n";
		}
	}

}


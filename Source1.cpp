#include <iospace>
using namespace std

int main()
{
	int number = 10;

	while (number > 0)
	{
		//Show the number 

		cout << "T-" << number << endl;

		//Decrease number by 1 

		number = number - 1;
	}
	//This is outside the loop 
	cout << "Blast off!" << endl;


	int CountdownUserInput;
	cout << "Input Timer:"
		cin >> CountdownUserInput;


	while (number > 0)
	{
		//Show the number 

		cout << "T-" << number << endl;

		//Decrease number by 1 

		number = number - 1;
	}
	//This is outside the loop 
	cout << "Blast off!" << endl;
}
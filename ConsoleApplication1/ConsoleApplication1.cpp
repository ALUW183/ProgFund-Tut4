#include <iostream>
#include <chrono>
#include <thread>
#include <cmath>
#include <string>

using namespace std;



int main()

{
	string input;
	double CountdownUserInput;
	double truncated;
	int remainingmilliseconds;
	double truncated2;

	std::cout << "Input Timer:";
	std::cin >> CountdownUserInput;
	input = to_string(CountdownUserInput);
	
	try
	{
		size_t pos;
		double number = stod(input, &pos);

		if (pos == input.length() && number > 0)
		{
			std::cout << "Valid positive numeric \n";
			while (CountdownUserInput >= 1)
			{
				//Show the number 

				std::cout << "T-" << CountdownUserInput << std::endl;

				if (CountdownUserInput >= 1)
				{
					//waiting for 1 second`
					this_thread::sleep_for(chrono::seconds(1));

					//Decrease number by 1 

					CountdownUserInput = CountdownUserInput - 1;
#
				}

			}
			if (CountdownUserInput >= 1)
			{
				//waiting for 1 second
				std::this_thread::sleep_for(chrono::seconds(1));
				std::cout << "Blast off!" << std::endl;
			}
			else
			{
				// turning the remaining decimal into a functional integer of the milliseconds remaining
				truncated = CountdownUserInput;

				truncated = truncated * 1000;

				truncated2 = trunc(truncated);

				remainingmilliseconds = truncated2;


				//delaying by the remaining time

				std::cout << "T-" << CountdownUserInput << std::endl;

				std::this_thread::sleep_for(chrono::milliseconds(remainingmilliseconds));

				std::cout << "Blast off!" << std::endl;
			}

		}


		else
		{
			std::cout << "Invalid input";
		}
	}
	catch (...)
	{
		std::cout << "Invalid Input";
		return main();
	}


	

}
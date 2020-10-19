#include <iostream>
#include <string>

//using namespace std;

void travelNorth();
void travelSouth();
void printout(int n);

int main()
{
	int age;
	char dir;

	std::cout << "Please input your age as a number between 0-100. \n\n";
	std::cin >> age;

	if (age > 30)				// if player is older...
	{
		std::cout << "Hey old-timer!\n\n";
	}
	else if (age <= 30)			// if player is younger...
	{
		std::cout << "What do you want, whippersnapper?\n\n";
	}

	std::cout << "Which way are you going, " << age << "-year-old traveller? North [N] or South [S]?\n\n";
	std::cin >> dir;
	dir = toupper(dir);
	
	switch (dir)
	{
	case 'N':    	 			// if player types N...
		travelNorth();	 		// call function to go north
		break;    				// exit switch
	case 'S':
		travelSouth();
		break;
	default:     		 		// catch anything else
		std::cout << "Please try again.";
		break;   	 		 	// optional - exits anyway
	}
	// printout(10);
	system("PAUSE");
}

void travelNorth()
{
	std::cout << "Heading north...\n\n";
}

void travelSouth()
{
	std::cout << "Heading south...\n\n";
}

void printout(int n)
{
	if (n < 0)
	{
		return;
	}
	else
	{
		std::cout << n << " ... ";
		printout(n - 1);
	}
}

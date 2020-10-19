#include <iostream>
#include <string>

using namespace std;



string title = "The Haunted Castle \n\n";
string pix_castle = "    oo  oo  oo    \n    oo  oo  oo    \n    xxxxxxxxxx    \nxxxxxxxxxxxxxxxxxx\nx     oooooo     x\nx     o    o     x\nx     o    o     x\nxxxxxxo    oxxxxxx\n\n";

string icon_a1 = "\n\n lllll\n lx xl\n \ o o\n  \ \n   -  \n\n";
string icon_a2 = "\n\n   ( )  \n  (   ) \n   ( )\n    x  \n    x\n\n";
string icon_b1 = "\n\n - - -\n l l l\n -----\n l   l\n l - l\n ll ll\n -----\n\n";
string icon_b2 = "\n\n    l   \n    l   \n ---+---\n    l   \n    l   \n\n";
string icon_b3 = "\n\n    x   \n   xxx  \n  xxxxx \n xxxxxxx\n    o   \n    o   \n    o   \n\n";
string icon_c1 = "\n\n xxxxx\n l l l\n l l l\n l l l\n xxxxx\n\n";
string icon_c3 = "\n\n -----\n l   l\n l   l\n -----\n loool\n loool\n loool\n -----\n\n";

string q1 = "\nWhat's your name?\n";
string q2 = "\nWell, which way do you want to go? North, South, East or West?";

string p1 = "\nYou are having an adventure one day, ";
string p2 = ".  Good luck and may you make the correct choices...\n";
string p3 = "\nOops, you can't go that way.\n";
string p4 = "\nThe princess by the window looks up from her computer screen and thanks you for finding her phone.  You've won the game.\n\n";
string p5 = "\nOh dear.  Death has grabbed you by the throat.  GAME OVER and goodbye...\n";

string pa1 = "\nThere is a princess working at her computer by the tower window. She asks you to be quiet. \n";
string pa2 = "\nYou are clinging to the poison ivy growing around the tower.  A dragon swoops down and breathes fire down your neck.  \nOn either side lurk deadly vipers and certain death.";
string pa3 = "\nYou tumble down and fall through a trapdoor into a swirling void which spits you out at a familiar spot...\n";
string pb1 = "\nYou are inside the castle.  You can head right up the stairs to the tower or left down to the dungeons.\n";
string pb2 = "\nYou are at a crossroads.  To the left, there is a haunted castle. \nTo the right, there is a forest. \nThe road is blocked ahead and behind you lies certain death\n.";
string pb3 = "\nThe forest is cold and dark and filled with strange rustling noises. You can follow the sound of music straight ahead, but the sides of the road are blocked with heavy thorns. \n";
string pc1 = "\nYou are in the castle dungeon.  It seems empty.  There is a door labelled NO ENTRY in front of you, a door labelled DANGEROUS HOLE to your right and a locked cage of dragons to your left...\n";
string pc2 = "\nOh dear.  Death has grabbed you by the throat.  GAME OVER and goodbye...\n";
string pc3 = "\nA golden mobile phone is lying beside a scorched bush.  Pick it up.  The way ahead smells of sulphur, to the left is a deep hole and to the right is a fire-breathing dragon.\n";

//variables (user inputs)
string my_name;
string dir;

// map of possible places, start in b2
// a1  a2  a3
// b1  b2  b3
// c1  c2  c3

// declare function for each area
void area_a1();
void area_a2();
void area_a3();
void area_b1();
void area_b2();
void area_b3();
void area_c1();
void area_c2(); //certain death
void area_c3();

void area_a1()
{
	cout << icon_a1;
	cout << pa1;
	cout << q2;
	cin >> dir;
	if (dir == "left")
	{
		cout << p3;
		area_a1();
	}
	else if (dir == "right")
	{
		cout << p3;
		area_a1();
	}
	else if (dir == "forward")
	{
		area_a2();
	}
	else if (dir == "back")
	{
		area_b1();
	}
	else
	{
		cout << p3;
		area_a1();
	}
}
void area_a2()
{
	cout << icon_a2;
	cout << pa2;
	cout << q2;
	cin >> dir;
	if (dir == "left")
	{
		cout << p5;
	}
	else if (dir == "right")
	{
		cout << p5;
	}
	else if (dir == "forward")
	{
		cout << pa3;
		area_a3();
	}
	else if (dir == "back")
	{
		area_a1();
	}
	else
	{
		cout << p3;
		area_a2();
	}
}
void area_a3()
{
	cout << pa3;
	area_b2();
}
void area_b1()
{
	cout << icon_b1;
	cout << pb1;
	cout << q2;
	cin >> dir;
	if (dir == "left")
	{
		area_c1();
	}
	else if (dir == "right")
	{
		area_a1();
	}
	else if (dir == "forward")
	{
		cout << p3;
		area_b1();
	}
	else if (dir == "back")
	{
		area_b2();
	}
	else
	{
		cout << p3;
		area_b1();
	}
}
void area_b2()
{
	cout << icon_b2;
	cout << pb2;
	cout << q2;
	cin >> dir;
	if (dir == "left")
	{
		area_b1();
	}
	else if (dir == "right")
	{
		area_b3();
	}
	else if (dir == "forward")
	{
		cout << p3;
		area_b2();
	}
	else if (dir == "back")
	{
		cout << p5;
	}
	else
	{
		cout << p3;
		area_b2();
	}
}
void area_b3()
{
	cout << icon_b3;
	cout << pb3;
	cout << q2;
	cin >> dir;
	if (dir == "left")
	{
		cout << pa3;
		area_b2();
	}
	else if (dir == "right")
	{
		cout << p3;
		area_b3();
	}
	else if (dir == "forward")
	{
		cout << p3;
		area_c3();
	}
	else if (dir == "back")
	{
		area_b2();
	}
	else
	{
		cout << p3;
		area_b3();
	}
}
void area_c1()
{
	cout << icon_c1;
	cout << pc1;
	cout << q2;
	cin >> dir;
	if (dir == "left")
	{
		area_b1();
	}
	else if (dir == "right")
	{
		area_a3();
	}
	else if (dir == "forward")
	{
		cout << p5;
	}
	else if (dir == "back")
	{
		area_b1;
	}
	else
	{
		cout << p3;
		area_c1();
	}
}
void area_c2()
{

}
void area_c3()
{
	cout << icon_c3;
	cout << pc3;
	cout << q2;
	cin >> dir;
	if (dir == "left")
	{
		cout << p3;
		area_c3();
	}
	else if (dir == "right")
	{
		area_c3;
	}
	else if (dir == "forward")
	{
		cout << p5;
	}
	else if (dir == "back")
	{
		area_b1();
	}
	else
	{
		cout << p3;
		area_c3();
	}
}

//STATUS: what stage of game are we at?
//1=start, 2=win, 3=death
//int status = 1;

int main()
{
	//display title and picture and question 1
	cout << title << endl;
	cout << pix_castle << endl;
	cout << q1;

	//wait for user to input name and hit return(\n)
	//cin extraction stops reading as soon as it finds any blank space character
	//so we can use the function getline instead
	getline(cin, my_name);

	//ask question 2
	cout << p1 << my_name << p2;

	//start the area functions - asking for direction and changing location
	area_b2();

	// Program's over. Wait for user to press something...
	// This works in Windows
	system("PAUSE");


	return 0;
}

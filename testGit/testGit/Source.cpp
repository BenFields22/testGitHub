#include "enemy.h"
#include <iostream>

using namespace std;

int main()
{
	cout << "you encounter an enemy on the road" << endl;
	Enemy joe = { 10,13,5 };

	cout << "\nHis name is joe and he is massive carrying a large great sword" << endl;
	
	cout << "Joe walks up to you\n" << endl;
	
	cout << "Enemy stats:" << endl;
	cout << "	AC: " << joe.getAC() << endl;
	cout << "	HP: " << joe.getHP() << endl;
	cout << "	Cantrips: " << joe.getCant() << endl;

	int dec = joe.chooseBehavior();
	cout << "\nJoe decides to do option number " << dec << endl;

	if (dec==1)
	{
		joe.attack();
	}
	else if (dec==2)
	{
		joe.speak();
	}
	else
	{
		joe.run();

	}

	cout << "\nAnother figure pops out of the woods" << endl;
	Enemy jane;
	jane.attack();

	
	system("PAUSE");



	return 0;
}
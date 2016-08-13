#include "Enemy.h"
#include <iostream>
#include <cstdlib>
#include <random>
#include <ctime>

using namespace std;

Enemy::Enemy()
{
	cout << "The enemy has been created. Muahhahahaha" << endl;

};
Enemy::Enemy(int acI, int hpI, int cantripsI)
{
	cout << "The enemy has been created. Muahhahahaha" << endl; 
	ac = acI;
	hp = hpI;
	cantrips = cantripsI;
};

void Enemy::setAC(int num)
{
	ac = num;
};

void Enemy::setHP(int num)
{
	hp = num;
};

void Enemy::setCant(int num)
{
	cantrips = num;
};

int Enemy::getAC()
{
	return ac;
};

int Enemy::getHP()
{
	return hp;
};

int Enemy::getCant()
{
	return cantrips;
};

void Enemy::attack()
{
	cout << "He swings his broad sword across your chest slicing through your skin" << endl;
};

void Enemy::speak()
{
	cout << "He talks with you peacefully for hours" << endl;
};

void Enemy::run()
{
	cout << "He runs away instantly" << endl;
};

int Enemy::chooseBehavior()
{
	unsigned seed;
	seed = time(0);
	srand(seed);

	int ranNum = rand() % 3 +1;

	return ranNum;
};


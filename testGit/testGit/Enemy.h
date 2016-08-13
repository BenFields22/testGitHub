#pragma once
#ifndef ENEMY_H
#define ENEMY_H

class Enemy
{
private:
	int ac;
	int hp;
	int cantrips;

public:
	Enemy();
	Enemy(int ac, int hp, int cantrips);
	void setAC(int num);
	void setHP(int num);
	void setCant(int num);

	int getAC();
	int getHP();
	int getCant();

	void attack();
	void speak();
	void run();
	int chooseBehavior();


};


#endif
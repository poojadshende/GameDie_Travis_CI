#include <cstdlib>
#include<iostream>
#include<time.h>
//class constructor that seeds the random number generator
GameDie::GameDie()
{
	srand(time(NULL));
}

//generate a random number between 1-6 (inclusive) and return it
int GameDie::roll()
{
	int randomNumber;
	randomNumber = 0;
        randomNumber = rand()%6+1;
	return randomNumber;
}

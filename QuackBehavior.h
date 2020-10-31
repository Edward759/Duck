#ifndef QUACKBEHAVIOR_H
#define QUACKBEHAVIOR_H
#include <iostream>
using namespace std;

class QuackBehavior
{
public:
	virtual ~QuackBehavior(){};

	virtual void quack() = 0;
};
#endif
#ifndef FLYBEHAVIOR_H
#define FLYBEHAVIOR_H

#include <iostream>
using namespace std;

class FlyBehavior
{
public:
	virtual ~FlyBehavior(){};

	virtual void fly() = 0;
};
#endif
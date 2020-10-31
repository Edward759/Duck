#ifndef DUCK_H
#define DUCK_H

#include "FlyBehavior.h"
#include "QuackBehavior.h"

class Duck
{
public:
	Duck(FlyBehavior *flyBehavior, QuackBehavior *quackBehavior);
	virtual ~Duck(){};

	virtual void display(){};
	void performFly();
	void performQuack();
	void swim();

	void setFlyBehavior(FlyBehavior *fly);
	void setQuackBehavior(QuackBehavior *quack);

private:
	FlyBehavior *flyBehavior;
	QuackBehavior *quackBehavior;
};
#endif
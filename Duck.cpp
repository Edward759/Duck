#include "Duck.h"

Duck::Duck(FlyBehavior *flyBehavior, QuackBehavior *quackBehavior)
{
	this->flyBehavior = flyBehavior;
	this->quackBehavior = quackBehavior;
}

void Duck::performFly()
{
	flyBehavior->fly();
}
void Duck::performQuack()
{
	quackBehavior->quack();
}
void Duck::swim()
{
	cout << "All ducks folat, even decoys!" << endl;
}

void Duck::setFlyBehavior(FlyBehavior *fly)
{
	flyBehavior = fly;
}

void Duck::setQuackBehavior(QuackBehavior *quack)
{
	quackBehavior = quack;
}
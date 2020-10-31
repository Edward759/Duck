#include "Duck.h"
#include "FlyNoWay.h"
#include "Quack.h"

class ModelDuck :public Duck
{
public:
	ModelDuck(FlyBehavior *flyBehavior = new FlyNoWay(),
		QuackBehavior *quackBehavior = new Quack())
		:Duck(flyBehavior, quackBehavior){}

	void display()
	{
		cout << "I'm a model duck." << endl;
	}
};
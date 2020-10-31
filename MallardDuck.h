#include "Duck.h"
#include "FlyWithWings.h"
#include "Quack.h"

class MallardDuck:public Duck
{
public:
	MallardDuck(FlyBehavior *flyBehavior = new FlyWithWings(), 
		QuackBehavior *quackBehavior = new Quack()) 
		:Duck(flyBehavior, quackBehavior){}

	void display()
	{
		cout << "I'm a real Mallard duck." << endl;
	}
};
#include "MallardDuck.h"
#include "ModelDuck.h"
#include "FlyRocketPowerd.h"

int main()
{
	Duck *mallard = new ModelDuck();

	mallard->performFly();
	mallard->performQuack();

	mallard->setFlyBehavior(new FlyRocketPowerd());
	mallard->performFly();
	mallard->performQuack();

	system("pause");
	return 0;
}

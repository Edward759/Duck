#include "FlyBehavior.h"

class FlyRocketPowerd :public FlyBehavior
{
public:
	void fly()
	{
		cout << "I'm flying with a rocket." << endl;
	}
};
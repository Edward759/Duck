#include "FlyBehavior.h"

class FlyNoWay :public FlyBehavior
{
public:
	void fly()
	{
		cout << "I'm can't fly." << endl;
	}
};

#include "QuackBehavior.h"

class Squeak :public QuackBehavior
{
public:
	void quack()
	{
		cout << "Squeak." << endl;
	}
};
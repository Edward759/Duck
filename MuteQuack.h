
#include "QuackBehavior.h"

class MuteQuack :public QuackBehavior
{
public:
	void quack()
	{
		cout << "<<Silence>>" << endl;
	}
};
#include <iostream>
#include <string.h>

using namespace std;

class Base
{
	public:
	Base()
	{
		cout<<"Base Constructor"<<endl;
	}
	
	virtual ~Base()
	{
		cout<<"Base Destructor"<<endl;
	}
};

class Derive : public Base
{
	public:
	Derive()
	{
		cout<<"Derive Constructor"<<endl;
	}
	
	~Derive()
	{
		cout<<"Derive Destructor"<<endl;
	}
};

int main()
{
	Derive d1;
	
	return 0;
}


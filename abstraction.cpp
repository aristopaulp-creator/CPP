#include <iostream>
#include <string>
using namespace std;

class Remote 
{
	private:
		void TurnOn()
		{
			cout<<"Turning On"<<endl;
		}
	public:
		void On()
		{
			TurnOn();
			cout<<"Remote On"<<endl;
		}
};

int main ()
{
	Remote r;
	r.On();
	return 0;
}


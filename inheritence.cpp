#include <iostream>
#include <string>
using namespace std;
//single inheritence

class Parent
{
	protected:
	int age = 50;
	string name = "Paulus";
	void displayParent()
	{
		cout<<name<<" "<<age<<endl;
	}
};
class Child :public Parent
{
	public:
	void displayChild()
	{
		cout<<"Aristo";
	}
	void displayAll()
	{
		displayParent();
	}
};
int main()
{
	Child C;
	C.displayAll();
	return 0;
}

#include <iostream>
#include <string>
using namespace std;
// hierarchical inheritence

class Father
{
	protected:
	int age = 54;
	string name = "Paul";
	void displayFather()
	{
		cout<<name<<" "<<age<<endl;
	}
};
class Child :public Father
{
	protected:
	int age = 18;
	string name = "Aristo Paul";
	void displayChild()
	{
		cout<<name<<" "<<age<<endl;
	}
	void displayAll()
	{
		//cout<<Mother::name<<endl;
		//cout<<Father::name<<endl;
		//cout<<name<<endl;
		displayFather();
		displayChild();
	}
};
class GrandChild1 : Child
{
	public:
	void displayGrandChild1()
	{
		displayFather();
		displayChild();
	}
};
class GrandChild2 : Child
{
	public:
	void displayGrandChild2()
	{
		displayFather();
		displayChild();
	}
};
int main()
{
	GrandChild2 G;
	G.displayGrandChild2();

	return 0;
}

#include <iostream>
#include <string>
using namespace std;
//multi level inheritence

class Father
{
	protected:
	int age = 54;
	string name = "Paulus";
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
class GrandChild : public Child
{
	public:
	void displayGrandChild()
	{
		displayFather();
		displayChild();
	}
};
int main()
{
	GrandChild G;
	G.displayGrandChild();

	return 0;
}

#include <iostream>
#include <string>
using namespace std;
//multiple inheritence

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
class Mother
{
	protected:
	int age = 51;
	string name = "Lois jebamathi";
	void displayMother()
	{
		cout<<name<<" "<<age<<endl;
	}
};
class Child :public Father, Mother
{
	int age = 18;
	string name = "Aristo Paul";
	public:
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
		displayMother();
		displayChild();
	}
};
int main()
{
	Child C;
	C.displayAll();

	return 0;
}

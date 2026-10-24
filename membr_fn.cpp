#include <iostream>
#include <string.h>

using namespace std;

class Laptop
{
	public:
		int number;
		string name;
	Laptop(int n,string a)
	{
		number = n;
		name = a;
	}

    	string Model = "Lenovo LOQ";
		string CPU = "i5 13th gen";
		string GPU = "RTX 4050";
	
	void display();
};

void Laptop::display()
{
	cout<<Model<<endl;
	cout<<CPU<<endl;
	cout<<GPU<<endl;
	cout<<number<<endl;
	cout<<name<<endl;
}

int main()
{
	Laptop LOQ[3] = {Laptop(10,"Aristo"),Laptop(11,"Ace"),Laptop(12,"Aceeee")};
	
	for(int i=0;i<=2;i++)               
	{
		LOQ[i].display();                                                           
	}
	return 0;
	
}


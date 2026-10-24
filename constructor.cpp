#include <iostream>
#include <string>
using namespace std;

class Car
{
	public:
		string brand;
		double engine;
		
		Car(string brand, double engine)
		{
			this ->brand = brand;
			this ->engine = engine;	
			cout<<brand<<endl;
			cout<<engine<<endl;
		}
		~Car()
		{
			cout<<"Objects DESTRUCTED!"<<endl;
		}
};
int main()
{
	Car M5 ("BMW",3.5);
	Car copy = M5;
	cout<<copy.brand<<endl;
	cout<<copy.engine<<endl;
	return 0;

}

#include <iostream>
#include <string.h>
using namespace std;

/*
template <typename T>
T add(T a)
{
	return a;
}

template <typename T>
T add(T* a)
{
	return *a;
}

int main()
{
	int i = 5;
	int* ptr = &i;
	cout<<add(i);
	cout<<add(ptr);
}
*/

template <class t>

class Test
{
	private:
	t a;
	public:
		Test(t x)
		{
			a = x;
		}
		
		void display()
		{
			cout<<a<<endl;
		}
	
};

int main()
{
	Test<int> obj1(36);
	Test<double> obj2(25.44);
	Test<char> obj3('y');
	Test<string> obj4("Ace");
	
	obj1.display();
	obj2.display();
	obj3.display();
	obj4.display();
}

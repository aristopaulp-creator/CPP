#include <iostream>
#include <string.h>
using namespace std;

/*inline int square(int x)
{
	return x*x;
}

int main()
{
	int n;
	
	cout<<"Enter a number"<<endl;
	cin>>n;
	
	cout<<"Square of "<<n<<" = "<<square(n)<<endl;
	
	return 0;
}

class Sample
{
	private:
		int a;
	public:
		Sample(int x)
		{
			a=x;
		}
		friend void frnd(Sample s1,Sample s2);
		
};

void frnd(Sample s1,Sample s2)
{
	cout<<s1.a+s2.a<<endl;
}

int main()
{
	Sample obj1(20), obj2(20);
	frnd(obj1,obj2);
	
	return 0;
}


#include <iostream>
#include <string.h>

using namespace std;

class Car
{
	private:
		
		int year = 2007;
		string model = "Virtus GT";
		
	public:
		
		void display()
		{
			cout<<"Year : "<<year<<endl;
			cout<<"Model : "<<model<<endl;	
		}
		
};

void CarShow(Car c)
{
	c.display();
		
}
int main()
{
	Car BMW;
	CarShow(BMW);
	
	return 0;
}

class Calculation
{
	public:
		
		int add(int x, int y)
		{
			return x+y;
		}
		
		double add(double x, double y)
		{
			return x+y;
		}
};

int main()
{
	Calculation c1;
	cout<<c1.add(1,2)<<endl;
	cout<<c1.add(5.22,6.88)<<endl;
	
	return 0;
}


class Device
{
	public:
	virtual void ON()
	{
		cout<<"Device turning ON!!"<<endl;
	}
};

class TV : public Device
{
	void ON()
	{
		cout<<"TV turning ON!!"<<endl;
	}
};

class AC : public Device
{
	void ON()
	{
		cout<<"AC turning ON!!"<<endl;
	}
};

int main()
{
	Device *c;
	TV t;
	AC a;
	c = &t;
	c->ON();
	
	c = &a;
	c->ON();
	
	
	return 0;
}
*/

class Student
{
	private:
		int age;
	public:
	Student(int a)
	{
		this-> age = a;
	}
	
	void setage(int a)
	{
		this-> age = a;
	}
	
	void display()
	{
		cout<<this->age<<" ";
	}
};

int main()
{
	Student s1(18);
	Student s2(20);
	
	cout<<"Before update : ";
	
	s1.display();
	s1.setage(19);
	
	s2.display();
	s2.setage(21);
	
	cout<<"\n After update : ";
	
	s1.display();
	s2.display();
	
	return 0;
}




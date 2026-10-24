#include <iostream>
#include <string>
using namespace std;

class Remote 
{
	public:
	virtual	void show() = 0;  //Pure virtual
};
class TV : public Remote
{
	public:
		void show () override
	   {
			cout<<"TV Rmote"<<endl;
		}
};
class AC : public Remote
{
	public:
		void show() override
		{
			cout<<"AC Remote"<<endl;
		}
};
int main()
{
	Remote *r;      //Base class obj
	
	AC ac;         //Derived class obj
	TV tv;
	
	r = &ac;
	r->show(); 
	
	r = &tv;
	r->show();
	
	return 0;
}
/*
Polymorphism - many forms
   1. compile time - overloading
   2. Runtime 
*/

#include<iostream>
#include<conio.h>

using namespace std;
 
class Student
{
	private:
		int age = 18, rollno = 7;
		string name = "Kishore";
	public:
		void display()
		{
			cout<<"Age : "<<age<<endl;
			cout<<"Roll number : "<<rollno<<endl;
			cout<<"Name : "<<name<<endl;
		}
		
	~Student()
	{
		cout<<"Destructor is Called"<<endl;
	}
};

int main()
{
	Student s1;
	s1.display();
	
	return 0;
}

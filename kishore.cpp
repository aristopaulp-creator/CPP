#include<iostream>
#include<conio.h>

using namespace std;
 
class Student
{
	private:
		int age, rollno;
		string name;
		
	public:
		Student(int n,int r,string nm)
		{
			age = n;
			rollno = r;
		 	name = nm;
		}
		
		void display()
		{
			cout<<"Age : "<<age<<endl;
			cout<<"Roll number : "<<rollno<<endl;
			cout<<"Name : "<<name<<endl;
		}
};

int main()
{
	Student s1(18,007,"Kishore");
	s1.display();
	
	getch();
	return 0;
}

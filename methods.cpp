#include <iostream>
#include <string>
using namespace std;

class student
{
	public:
		int roll_no;
		string name;
		void get()
		{
			cout<<"Enter student name: ";
			cin>>name;
			cout<<"Enter student roll no: ";
			cin>>roll_no;
		}
		void display()
		{
			cout<<name<<endl;
			cout<<roll_no<<endl;
		}
	
};

int main()
{
	student ace;
	ace.get();
	ace.display();
	return 0;
}

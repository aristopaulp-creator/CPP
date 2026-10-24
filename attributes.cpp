#include <iostream>
#include <string>
using namespace std;

class student{
	public:
		
		int roll_no; //attributes
		string name; //attributes
};

int main(){
	
	student ace;
	
	cout<<"Enter student name & roll no :"<<endl;
	cin>>ace.name>>ace.roll_no;
	
	cout<<ace.name<<endl;
	cout<<ace.roll_no<<endl;
	
	return 0;
}

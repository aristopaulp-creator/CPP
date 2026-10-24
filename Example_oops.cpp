#include <iostream>
#include <string>
using namespace std;

class Author{
	protected:
		int id;
		string name;
		
		void displayAuthor(){
			cout<<"Author's Name : "<<name<<endl;
		}
	public:
		Author(int id,string name){
			this->id = id;
			this->name = name; 
		}
};
class Book : public Author{
	public:
		int Book_id;
		string Book_name;
		
		void displayBook(){
			cout<<"Book's Name  : "<<Book_name<<endl;
			displayAuthor();
		}
		
		Book(int Book_id,string Book_name,int id,string name)
		: Author(id,name) {
			this->Book_id = Book_id;
			this->Book_name = Book_name;
		}
};

int main()
{
	
	Book b1(4007,"Theriyathu",007,"Aristo");
	b1.displayBook();
	
	return 0;
}
/*
is - a relationship
Remote, TV Remote - > TV Remote is a Remote
Derived Class is a Base Class
*/

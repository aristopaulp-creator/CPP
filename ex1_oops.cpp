#include <iostream>
#include <string>
using namespace std;

class Author{
	public:
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
class Book {
	public:
		int Book_id;
		string Book_name;
		Author* author;
		
		void displayBook(){
			cout<<"Book's Name  : "<<Book_name<<endl;
			author->displayAuthor();
		}
		
		Book(int Book_id,string Book_name,Author* author){
			this->Book_id = Book_id;
			this->Book_name = Book_name;
			this->author = author;
			}
};

int main()
{
	Author a1(007, "Aristo");
	Book b1(4007, "Theriyathu", &a1);
	Book b2(4008, "Therium", &a1);
	
	b1.displayBook();
	b2.displayBook();
	
	return 0;
}
//has a relationship
//book has an author
 

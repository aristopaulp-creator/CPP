#include<iostream>
#include<conio.h>
 using namespace std;
 class Car 
 {
   private:
 	string model;
 	int year;
 	
   public:
       Car(string k,int m)
     {
	 
   	  model=k;
   	  year=m;
   	
     }
     void display()
     { 
	   cout<<"Model:"<<model<<endl;
	   cout<<"Year:"<<year<<endl;
	 }
	 ~Car()
	 {
	 	cout<<"this is called destructor"<<endl;
	 }
 };
 int main()
 {
 	Car k1("fortuner",2025);
 	k1.display();
 	
 	getch();
 	return 0;
 }

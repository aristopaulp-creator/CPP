#include <iostream>
using namespace std;

int main(){
	
	int a = 45;
	int b = 0;
	
	try{
		if(b==0)
			throw string("Divide by Zero error");
		int c = a/b;
	}
	catch(string e){
		cout<<e<<endl;
	}
	
	return 0;
}

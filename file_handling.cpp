#include <iostream>
#include <fstream>

using namespace std;

int main(){
	//write file
	/*ofstream file("Sample.txt", ios::app);
	
	file<<"New text 1"<<endl;*/
	
	//read file
	string txt;
	ifstream file("Sample.txt");
	
	while(getline(file, txt)){
		cout<<txt<<endl;
	}
	cout<<txt<<endl;
	
	file.close();
	
	return 0;
}

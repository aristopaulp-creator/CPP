#include <iostream>
#include <stack>

using namespace std;

int main(){
    string strg;
    cout<<"Enter the string to reverse: ";
    cin>>strg;

    stack <char> s;
    for(char ch : strg){
        s.push(ch);
    }

    while(!s.empty()){
    	cout<<s.top();
        s.pop();
    }

    return 0;
}

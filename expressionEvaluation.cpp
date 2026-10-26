#include <iostream>
#include <stack>

using namespace std;

int main(){
    stack <int> s;
    string exp;

    cout<<"Enter the Expression: ";
    cin>>exp;

    for(char ch : exp){
        if(isdigit(ch))
            s.push(ch-'0');
        else{
            int b = s.top();
            s.pop();

            int a = s.top();
            s.pop();

            switch (ch)
            {
            case '+':
                s.push(a+b);
                break;

            case '-':
                s.push(a-b);
                break;

            case '*':
                s.push(a*b);
                break;

            case '/':
                s.push(a/b);
                break;
            }
        }

    }
    cout<<"Result: "<<s.top();

    return 0;
}

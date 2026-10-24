#include <iostream>
#include <cstdlib>

using namespace std;

#define size 5

class StackClass{
    private:
        struct stack
        {
            int s[size];
            int top;
        }st;

    public:
        StackClass();
        int stfull();
        void push(int item);
        int stempty();
        int pop();
        void display(); 
};

StackClass::StackClass(){
    st.top = -1;
    for(int i = 0; i<size-1; i++){
        st.s[i] = 0;
    }

}

int StackClass::stfull(){
    if(st.top>=size-1)
        return 1;

    else
        return 0;
}

int StackClass::stempty(){
    if(st.top == -1)
        return 1;

    else
        return 0;
}

void StackClass::push(int item){
    st.top++;
    st.s[st.top] = item;
}

int StackClass::pop(){
    int item = st.top;
    st.top--;
    return item;
}

void StackClass::display(){
    if(st.top == -1)
    	cout<<"Empty";

	else
		for(int i = st.top; i>=0; i--){
            cout<<st.s[i]<<endl;
    	}
}

int main(){
    StackClass obj;
    obj.push(10);
    obj.push(20);
    obj.push(30);

    obj.display();

    obj.pop();
    obj.pop();
    obj.pop();
    
    obj.display();

	return 0;
}

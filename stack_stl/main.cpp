#include <iostream>
#include<stack>

using namespace std;

int main()
{
 //creation of stack
 stack<int>s;
 //pushing element//
 s.push(4);
 s.push(5);
 //popping element//
 s.pop();
 cout<<"printing top element "<<s.top()<<endl;
 //checking stack is empty or not
 if(s.empty())
 {
     cout<<"stack is empty"<<endl;
 }
 //
 else{
    cout<<"stack is not empty"<<endl;
 }
 //returini g size of stack//
 cout<<"size of stack is"<< s.size()<<endl;
 //we can implement many more operation using stack
 return 0;

}

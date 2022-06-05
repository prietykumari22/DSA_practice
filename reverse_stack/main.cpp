#include <iostream>
#include<stack>

using namespace std;
int main()

{
    string str="prietykumari";
    //creating a stack
    stack<char>s;
    //creating a empty staring
    string str2="";
    //pushing elemnent into satck
    for(int i=0;i<str.length();i++)
    {
        char ch=str[i];
        s.push(ch);

    }
    //popping elemenet
    while(!s.empty())
    {
       // intialing ch variable with top
        char ch =s.top();
        //pushing into string2
        str2.push_back(ch);
        s.pop();
    }
    //storing it in stack
    cout<<"ans is "<<str2<<endl;
    return 0;
}


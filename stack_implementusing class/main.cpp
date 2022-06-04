#include <iostream>
#include<stack>

using namespace std;

//implementaion of stack
class stackx
{
    public:
    int sizex;
    int top;
    int *arr;
    //implementing  constructor function //
    stackx(int sizex)
    {
        this->sizex=sizex;
        int top=-1;
        //CREATING ARRAY DYNAMICALLY//
        arr=new int[sizex];

    }
    void push(int element)
    {
        if(sizex-top>1)
        {
            top++;
            arr[top]=element;
        }
        else
            cout<<"stack is overflow"<<endl;
    }
    void pop()
    {
        if(top>=0)
        {
            top--;

        }
        else
        {
            cout<<"stack is underflow"<<endl;
        }
    }
    int peek()
    {
        if(top>=0)
        {
            return arr[top];

        }
        else{
            cout<<"stack is empty"<<endl;
            return 0;
        }
    }
    bool isempty()
    {
    if(top==-1)
        {
        return true;
        }
    else
    {
        return false;
    }
    }

};
int main()
{//creation of stack;
    stackx st(5);
    st.push(23);
    st.push(29);
    st.push(34);
    st.push(56);
    st.push(36);
    st.push(34);
//returning top elemenet//
    cout<<st.peek()<<endl;
    st.pop();
    cout<<st.peek()<<endl;
    st.pop();
    cout<<st.peek()<<endl;
    st.pop();
    cout<<st.peek()<<endl;
    st.pop();
    cout<<st.peek()<<endl;
    st.pop();
    if(st.isempty())
    {

        cout<<"stack is empty"<<endl;
    }
    else{
        cout<<"stack is not empty "<<endl;
    }

}

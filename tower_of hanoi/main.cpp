#include <iostream>

using namespace std;

void tower_of_hanoi(int n ,int x,int y,int z)
{
    if(n>0)
    {
       tower_of_hanoi(n-1,x,z,y);//moving x to y using auxilliary variable x
       cout<<"("<<x<<","<<z<<")"<<endl;;
       tower_of_hanoi(n-1,y,x,z);
    }
}
int main()
{
    tower_of_hanoi(10,1,2,3);
    return 0;
}

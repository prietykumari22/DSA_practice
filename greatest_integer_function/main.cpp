#include <iostream>

using namespace std;

int main()
{
 int a=12,b=4;
 int minx=min(a,b);
 for(int minx;minx>0;minx--)
 {
     if(a%minx==0&&b%minx==0)
     {

     break;
     }

 }
 cout<<minx;
}

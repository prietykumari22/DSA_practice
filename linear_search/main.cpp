#include <iostream>
using namespace std;

bool linear_search(int arr[],int sizex,int key)
{
    if(sizex==0)
        return false;
    if(arr[sizex]==key)
    {
        return true;
    }
    return linear_search(arr,sizex-1, key);

}
int main()
{
    int key;
    int arr[5]={3,4,5,6,7};
    if(linear_search(arr,5 ,8))
     {
         cout<<"yes";
     }
     else{
            cout<< "no";
     }
}



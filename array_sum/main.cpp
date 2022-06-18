#include <iostream>

using namespace std;
int array_sum(int arr[],int sizex)
{
    if(sizex<0)
    {
        return 0;
    }
    else
        return array_sum( arr,sizex-1)+arr[sizex];

}
int main()
{
    int arr[]={4,5,7,8,9};
    int sum=array_sum(arr,5);
    cout<<sum;
}

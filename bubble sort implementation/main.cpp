#include <iostream>
using namespace std;

int partion(int arr[],int s,int e )
{
    int sizex;
    int pivot=arr[s];
    while(s<e)
    {
    if(arr[s]<=pivot)
    {
        s++;
    }
    if(arr[e]>pivot)
    {
       e--;
    }

    if(s<e)
    {
        swap(arr[s],arr[e]);
    }
    }
    swap(arr[0],arr[e]);
    return arr[e];
}
int Quicksort(int arr[],int s,int e)
{
    int sizex=6;
    if(s<e){

    int p=partion(arr,0,sizex-1);
    Quicksort(arr,0,p-1);
    Quicksort(arr,p+1,e);
    }

}
int main()
{
    int arr[6]={3,5,1,8,2,4};
    int sizex=6;
    Quicksort(arr,0,sizex-1);
    for(int i=0;i<sizex;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;



    return 0;
}


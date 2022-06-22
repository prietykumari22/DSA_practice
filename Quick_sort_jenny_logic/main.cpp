
#include <iostream>
using namespace std;

int partion(int arr[],int s,int e )
{
    int pivot=arr[s];
   int start=s;
   int endx =e;
    while(start<endx)
    {
    if(arr[start]<=pivot)
    {
        start++;
    }
    if(arr[endx]>pivot)
    {
       endx--;
    }

    if(start<endx)
    {
        swap(arr[start],arr[endx]);
    }
    }
    swap(arr[s],arr[endx]);
    return endx;
}
void Quicksort(int arr[],int s,int e)
{

    if(s<e)
    {

    int p=partion(arr,s,e);
    Quicksort(arr,s,p-1);
    Quicksort(arr,p+1,e);
    }


}
int main()
{
    int arr[7]={3,5,1,8,2,4,6};
    int sizex=7;
    Quicksort(arr,0,sizex-1);
    for(int i=0;i<sizex;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;


    return 0;
}

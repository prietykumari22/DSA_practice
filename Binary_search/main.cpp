#include <iostream>

using namespace std;
void print(int arr[],int s,int e)
{
    for(int i=s;i<=e;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

}
bool binary_searchx(int arr[],int s,int e,int k)
{
    print( arr, s, e);
    //base case
    if(s>e)
        return false;
    int mid=(s+e)/2;
    cout<<"value of array mid"<<arr[mid]<<endl;
    if(arr[mid]==k)
    {
        return mid;
    }
    if(arr[mid]<k)
    {
        return binary_searchx(arr, mid+1,e,k);
    }
    else
       return  binary_searchx(arr,s, mid-1, k);
}


int main()
{
    int arr[8]={4,5,7,8,10,13,15,22};
    if(binary_searchx(arr,0,7,25)){
        cout<<"element is found"<<endl;
    }
    else{
            cout<<"element not found"<<endl;

    }


}

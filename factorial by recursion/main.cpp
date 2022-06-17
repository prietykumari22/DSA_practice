#include <iostream>

using namespace std;
 int binary_searchx(int arr[],int sizex,int key)
{
    int n;
    int start=0;
    int endX =sizex-1;
    int mid=(start+endX)/2;
    while(start<=endX)
    {

        if(key==arr[mid])
            return mid;
        else if(key>arr[mid])
            start=mid+1;
        else
            endX=endX+1;

        mid=(start+endX)/2;;
    }
    return -1;

}
int main()
{
    int arr[5]={4,6,8,9,11};
    int index=binary_searchx( arr,5,9);
    cout<<"index"<<index<<endl;

}







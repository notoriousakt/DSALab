#include<iostream>
using namespace std;
int main()
{
    int arr[100],i,j,min,k,l;
    cout<<"ENTER 10 RANDOM NUMBERS";
    for(i=0;i<10;i++)
    {
        cin>>arr[i];
    }
    for(i=0;i<9;i++)
    {
        min=arr[i];
        l=i;
        for(j=i+1;j<10;j++)
        {
            if(arr[j]<min)
            {
                min=arr[j];
                l=j;
            }
        }
        k=arr[i];
        arr[i]=arr[l];
        arr[l]=k;
    }
    cout<<"ARRAY AFTER SELECTION SORT";
    for(i=0;i<10;i++)
    {
        cout<<" "<<arr[i];
    }
}
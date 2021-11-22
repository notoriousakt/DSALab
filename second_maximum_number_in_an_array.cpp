#include<iostream>
using namespace std;
int main()
{
    int arr[100],i,sl=INT32_MIN,l=INT32_MIN;
    cout<<"ENTER 10 RANDOM NUMBERS";
    for(i=0;i<10;i++)
    {
        cin>>arr[i];
    }
    for(i=0;i<10;i++)
    {
        if(arr[i]>l)
        {
            sl=l;
            l=arr[i];
        }
        else
        {
            if(arr[i]>sl && arr[i]<l)
            {
                sl=arr[i];
            }
        }
    }
    cout<<"THE SECOND LARGEST NUMBER IN THIS ARRAY IS "<<sl;
}
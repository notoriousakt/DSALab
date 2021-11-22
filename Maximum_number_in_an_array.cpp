#include<iostream>
using namespace std;
int main()
{
    int arr[100],i,max;
    cout<<"ENTER 10 RANDOM NUMBERS";
    for(i=0;i<10;i++)
    {
        cin>>arr[i];
    }
    max=arr[0];
    for(i=1;i<10;i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }
    }
    cout<<"THE MAXIMUM NUMBER IN THE ARRAY IS "<<max;

}
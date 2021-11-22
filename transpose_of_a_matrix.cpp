#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"Enter the no. of rows and columns";
    cin>>a>>b;
    int X[a][b],Y[a][b],i,j;
    cout<<"ENTER m1 MATRIX";
    for(i=0;i<a;i++)
    {
        for(j=0;j<b;j++)
        {
            cin>>X[i][j];
        }
    }
    cout<<"Transpose of this Matrix is ";
    for(i=0;i<a;i++)
    {
        for(j=0;j<b;j++)
        {
            Y[j][i]=X[i][j];
        }
    }
     for(i=0;i<a;i++)
    {
        for(j=0;j<b;j++)
        {
            cout<<" "<<Y[i][j];
        }
        cout<<endl;
    }
}
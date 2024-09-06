#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number of row and column: ";
    cin>>n;
    int arr[n][n],brr[n][n];
    cout<<"Enter the elements in 1st array"<<endl;
    for(int i=0;i<n;i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin>>arr[i][j];
        }   
    }
    cout<<"Enter the elements in 2nd array"<<endl;
    for(int i=0;i<n;i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin>>brr[i][j];
        }   
    }
    cout<<"Sum is "<<endl;
    for(int i=0;i<n;i++)
    {
        for (int j = 0; j < n; j++)
        {
            brr[i][j]+=arr[i][j];
            cout<<brr[i][j]<<" ";
        }
        cout<<endl;   
    }
    return 0;
}
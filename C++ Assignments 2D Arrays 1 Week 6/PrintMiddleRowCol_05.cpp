#include <iostream>
using namespace std;
int main()
{
    int n,m=0;
    cout << "Enter the row number : ";
    cin >> n;
    m=n/2;
    int arr[n][n];
    cout << "Enter the elements"<<endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin>>arr[i][j];
        }
    }
    cout<<"Given Matrix"<<endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if(m==j||m==i)
            cout<<arr[i][j]<<" ";
            else 
            cout<<" "<<" ";
        }
        cout<<endl;
    }
   return 0;
}
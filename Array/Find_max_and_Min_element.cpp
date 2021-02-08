#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[]={3,1,4,7,2,8,9};
    int n=sizeof(arr)/sizeof(arr[0]);
    sort(arr,arr+n);
    cout<<"Maximum element:"<<arr[n-1];
    cout<<"\nMinimum element:"<<arr[0];
}
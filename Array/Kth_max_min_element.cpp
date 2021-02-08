#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[]={3,1,4,7,2,8,9};
    int n=sizeof(arr)/sizeof(arr[0]);
    sort(arr,arr+n);
    int k=2;
    cout<<k<<" Maximum element is:"<<arr[n-k-1];
    cout<<endl<<k<<" Minimum element is:"<<arr[k-1];
}
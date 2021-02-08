#include <bits/stdc++.h>
using namespace std;
int getMinDiff(int arr[],int n,int k)
{
    sort(arr,arr+n);
    int ans=arr[n-1]-arr[0];
    int small=arr[0]+k;
    int big=arr[n-1]-k;
    if(small>big)swap(big,small);
    
    for(int i=1;i<n-1;i++)
    {
        int sub=arr[i]-k;
        int add=arr[i]+k;
        if(sub>=small || add<=big)continue;
        
        if(big-sub<=add-small)
        {
            small=sub;
        }
        else
        {
            big=add;
        }
    }
    return min(ans,big-small);
}
int main()
{
    int arr[] = {1,15,10}; 
    int n = sizeof(arr)/sizeof(arr[0]); 
    int k = 6; 
    cout << "\nMaximum difference is "
        << getMinDiff(arr, n, k); 
    return 0; 
}
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[]={-1, 2, -3, 4, 5, 6, -7, 8, 9 };
    int n=sizeof(arr)/sizeof(arr[0]);
    int j=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]<0)
        {
            if(arr[i]!=arr[j])
            {
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
            j++;
        }
    }
    for(int i=0;i<n;i++)cout<<arr[i]<<" ";
}
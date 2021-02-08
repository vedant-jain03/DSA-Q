#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr1[]={1,2,3,4,5};
    int arr2[]={1,2,6};
    int n=sizeof(arr1)/sizeof(arr1[0]);
    int m=sizeof(arr2)/sizeof(arr2[0]);
    cout<<"Intersection:";
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(arr1[i]==arr2[j])cout<<arr1[i]<<" ";
        }
    }
    cout<<"Union:";
    int i=0;
    int j=0;
    while(i<n && j<m)
    {
        if(arr1[i]==arr2[j])
        {
            cout<<arr1[i]<<" ";
            i++;
            j++;
        }
        else if(arr1[i]>arr2[j])
        {
            cout<<arr2[j++]<<" ";
        }
        else
        {
            cout<<arr1[i++]<<" ";
        }
    }
    while(i<n)
    {
        cout<<arr1[i++]<<" ";
    }
    while(j<m)
    {
        cout<<arr2[j++]<<" ";
    }
}
#include <bits/stdc++.h>
using namespace std;
int maxSubArraySum(int a[],int n)
{
    int max=0;
    for(int i=0;i<n;i++)
    {
        int max_begin=0;
        for(int j=i;j<n;j++)
        {
            max_begin=max_begin+a[j];
            if(max_begin>max)max=max_begin;
            if(max_begin<0)max_begin=0;
        }
    }
    return max;
}
int main()
{
    int a[] = {-2, -3, 4, -1, -2, 1, 7, -3}; 
    int n = sizeof(a)/sizeof(a[0]); 
    int max_sum = maxSubArraySum(a, n); 
    cout << "Maximum contiguous sum is " << max_sum; 
    return 0; 
}
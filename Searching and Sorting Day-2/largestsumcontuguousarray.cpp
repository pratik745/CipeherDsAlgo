//Finding contiguous subarray with maximum sum--(kadanes algo)
#include<bits/stdc++.h>
using namespace std;
int maxSubarraySum(int arr[], int n){
        int sum=0,maxm=0;
        for(int i=0;i<n;i++)
        {
            sum+=arr[i];
            if(sum<0){sum=0;}
            if(sum>maxm){maxm=sum;}
        }
        return maxm;
}
int main()
{
    int n;
    cout<<"Enter the size of the array:";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){cin>>arr[i];}
    cout<<"Maximum subarray sum is:"<<maxSubarraySum(arr,n);
    return 0;
}


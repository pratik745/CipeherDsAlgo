#include<bits/stdc++.h>
using namespace std;
int search(vector<int> nums,int n,int target)
{
    int low =0,high=n-1;
        while(low<=high)
        {
            int mid=(low+high)/2;
            if(nums[mid]==target){return mid;}
            if(nums[low]<=nums[mid])
            {
                if(target>=nums[low] && target<=nums[mid])
                    high=mid-1;
                else 
                    low=mid+1;
            }
            else
            {
                if(target>=nums[mid] && target<=nums[high])
                    low=mid+1;
                else
                    high=mid-1;
            }
        }
        return -1;
}
int main()
{
    int n;
    cout<<"Enter the size of the array:";cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++){cin>>v[i];}
    int target;
    cout<<"Enter the element to be searched:";cin>>target;
    int k=search(v,n,target);
    if(k==-1){cout<<"Not Found";}
    else{cout<<"Found at position:"<<k+1;}
}
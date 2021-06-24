#include<bits/stdc++.h>
using namespace std;
vector<int> merge(int arr1[],int arr2[],int n1,int n2)
{
    int i=0,j=0;
    vector<int> v;
    while(i<n1 && j<n2)
    {
    if(arr1[i]<=arr2[j]){v.push_back(arr1[i]);i++;}
    else{v.push_back(arr2[j]);j++;}
    }
    while(i<n1){v.push_back(arr1[i]);i++;}
    while(j<n2){v.push_back(arr2[j]);j++;}
    return v;
}
int main()
{
    int n1;
    cout<<"Enter the number of elements in array1:";cin>>n1;
    cout<<"Enter the first sorted array:"<<endl;
    int arr1[n1];
    for(int i=0;i<n1;i++){cin>>arr1[i];}
    int n2;
    cout<<"Enter the number of elements in array2:";cin>>n2;
    cout<<"Enter the second array:"<<endl;
    int arr2[n2];
    for(int i=0;i<n2;i++){cin>>arr2[i];}
    vector<int> v=merge(arr1,arr2,n1,n2);
    for(auto x:v){cout<<x<<" ";}
    return 0;
}
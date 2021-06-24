#include <bits/stdc++.h>
using namespace std;
int getMissingNo(int a[], int n)
{
    int i, total=1;
    for ( i = 2; i<= (n+1); i++)
    {
        total+=i;
        total -= a[i-2];
    }
    return total;
}
 
//Driver Program
int main() {
    int n;
    cout<<"Enter the size of the array:";cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){cin>>arr[i];}
    cout<<"Missing number is:"<<getMissingNo(arr,n);
    return 0;
}
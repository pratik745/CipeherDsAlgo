#include<bits/stdc++.h>
using namespace std;
 void getallpossibility(int a[],int N,string s[],string str,vector<string> &v,int k)
    {
        if(k==N){v.push_back(str);return ;}
        for(int i=0;i<s[a[k]].size();i++)
        {getallpossibility(a,N,s,str+s[a[k]][i],v,k+1);}
    }
    vector<string> possibleWords(int a[], int N)
    {
        string s[]={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
        vector<string> v;
        getallpossibility(a,N,s,"",v,0);
        return v;
    }
int main()
{
    int n;
    cout<<"Enter the number of phone digits:";cin>>n;
    int a[n];
    cout<<"Enter the phone digits:"<<endl;
    for(int i=0;i<n;i++){cin>>a[i];}
    vector<string> vc;
    vc=possibleWords(a,n);
    for(auto x:vc){cout<<x<<" ";}
}
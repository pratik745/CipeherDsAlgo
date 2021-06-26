#include<bits/stdc++.h>
using namespace std;
 void paranth(int n1,int n2,string str,vector<string> &v)
    {
        if(n1==0 && n2==0){v.push_back(str);return;}
        if(n1==0){paranth(n1,n2-1,str+")",v);return;}
        if(n1==n2){paranth(n1-1,n2,str+"(",v);}
        else
        {
            paranth(n1-1,n2,str+"(",v);
            paranth(n1,n2-1,str+")",v);
        }
    }
int main()
{
    int n;
    cout<<"Enter the the number of brackets:";cin>>n;
    vector<string> v;
    paranth(n,n,"",v);
    for(auto x:v){cout<<x<<endl;}
}
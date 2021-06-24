//Given the arrival times and departure times of trains ,we need to find out the minimun number of platforms required
#include<bits/stdc++.h>
using namespace std;
int platformrequired(vector<int> arrival,vector<int> departure,int n)
{
    sort(arrival.begin(),arrival.end());
    sort(departure.begin(),departure.end());
    int plat=1,res=1;
    int i=1,j=0;
    while(i<n && j<n)
    {
        if(arrival[i]<=departure[j]){plat++;i++;}
        else if(arrival[i]>departure[j]){plat--;j++;}
        if(plat>res){res=plat;}
    }
    return res;

}
int main()
{
    int n;
    cout<<"Enter the total numbers of train:";
    cin>>n;
    vector<int> arrival(n),departure(n);
    for(int i=0;i<n;i++){cin>>arrival[i];}
    for(int i=0;i<n;i++){cin>>departure[i];}
    cout<<"The minimum numbers of platform required is:"<<platformrequired(arrival,departure,n);
    return 0;


}
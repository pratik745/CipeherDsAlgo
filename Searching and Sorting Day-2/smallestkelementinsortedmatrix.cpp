//TO find the k'th smallest element in the given 2D array where rows and columns are sorted
#include<bits/stdc++.h>
using namespace std;
int smallest_k_element_in_sorted_matrix(vector<vector<int>> v,int r,int c,int k)
{
        priority_queue<int,vector<int>,greater<int>> pq;
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
            {
                pq.push(v[i][j]);
            }
        }
        while(k!=1){pq.pop();k--;}
        return pq.top();
        
}
int main()
{
    int r,c;
    cout<<"Enter the rows and column size of the matrix:";
    cin>>r>>c;
    vector<vector<int>> v(r,vector<int>(c));
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            cin>>v[i][j];
        }
    }
    int k;
    cout<<"Enter your K'th number:";
    cin>>k;
    cout<<k<<"'th samallest element is:"<<smallest_k_element_in_sorted_matrix(v,r,c,k);
    return 0;
}
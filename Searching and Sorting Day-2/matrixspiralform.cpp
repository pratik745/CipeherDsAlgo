#include<bits/stdc++.h>
using namespace std;
vector<int> matrixspiralform(vector<vector<int>> arr ,int r, int c)
{
    int top=0,left=0,right=c-1,bottom=r-1;
    vector<int> v;
    while(top<=bottom && left<=right)
    {
        for(int i=left;i<=right;i++){v.push_back(arr[top][i]);}
        top++;
        for(int i=top;i<=bottom;i++){v.push_back(arr[i][right]);}
        right--;
        if(left<=right)
        {
        for(int i=right;i>=left;i--){v.push_back(arr[bottom][i]);}
        bottom--;
        }
        if(top<=bottom)
        {
            for(int i=bottom;i>=top;i--){v.push_back(arr[i][left]);}
            left++;
        }

    }
    return v;
}
int main()
{
    int r,c;
    cout<<"Enter the rows and columns of the matrix:";
    cin>>r>>c;
    vector<vector<int>> arr(r,vector<int>(c));
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            cin>>arr[i][j];
        }
    }
    vector<int> v=matrixspiralform(arr,r,c);
    for(auto x:v){cout<<x<<" ";}
}
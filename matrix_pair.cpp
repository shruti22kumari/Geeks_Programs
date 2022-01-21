#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define n 5
int findMaxValue(int mat[][n])
{
    int max_val=INT_MIN;
    int res[n][n];
    int mx=mat[n-1][n-1];
    res[n-1][n-1]=mat[n-1][n-1];
    for(int i=n-1;i>=0;i--)
    {
        if(mat[n-1][i]>mx)
        {
           mx=mat[n-1][i];
        }
        res[n-1][i]=mx;
    }
    for(int i=n-1;i>=0;i--)
    {
       if(mat[i][n-1]>mx)
        {
           mx=mat[i][n-1];
        }
        res[i][n-1]=mx;
    }
    
    for(int i=n-2;i>=0;i--)
    {
        for(int j=n-2;j>=0;j--)
        {
             if(res[i+1][j+1]-mat[i][j]>max_val)
             {
                 max_val=res[i+1][j+1]-mat[i][j];
             }
             res[i][j]=max(mat[i][j],max(res[i][j+1],res[i+1][j]));
        }
    }
    return max_val;
}
int main()
{
    int mat[n][n] = {
                { 1, 2, -1, -4, -20 },
                { -8, -3, 4, 2, 1 },
                { 3, 8, 6, 1, 3 },
                { -4, -1, 1, 7, -6 },
                { 0, -4, 10, -5, 1 }
            };
    cout << "Maximum Value is "
        << findMaxValue(mat);
 
    return 0;
}
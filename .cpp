#include <bits/stdc++.h> 
bool isMatrixSymmetric(vector<vector<int>> matrix){
    // Write your code here. 
    int s=matrix.size();
    int a[s][s];
    int i,j;
    for(i=0;i<s;i++)
    {
        for(j=0;j<s;j++)
        {
            a[i][j]=matrix[j][i];
        }
    }
    for(i=0;i<s;i++)
    {
        for(j=0;j<s;j++)
        {
            if(a[i][j]!=matrix[i][j])
            return false;
        }
    }
    return true;
}

#include<bits/stdc++.h>
using namespace std;

int main(){
    long long int n,m,i,j,a[100][100],k;
    cin>>n>>m;
    //taking input of n which is row number and m which is column number

    //taking input of array element
    for(i=0;i<n;i++)
    {
       for(j=0;j<m;j++)
       {
           cin>>a[i][j];
       }
    }
    //mirror output
    //k is using here to change the value of j in new matrix form
    //means the last j value is first of new output we name the value K
    //j=m-1 cause we change from last the last was first value
    //j>=0 karon j er value ta j 0 hoya porjonto cholbe .mane m-1 er kaj ta
    //k<m mane holo k er kaj m er agey porjonto cholbe(means m er 4 dile k er value k=0,1,2,3 porjonto jabe index
    //k++ karon k bartese,j-- karon j komtese ekta ekta kore

    long long int inv[n][m];
    for(i=0;i<n;i++){
        for(j=m-1,k=0;j>=0,k<m;k++,j--)
        {
          inv[i][k]=a[i][j];
        }
    }
    for(i=0;i<n;i++)
    {
       for(j=0;j<m;j++)
       {
           cout<<inv[i][j]<<" ";
    }
    cout<<endl;
    }

}

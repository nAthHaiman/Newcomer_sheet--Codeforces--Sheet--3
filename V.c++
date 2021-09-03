#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;

    int a[n],b[m+10]={0};
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
        b[a[i]]++;
    }
    for(int i=1;i<=m;i++)
        cout<<b[i]<<endl;
}

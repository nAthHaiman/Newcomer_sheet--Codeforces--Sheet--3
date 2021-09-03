#include<bits/stdc++.h>
using namespace std;
int main()
{
 int a,b,c1,c2,i=0,flag=0;
 cin>>a>>b;
 int ar1[a],ar2[b];
 for(c1=0;c1<a;c1++)
 {
     cin>>ar1[c1];
 }
for(c2=0;c2<b;c2++)
{
    cin>>ar2[c2];
}
 for(c1=0;c1<a;c1++)
 {
     if(ar1[c1]==ar2[i])
     {
         flag++;
         i++;
     }
 }
 if(flag==b)
 {
     cout<<"YES";
 }
 else
    {
    cout<<"NO";
 }
}

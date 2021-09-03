#include<iostream>
using namespace std;
int main()
{
int n,i,lowest,p=0;
cin>>n;
int a[n];
for (i=1;i<=n;i++)
cin>>a[i];
//finding the lowestv element of the array
lowest=a[1];
for (i=2;i<=n;i++)
{
if(a[i]<lowest)
lowest=a[i];
}
//finding the lowest elements frequency or value
for (i=1;i<=n;i++)
{
if(lowest==a[i])
p++;
}
//finding the array is lucky or not
if(p%2!=0)
{
cout<<"Lucky";
}
else
cout<<"Unlucky";
}

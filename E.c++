#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,S,pos= 1;
    cin>>n;
    int a[n];
    for(int i=1;i<=n;i++){
        cin >>a[i];}
    S=a[1];
    for(int i=1;i<=n;i++){
        if(a[i]<S){
            S = a[i];
            pos=i;
        }
    }
    cout<<S<<" "<< pos;
    return 0;
}

#include <iostream>
using namespace std;
int main()
{
    int n,i,value,pos=0;
    cin>>n;
    int num[n];
    for(i=0;i<n;i++)
    {
        cin>>num[i];
    }
    cin>>value;
    for(i=0;i<n;i++)
    {
        if(num[i]==value)
        {
            pos=1;
            break;
        }
    }
    if(pos==1)
    {
     cout<<i;   
    }
    else 
    cout<<"-1";
    
    return 0;
}

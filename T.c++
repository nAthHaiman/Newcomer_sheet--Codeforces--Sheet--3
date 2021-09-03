#include<bits/stdc++.h>
using namespace std;
int main()
{
    //f_sum=first sum and s_sum=second diagonal sum
   int n,i,j,f_sum=0,s_sum=0,diff;
    cin>>n;
    int a[100][100],k=n-1;

    //taking array input
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            cin>>a[i][j];
        }
    }
//calculating the first diagonals sum when i=0;
for(i=0;i<n;i++)
{
    j=i;
    f_sum=f_sum + a[i][j];
}

//calculating the 2nd  diagonals sum when j's value is decreasing one by one in row
for(i=0;i<n;i++){
    s_sum=s_sum+a[i][k--];
}
//absolute difference
diff = f_sum - s_sum;
if(diff<0)
    cout<<""<<abs(diff);
else
    cout<<""<<diff;

}



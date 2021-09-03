#include<iostream>
using namespace std;
int main()
{
    int a,temp,result;
    cin>>a;
    for(int i=0;i<a;i++){
        bool for_testing=true;
        long long int b;
        cin>>b;
        int c[b];
        for(int i=0;i<b;i++){
            cin>>c[i];
        }
        for(int i=0;i<b;i++){
            for(int j=i+1;j<b;j++){
                temp=(c[i]+c[j]+(j+1)-(i+1));
                if(for_testing==true){
                    result=temp;
                    for_testing=false;
                }
                if(temp<result){
                    result=temp;
                }
            }
        }
        cout<<result<<endl;
    }
    return 0;
}

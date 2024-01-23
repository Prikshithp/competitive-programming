#include <iostream>

using namespace std;

int main()
{
    int t,count=0;
    cin>>t;
    while(t--){
        int a,b,c;
        cin>>a>>b>>c;
        int sum=a+b+c;
        if(sum>=2){
            count++;
        }  
      
    }
cout<<count<<endl;
}

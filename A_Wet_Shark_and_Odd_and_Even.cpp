#include<bits/stdc++.h>
using namespace std;

int main(){
     vector<int>data;
    long long int sum=0;
    long long dummy;
     int t;
     cin>>t;

     for(int i=0;i<t;i++){
        int x;
        cin>>x;
        sum+=x;
        data.push_back(x);
     }

    if(sum%2==0){
        cout<<sum<<endl;
    }
    else{
        sort(data.begin(),data.end());
        for(int i=0;i<t;i++){
            if(data[i]%2==1){
                dummy=data[i];
                break;
            }
        }

        sum=sum-dummy;
        cout<<sum<<endl;

    }
     
     
    return 0;

}
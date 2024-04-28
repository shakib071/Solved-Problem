#include<bits/stdc++.h>
using namespace std;
int sum_digits(int n){
    int sum=0;
    while(n!=0){
     sum=sum+(n%10);
     n=n/10;
    }
   return sum;
}

int sum_String(string n,int ln){
    int sum=0;
    for(int i=0;i<ln;i++){
        int temp=n[i]-'0';
        sum=sum+temp;
    }
    return sum;
}

int main(){
     
     int count=0;
     string n;
     cin>>n;
    if(n.length()>1){
       count++;
       int sum=sum_String(n,n.length());
        while(sum>9){
       
        count++;
        sum=sum_digits(sum);
        
      }
       
     cout<<count<<endl;
    }
    else{
        cout<<count<<endl;
    }
    
     
    return 0;

}
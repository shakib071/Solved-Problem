#include<bits/stdc++.h>
using namespace std;

//Ans Will be prodduct of
//(10-n)C2 and 4C2 because 
//1st one is unique combination and second one
//is (nijeder moddhe combination)
//nijeder moddhe j position change korbe seta
//ekhane 4 ta digit ar tar 2ta unique
//tai 4c2 shobsomoy hbe 
//4C2=6 ..bar bar hisab korar dorkar nai

int factorial(int n){
    int ans=1;
    if(n==1)return ans;
  for(int i=2;i<=n;i++){
    ans*=i;
  }
  return ans;
}

int main(){
     
     int t,n;
     cin>>t;
     while(t--){
      cin>>n;
      int data[n];
      for(int i=0;i<n;i++){
      cin>>data[i];
      }
      int ans=(factorial(10-n)/(factorial(2)*factorial(10-n-2)))*6;
      cout<<ans<<endl;
     }
      
     
    return 0;

}
#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
     
 ios::sync_with_stdio(0);cin.tie(0);

   int n;
   cin>>n;
   int oddcount=0,evencount=0,lastodd,lasteven;  

   for(int i=0;i<n;i++){
    int x;
    cin>>x;
    if(x%2==0){
 evencount++;
 lasteven=i;
    }
    else {
        oddcount++;
        lastodd=i;
    }
   }

   if(oddcount==1){
    cout<<lastodd+1<<endl;
}
else {
    cout<<lasteven+1<<endl;
}
     
    return 0;

}
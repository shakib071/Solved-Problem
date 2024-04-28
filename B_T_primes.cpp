#include<bits/stdc++.h>
using namespace std;

//yarins Seive  

void func (vector<long long int> &ans){
    ans.push_back(4);
    long long int i,j;
    bool prime[1000001]={false};
      for( i=3;i<1000001; i=i+2){
        if(prime[i]==0){
            long long int sk=i*i;
            ans.push_back(sk);
            for( j=i*i;j<1000001;j+=i){
                prime[j]=1;
            }
        }
    }

}

int main(){
     vector<long long int>ans;
      func(ans);
     long long int n,d;
      cin>>n;
   
      while(n--){
        int flag=0;
       cin>>d;
       long long int t=sqrt(d);
       if(t*t!=d){
        cout<<"NO"<<endl;
        continue;
       }

       int lb=0,up=ans.size()-1;

       while(lb<=up){
        int mid=(up+lb)/2;
        if(ans[mid]==d){
          flag=1;
          cout<<"YES"<<endl;
          break;
        }
        else if(ans[mid]<d){
          lb=mid+1;
        }
        else up=mid-1;
       }

       if(flag==0) cout<<"NO"<<endl;


    // if(d<=1000000){
    //    int i=0;
    //     while(1){
    //      if(ans[i]==d){
    //         cout<<"YES"<<endl;
    //         break;
    //      }
    //      else if(ans[i]>d){
    //         cout<<"NO"<<endl;
    //         break;
    //      }
    //      else if(i==ans.size()) {
    //        cout<<"NO"<<endl;
    //         break;
    //      }
    //      i++;
    //     }

    //   }

    //   else {
    //    int i=ans.size()-1;
    //       while(1){
    //      if(ans[i]==d){
    //         cout<<"YES"<<endl;
    //         break;
    //      }
    //      else if(ans[i]<d){
    //         cout<<"NO"<<endl;
    //         break;
    //      }
    //      else if(i==0) {
    //        cout<<"NO"<<endl;
    //         break;
    //      }
    //      i--;
    //     }
    //   }
      }


    return 0;

}
#include<bits/stdc++.h>
#include<bitset>
using namespace std;

void solve(){
    int n;
    cin>>n;
    map<int,int>mp;

    int ans=0;

    for(int i=0,x;i<n;i++){
        cin>>x;
        if(!mp[x]){
            //jodi map a na thake mane ota 1 ta group a por
            //ans++ korlam
            //ar x er binary inverse ta map a rakkhlam
            //future a binary inverse ele 
            //ota else option a giye minus kore dilam
            // karon ekta group a pair ba 2 ta thakte pare
            //evabe highet 2 ta 2 ta kore pair nilam

            ans++;
            mp[((1<<31)-1)^x]++;
            // 1 << 31: This shifts the binary representation of 1 to the left by 31 positions. In binary, it becomes 10000000000000000000000000000000.
            //Subtracting 1 from this value results in all 31 bits being set to 1: 1111111111111111111111111111111.
            //then xor x give binary inverse of x
            //and we count it in map

        }
        else{
            mp[x]--;
            //jodi map a thake mane er binary inverse agei
            //paici tai ei x oi group ay thakbe 
            //tai er count -- kore dilam jate 
            //future a ei value asle abar use kora jay
            //karon future a same valu asleoo ota onno
            //kno value er shathe pair korte pare
            //tai map the -- kore ber kore dilam
            // 1 er besi value hote pare na
            //tai 2 bar -- korer kordar nai
            //mane 0 korar dorkar nai
        }

    }
    cout<<ans<<endl;
}

int main(){
     
     int t;
     cin>>t;
     while(t--){
       solve();
     }
     
    return 0;

}
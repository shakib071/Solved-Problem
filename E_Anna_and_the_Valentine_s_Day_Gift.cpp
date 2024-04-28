#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
     
 ios::sync_with_stdio(0);cin.tie(0);
     int t;
     cin>>t;

     while(t--){
        int n,m;
        cin>>n>>m;
        vector<int>v(n);//last er zero count korbo
        //mane 10 diye kotokkon vag jay;
        int digitsum=0;
        for(int i=0,x;i<n;i++){
            cin>>x;
            int c=0;//10 diya vag er ta count 
            //mane last a zero gula
            //khatay acea dekhte paris
            bool last=true;//last thke zero nebo
            //jate ultale choto hoye jay
            //jetar posibility besi thake anar

            while(x){
                if(x%10==0 && last==true){
                    c++;
                }
                else {
                    last=false;
                }
                digitsum++;
                x=x/10;
            }
            v[i]=c;
        }
        sort(v.begin(),v.end(),greater<int>());
        for (int i=0;i<n;i=i+2){
            //ana number choto korbe
            //shaha digit komate parbe na
            // ana 1 bar por por chance pabe
            //tokhon sujog thakle se komabe
            //tai 2 ghor por por last a zero paile
            //sei num er digit komate parbe na thakle parbe na
            digitsum-=v[i];
        }
        // cout<<digitsum<<endl;
        if((m+1)<=digitsum) cout<<"Sasha"<<endl;
        else  cout<<"Anna"<<endl;
     }
     
    return 0;

}
#include<iostream>

using namespace std;

int fibb_seq_count(int n,int k){
  int second,first,shakib,t,i,j;
  int ans=0;
  
    for( i=1;i<=n;i++){
         second=n;
         first=i;
          shakib=1;
       
        for( j=0;j<k-2;j++){
           
             t=first;
           first=second-t;
           second=t;

             if((second<first)|| (second<0 || first<0)){
                shakib=0;
                break;
            }
           
        }

       if(shakib==1)ans++;


    }


    return ans;
}

int main(){
    
    int n,k,t;
    cin>>t;
    for(int i=1;i<=t;i++){
        cin>>n>>k;
    cout<< fibb_seq_count(n,k)<<endl;
    }
    return 0;

}

/*ekhane amra 2nd last fibonacci number khujbo tarpor fibonnacii er sutro use korbo
jodi hoy valo noile break 
jemon 22 4 er khetre 22-14=8 and 14-8=6 ekhane 22 14 8 6 relatively fibonacci
evabe 2nd last khyjbo tarpor aste aste f(k)=f(k-1)-f(k-2) 
abar 22-11=11 and 11-11=0
22-12=10 12-10=2
22-13=9 and 13-9=0
kintu 22-5=17 and 5-17=-man mane fibonacci hocche na


mane 1st a 2nd relative fibonacci khujbo tarpor jotogula fibonacci sequence test case a acea totogula hoy kina dekho..
hole count++ na hole abar try */
//using stack

//na bujle abar video dekh  

#include<bits/stdc++.h>
using namespace std;

vector<int> NGE(vector<int>v){

    vector<int>nge(v.size());
    stack<int>st;

    for(int i=0;i<v.size();i++){
      while(!st.empty() && v[i]>v[st.top()]){//stcak index er ..tai
        //index niye deal korci..value diye na
        nge[st.top()]=i;
        st.pop();
        }
     st.push(i);
    }
    while(!st.empty()){
        nge[st.top()]=-1;
        st.pop();
    }
    return nge;
}
//-1 value ta kno jani asche na
//abar check 
//valo lagche na ekhon
 
int main(){
     
     int n;
     cin>>n;

     vector<int>v(n);

     for(int i=0;i<n;i++){
        cin>>v[i];
     }

     vector<int> nge=NGE(v);
     
     for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
        if(v[nge[i]]==-1){
           cout<<"-1"<<endl;
        } 
       else  cout<<v[nge[i]]<<endl;
     }

     
    return 0;

}
#include<bits/stdc++.h>
using namespace std;

int main(){
     
   string s;
   getline(cin,s);

   stringstream ss(s);
   stringstream ss1(s);
   string word,c;
   int count=0,cc=0;

   while(ss1>>c){
    cc++;
   }
//    cout<<cc<<endl;

   while(ss >> word){
    count++;
    for(int i=word.size()-1;i>=0;i--){
        cout<<word[i];
    }
    if(count!=cc)cout<<" ";
   }  
     
    return 0;

}
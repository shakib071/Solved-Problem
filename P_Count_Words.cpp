// #include<bits/stdc++.h>
// using namespace std;
// //thik acea lintu codeforse stringstream byjhe na

// //thik acea etaoo

// int main(){
     
//      string s;
//      getline(cin,s);
//     //  cout<<s<<endl;
     
//      stringstream ss(s);
//      string word;
//     int count=0,flag;
//      while(ss >> word){
//         flag=0;
//         for(int i=0;i<word.size();i++){
//             if((word[i]>='a'&&word[i]<='z')||(word[i]>='A'&&word[i]<='Z')){
//                 flag=1;
//                 break;
//             }
            
//         }
       
//        if(flag==1) count++;
        
//      }
//      cout<<count<<endl;

//     return 0;

// }

#include<bits/stdc++.h>
using namespace std;

int main(){
     
    string s;
     getline(cin,s);
  
    bool inside_word=false;
    int count=0;

    for(char c:s){
        if(isalpha(c)){
            if(inside_word==false) count++;
          inside_word=true;
        }
        else{
            inside_word=false;
        }

    }
    cout<<count<<endl;
     
     
    return 0;

}
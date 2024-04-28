#include<bits/stdc++.h>
using namespace std;

class student{
    public:

   string nm;
   int cls;
   char s;
   int id;

};

int main(){
     
     int n;
     cin>>n;
     student a[n];

     for(int i=0;i<n;i++){
        cin>>a[i].nm>>a[i].cls>>a[i].s>>a[i].id;
     }
     int j=n-1;
     for(int i=0;i<n;i++){
        if(i>j)break;
        swap(a[i].s,a[j].s);
        j--;
        
     }
      for(int i=0;i<n;i++){
        cout<<a[i].nm<<" "<<a[i].cls<<" "<<a[i].s<<" "<<a[i].id<<endl;
        
     }
     
    return 0;

}
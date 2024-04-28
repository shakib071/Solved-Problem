#include<bits/stdc++.h>
using namespace std;

class student{
   
   public:
   string name;
   int roll;
   int marks;

   student(string n,int r,int m){
    name=n;
    roll=r;
    marks=m;
   }
};

class cmp{
    public:

    bool operator()(student a,student b){
        if(a.marks<b.marks) return true;
        else if(a.marks>b.marks) return false;
        else{
            if(a.roll<b.roll) return false;
            else return true;
        }
    }
};

int main(){
     
     priority_queue<student,vector<student>,cmp>pq;
     
     int n;
     cin>>n;
     for(int i=1;i<=n;i++){
        string name;
        int roll,marks;
        cin>>name>>roll>>marks;
        student obj(name,roll,marks);
        pq.push(obj);
     }

    //  while(!pq.empty()){
    //     cout<<pq.top().name<<" "<<pq.top().roll<<" "<<pq.top().marks<<endl;
    //     pq.pop();
    //  }

    int q;
    cin>>q;
    while(q--){
        int x;
        cin>>x;
        if(x==0){
         string name;
         int roll,marks;
         cin>>name>>roll>>marks;
         student obj(name,roll,marks);
         pq.push(obj);

         if(!pq.empty()){
            cout<<pq.top().name<<" "<<pq.top().roll<<" "<<pq.top().marks<<endl;
         }
         else {
            cout<<"Empty"<<endl;
         }
        }

        else if(x==1){
           if(!pq.empty()){
            cout<<pq.top().name<<" "<<pq.top().roll<<" "<<pq.top().marks<<endl;
         }
         else {
            cout<<"Empty"<<endl;
         }
        }
        
        else if(x==2){
          if(!pq.empty()) pq.pop();
           if(!pq.empty()){
            cout<<pq.top().name<<" "<<pq.top().roll<<" "<<pq.top().marks<<endl;
           }
          else {
            cout<<"Empty"<<endl;
           }
        }

    }
     
    return 0;

}
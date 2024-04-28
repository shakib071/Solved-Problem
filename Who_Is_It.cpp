#include<bits/stdc++.h>
using namespace std;

class Student{
    public:
   int ID;
   char Name[101];
   char Section;
   int total_Mark;

   Student(int id,char name[],char sec,int tm){
    ID=id;
    strcpy(Name,name);
    Section=sec;
    total_Mark=tm;
   }

};

int main(){
     int T,ID,Total_mark;
     char name[101],section;
     cin>>T;

     while(T--){
     
         cin>>ID;
         getchar();
         cin>>name;
         cin>>section;
         cin>>Total_mark;
         Student *sakib=new Student(ID,name,section,Total_mark);
       
       cin>>ID;
         getchar();
         cin>>name;
         cin>>section;
         cin>>Total_mark;
         Student *rakib=new Student(ID,name,section,Total_mark);
       
         
         cin>>ID;
         getchar();
         cin>>name;
         cin>>section;
         cin>>Total_mark;
         Student *akib=new Student(ID,name,section,Total_mark);
        

        if((sakib->total_Mark>rakib->total_Mark) && (sakib->total_Mark>akib->total_Mark)){
            cout<<sakib->ID<<" "<<sakib->Name<<" "<<sakib->Section<<" "<<sakib->total_Mark<<endl;
        }
        else if((rakib->total_Mark>sakib->total_Mark) && (rakib->total_Mark>akib->total_Mark)){
            cout<<rakib->ID<<" "<<rakib->Name<<" "<<rakib->Section<<" "<<rakib->total_Mark<<endl;
        }
         else if((akib->total_Mark>sakib->total_Mark) && (akib->total_Mark>rakib->total_Mark)){
            cout<<akib->ID<<" "<<akib->Name<<" "<<akib->Section<<" "<<akib->total_Mark<<endl;
        }
        else{
            if(sakib->total_Mark==rakib->total_Mark){
                if(sakib->ID<rakib->ID){
                      cout<<sakib->ID<<" "<<sakib->Name<<" "<<sakib->Section<<" "<<sakib->total_Mark<<endl;
                }
                else{
                     cout<<rakib->ID<<" "<<rakib->Name<<" "<<rakib->Section<<" "<<rakib->total_Mark<<endl;
                }
            }
            else if(sakib->total_Mark==akib->total_Mark){
                if(sakib->ID<akib->ID){
                     cout<<sakib->ID<<" "<<sakib->Name<<" "<<sakib->Section<<" "<<sakib->total_Mark<<endl; 
                }
                else{
                    cout<<akib->ID<<" "<<akib->Name<<" "<<akib->Section<<" "<<akib->total_Mark<<endl;

                }
            }
             else if(akib->total_Mark==rakib->total_Mark){
                if(rakib->ID<akib->ID){
                     cout<<rakib->ID<<" "<<rakib->Name<<" "<<rakib->Section<<" "<<rakib->total_Mark<<endl; 
                }
                else{
                    cout<<akib->ID<<" "<<akib->Name<<" "<<akib->Section<<" "<<akib->total_Mark<<endl;

                }
            }
        }
      
     }
     
     
    return 0;

}
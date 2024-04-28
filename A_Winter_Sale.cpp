#include<iostream>
#include<iomanip>
using namespace std;

int main(){
     
     float x,p;
     cin>>x>>p;

     float price=(100/(100-x))*p;
     cout<<fixed<<setprecision(2)<<price<<endl;
     
    return 0;

}
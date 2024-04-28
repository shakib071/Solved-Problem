#include<iostream>
using namespace std;

long long int row(long long int n){
    long long row=n/4;

return row;

}
long long int coulmb(long long n){
    if(row(n)%2==0){
    long long int co=n-(row(n)*4);
        return co;
    }
    else{
      long long int p=n-(row(n)*4);
      long long int co=3-p;
       return co;
    }
}

int main(){
     
     long long int x;
    cin>>x;

     cout<<row(x)<<" "<<coulmb(x)<<endl;
     
    return 0;

}
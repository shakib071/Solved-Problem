#include<iostream>
using namespace std;

void max_Min(int arr[],int n){
    int min=arr[0];
    int max=arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]<min){
            min=arr[i];
        }
        if(arr[i]>max){
            max=arr[i];
        }
    }
    cout<<min<<" "<<max<<endl;
}

int main(){
     
     int n,i;
     cin>>n;
    int arr[n];
     for(i=0;i<n;i++){
        cin>>arr[i];
     }

     max_Min(arr,n);


     
    return 0;

}
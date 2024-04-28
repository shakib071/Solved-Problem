#include<iostream>
using namespace std;

void sort(int arr[]){
   int a=arr[0],b=arr[1],c=arr[2];

    for(int i=0;i<2;i++){
        for(int j=i+1;j<3;j++){
            if(arr[i]>arr[j]){
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    for(int i=0;i<3;i++){
        cout<<arr[i]<<endl;
    }
    cout<<endl;
    cout<<a<<endl<<b<<endl<<c<<endl;
}

int main(){
     
     int arr[3];
     for(int i=0;i<3;i++){
        cin>>arr[i];
     }
     
     sort(arr);
     
    return 0;

}
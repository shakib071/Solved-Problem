#include<bits/stdc++.h>
using namespace std;

bool linearSearch(int data[],int n,int item) {

    for(int i=0;i<n;i++){
        if(data[i]==item){
            return true;
        }
    }
    return false;
}

void bubbleSort(int data[],int n){
    //   for(int i=0;i<n;i++){
    //     cout<<data[i]<<" ";
    // }
    cout<<endl;
     
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
           if(data[j]>data[j+1]){
           int temp=data[j];
           data[j]=data[j+1];
           data[j+1]=temp;
           } 
        }
        // for(int k=0;k<n;k++){
        // cout<<data[k]<<" ";
        //only print;
    //   }
    cout<<endl;
    }
}

bool BinarySearch(int data[],int n,int item){
    
    bubbleSort(data,n);

    int lb=0,up=n-1;
    while(lb<=up){
      int  mid=(lb+up)/2;
      if(data[mid]==item){
        return true;
      }
      else if(data[mid]<item) lb=mid+1;
       else up=mid-1;
    }

    return false;

}

void SelectionSort(int data[],int n){
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
         if(data[i]>data[j]){
            int temp=data[i];
            data[i]=data[j];
            data[j]=temp;
         }
        }
    //        for(int k=0;k<n;k++){
    //     cout<<data[k]<<" ";
    //    }
    //print
       cout<<endl;
    }
}

void insertionSort(int data[],int n){
    for(int i=0;i<n;i++){
     int  j=i-1,temp=data[i];

         while(j>=0 and data[j]>temp){
            data[j+1]=data[j];
            j--;
         }
         data[j+1]=temp;
    //             for(int k=0;k<n;k++){
    //     cout<<data[k]<<" ";
    //    }
    //    cout<<endl;
    //print
    }
    
}

void insert(int data[],int n,int val,int pos){
    for(int i=n-1;i>=pos;i--){
        data[i+1]=data[i];
    }
    data[pos]=val;

    //        for(int k=0;k<n+1;k++){
    //     cout<<data[k]<<" ";
    //    }
}

void deletion(int data[],int n,int pos){
    for(int i=pos;i<n-1;i++){
        data[i]=data[i+1];
    }
//            for(int k=0;k<n-1;k++){
//         cout<<data[k]<<" ";
//        }
// print
}

int main(){

    int data[100]={50,40,30,20,10} ;

    // bubbleSort(data,5);
    // cout<<linearSearch(data,5,5);
    //   cout<<BinarySearch(data,5,10);
    //  SelectionSort(data,5);
    // insertionSort(data,5);
    // insert(data,5,100,3);

    // deletion(data,5,3);
    return 0;

}
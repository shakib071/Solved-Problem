// #include<bits/stdc++.h>
// #define ll long long int
// using namespace std;

// const int N=1e3+5;


// int dp[1005][2000];

// bool knapsack(int n,int data[],int w){
//      if(w==0) return true;
//      if(n<0) return false;
//     // if(n<0){
//     //     if(w==0) return true;
//     //     else return false;
//     // }
   
//    if(dp[n][w]!=-1) return dp[n][w];

   
//    if(w>=data[n]){
//       bool op1=knapsack(n-1,data,w-data[n]);
//       bool op2=knapsack(n-1,data,w);
//       return dp[n][w]= op1 || op2;
//    }
//    else{
//         bool op2=knapsack(n-1,data,w);
//         return dp[n][w]= op2;
//    }
// }

// int main(){
     
//    int t;
//    cin>>t;

//    while(t--){
//     int n;
//     cin>>n;
//     int data[n];
//     int sum=0;
//     for(int i=0;i<n;i++){
//         cin>>data[i];
//         sum+=data[i];
//     }

    

//     if(sum%2==0 ){
//         for(int i=0;i<=n;i++){
//         for(int j=0;j<=(sum/2);j++){
//             dp[i][j]=-1;
//         }
//         }
//       if(knapsack(n-1,data,sum/2)) cout<<"YES"<<endl;
//       else cout<<"NO"<<endl;
//     }
//     else {
//         cout<<"NO"<<endl;
//     }

//    }
     
     
//     return 0;

// }

#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
     
 int t;
 cin>>t;
 while(t--){
 int n;
    cin >> n;
    int s = 0;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        s += a[i];
    }
    if (s % 2 == 0)
    {
        int sum = s / 2;
        bool dp[n + 1][sum + 1];
        dp[0][0] = true;
        for (int i = 1; i <= sum; i++)
            dp[0][i] = false;
        for (int i = 1; i <= n; i++)
        {
            for (int j = 0; j <= sum; j++)
            {
                if (a[i - 1] <= j)
                {
                    dp[i][j] = dp[i - 1][j - a[i - 1]] || dp[i - 1][j];
                }
                else
                {
                    dp[i][j] = dp[i - 1][j];
                }
            }
        }
        if (dp[n][sum])
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
 }
     
     
    return 0;

}
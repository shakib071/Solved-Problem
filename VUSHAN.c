// #include<stdio.h>


// int sum(int a,int b,int c){
//   return a+b+c;
// }
  


// int main(){
    
//    int a,b,c;

//    scanf("%d %d %d",&a,&b,&c);
// //    printf("A is %d.B is %d. C is  %d.\n",a,b,c);
// //   sum=a+b+c;
// //   printf("%d",sum);
// // printf("%d",sum(a,b,c));

// //    scanf("%d",&a);
// //     scanf("%d",&b);
// //      scanf("%d",&c);
// //    printf("%d\n",a);
// //       printf("%d\n",b);
// //          printf("%d\n",c);
     
//     return 0;
// }

// #include<stdio.h>
// int main(){
    
//     float f,c;
//     scanf("%f",&c);
//     f=((9*c)/5)+32;
//     printf("%f",f);
   
     
//     return 0;
// }


// #include<stdio.h>
// int main(){
    
//    int x;
//    scanf("%d",&x);

//    int flag=1;

//    for(int i=2;i<=x/2;i=i+1){
//         if(x%i==0){
//           flag=0;
//           break;
//         }
//    }
//    if(flag==1){
//     printf("%d is Prime",x);
//    }
//    else {
//     printf("%d is not Prime",x);
//    }
     
//     return 0;
// }

// #include<stdio.h>
// int main(){
    
//    int sum,n;
//    sum=0;
//    printf("Enter your last number :\n");
//    scanf("%d",&n);

//    for(int i=3;i<=n;i=i+3){
//      sum=sum+i;

//    }
//    printf("Your sum is %d",sum);
     
//     return 0;
// }


// 5,10

// #include<bits/stdc++.h>
// using namespace std;

// int gcd(long long int x,long long int y){
//     if(y==0) return x;
//     return gcd(y,x%y);
// }

// int main(){
     
//      int a=100000,b=1000;
//      cout<<gcd(a,b);
     
//     return 0;

// }

// #include<stdio.h>
// int main(){
    
//    int n;
//    long long int prod;
//    prod=1;
//    printf("Enter your last number :\n");
//    scanf("%d",&n);

//    for(int i=3;i<=n;i=i+1){
//      prod=prod*i;

//    }
//    printf("Your prod is %lld",prod);
     
//     return 0;
// }

// #include<stdio.h>
// int main(){
    
//    char x;



//    scanf("%c",&x);

//    if(x>='a' && x<='z'){
//     printf("%c is a small letter \n",x);
//    }
//    else if(x>='A' && x<='Z'){
//     printf("%c is a capital letter \n",x);
//    }
//    else if(x>='0' && x<='9'){
//     printf("%c is a digit \n",x);
//    }
//      else{
//     printf("%c is a special carecter \n",x);
//     }

 
//     return 0;
// }
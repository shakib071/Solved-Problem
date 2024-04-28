#include<stdio.h>
#include<string.h>

int is_palindrome(char array[],int n){
   int j=n-1;
    for(int i=0;i<n/2;i++){
       
            if(i==j){
                return 1;
            }
            else if(array[i] != array[j]){
                return -1;
                break;
        
        }
        j--;
    }
    return 1;
}

int main(){
    
   char array[1001];
   scanf("%s",array);

   int n=strlen(array);
 
   if(is_palindrome(array,n)==-1){
    printf("Not Palindrome\n");
   }
   else{
    printf("Palindrome\n");
   }
     
    return 0;
}
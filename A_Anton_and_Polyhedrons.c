#include<stdio.h>
#include<string.h>
int main(){
    
   int i,count=0,n;
   scanf("%d",&n);

   char data[20];
   char data1[]="Tetrahedron\0";
   char data2[]="Cube\0",data3[]="Octahedron\0";
   char data4[]="Dodecahedron\0",data5[]="Icosahedron\0";

   for(i=1;i<=n;i++){
    scanf("%s",data);
    if(strcmp(data,data1)==0){
        count=count+4;
    }
    else  if(strcmp(data,data2)==0){
        count=count+6;
    }
    else  if(strcmp(data,data3)==0){
        count=count+8;
    }
    else  if(strcmp(data,data4)==0){
        count=count+12;
    }
    else  if(strcmp(data,data5)==0){
        count=count+20;
    }
  
   }

    printf("%d",count);

    return 0;
}
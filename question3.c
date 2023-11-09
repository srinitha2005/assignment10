#include<stdio.h>
#include<string.h>
int main(){
typedef struct name{
    char n[30];
    int marks[5];
}name;

name arr[30];
 char s[30];
printf("enter student name\n");
scanf("%s",&s);
     strcpy(arr[30].n,s);

name a[5];
     int sum=0;
     printf("enter marks of five subjects\n");
     for(int i=0;i<5;i++)
     {
        scanf("%d",&a[i].marks[i]);
         sum=sum+a[i].marks[i];
     }
 
     float avg=sum/5.0;

     printf("total marks=%d \n",sum);
     printf("average=%f \n",avg);

     return 0;
}








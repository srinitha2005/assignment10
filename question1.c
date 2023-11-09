#include<stdio.h>
#include<string.h>
int main(){
typedef struct data{
    char name[50];
    int age,roll;
}data;

data arr[5];
for(int i=0;i<5;i++){
    char s[50];
printf("enter student %d name\n",i+1);
scanf("%s",&s);
     strcpy(arr[i].name,s);
    printf("enter age: \n");
    scanf("%d",&arr[i].age);
     printf("enter roll number: \n");
    scanf("%d",&arr[i].roll); 
}
printf("the name of student 2 is: %s\n",arr[1].name);
printf("the roll number of student 2 is: %d\n",arr[1].roll);
printf("the age of student 2 is: %d\n",arr[1].roll);

 return 0;
}

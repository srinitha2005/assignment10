#include<stdio.h>
int main(){
    typedef struct time{
        int hour,min,sec;
    }time;

    time start;
    printf("enter start time in hour,min and second:\n");
    scanf("%d %d %d",&start.hour,&start.min,&start.sec);
     
     time end;
    printf("enter end time in hour,min and second:\n");
    scanf("%d %d %d",&end.hour,&end.min,&end.sec);

    int a=end.hour-start.hour;
    int b=end.min-start.min;
    int c=end.sec-start.sec;
    printf("time difference = %dhour %dminutes %dsecond",a,b,c);

    return 0;
}
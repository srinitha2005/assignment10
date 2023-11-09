#include<stdio.h>
#include<string.h>
struct data
{
    int reg;
    char name[50];
    char branch[100];
    float CGPA;
};
void lsearch(struct data std[], int s){
    for (int i = 0; i < 10; i++)
    {
        if (std[i].reg==s)
        {
            printf("The data of student of reg no. %d is:-",s);
            printf("\nName-%s\nBranch-%s\nCGPA-%.2f",std[i].name,std[i].branch,std[i].CGPA);
        return;
        }
    }
        printf("No stdent of this regestration number found!!!");
}
void sort(struct data std[]){
    struct data temp;
    for (int i = 0; i < (10-1); i++)
    {
        for (int j = 0; j < (10-i-1); j++)
        {
            if (std[j].reg>std[j+1].reg)
            {
                temp=std[j];
                std[j]=std[j+1];
                std[j+1]=temp;
            }
        }
    }
    return;
}
int main(){
    struct data std[10];
    printf("Enter the record:-\n");
    for (int i = 0; i < 10; i++)
    {
        printf("Enter registration number of %d student: ",i+1); 
        scanf("%d",&std[i].reg);
        printf("Enter his/her name: ");
        getchar();
        gets(std[i].name);
        printf("Enter his/her branch: ");
        gets(std[i].branch);
        printf("Enter his/her CGPA: ");
        scanf("%f",&std[i].CGPA);
    }
    int s;
    printf("\nEnter the registration number you want to find: ");
    scanf("%d",&s);
    lsearch(std,s);
    sort(std);                 
}
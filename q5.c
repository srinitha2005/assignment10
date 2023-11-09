#include <stdio.h>
#include <string.h>


struct Customer {
    char name[50];
    int accountNumber;
    float balance;
};


void more(struct Customer customers[], int n) {
    for (int i = 0; i < n; i++) 
    {
        if (customers[i].balance > 50000) 
        {
            printf("Name: %s\n", customers[i].name);
        }
    }
}


void add(struct Customer customers[], int n) {
    for (int i = 0; i < n; i++) 
    {
        if (customers[i].balance > 10000) 
        {
            customers[i].balance += 1000;
            printf("New Balance for %s: Rs. %.2f\n", customers[i].name, customers[i].balance);
        }
    }
}

void withdrawAmount(struct Customer customers[], int size, int acno, float amount) {
    for (int i = 0; i < size; i++) 
    {
        if (customers[i].accountNumber == acno) 
        {
            if (customers[i].balance >= amount) 
            {
                customers[i].balance -= amount;
                printf("Rs. %.2f withdrawn from %s's account.\nNew balance: Rs. %.2f\n", amount, customers[i].name, customers[i].balance);
            } 
            else {
                printf("Insufficient balance for withdrawal.\n");
            }
            return;
        }
    }
    printf("Account not found.\n");
}

int main() {
    struct Customer customers[15];
    printf("Enter the record:-\n");
    for (int i = 0; i < 15; i++)
    {
        printf("Enter the name of customer %d: ",i+1);
        getchar();
        gets(customers[i].name);
        printf("Enter his/her account number: ");
        scanf("%d",&customers[i].accountNumber);
        printf("Enter his/her balance: ");
        scanf("%f",&customers[i].balance);
    }
    
    printf("Customers with balance more than Rs. 50000:\n");
    more(customers, 15);

    add(customers, 15);

    int a;
    float w;
    printf("Enter account number from which you want to withdraw: ");
    scanf("%d",&a);
    printf("Enter the amount to withdraw: ");
    scanf("%f",&w);
    withdrawAmount(customers, 15, a, w);
    return 0;
}
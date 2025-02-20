#include <stdio.h>

struct userData
{
    char Name[100];
    int Age;
    int Salary;
    int savingsTarget;
};

struct BankData
{
    char bankName[100];
    int backBalance;

};



int main(){
    struct userData user = {"", 0};
    if (user.Name == NULL)
    {
        printf("Welcome %s \n", user.Name);
    }
    else
    {
        printf("\n\n\033[1;36m Welcome To Your Personal Finance Management System\033[0m\n");
        printf(" Please Tell me Your Name: ");
        scanf("%s",user.Name);

    }
    
    return 0;
}
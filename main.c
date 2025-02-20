#include <stdio.h>

struct userData
{
    char Name[100];
    int Age;
    int Salary;
    int backBalance;
};

int main()
{
    struct userData user = {"", 0, 0, 0};
    FILE *file;

    file = fopen("userData.txt", "r");

    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    if (user.Name == NULL)
    {
        printf("Welcome %s \n", user.Name);
    }
    else
    {
        printf("\n\n\033[1;36m Welcome To Your Personal Finance Management System\033[0m\n\n");

        printf("Please Tell me Your Name: ");
        scanf("%s", user.Name);

        printf("Now, Tell me Your Age: ");
        scanf("%d", &user.Age);

        printf("What is Your Monthly Salary: ");
        scanf("%d", &user.Salary);

        printf("What is Your Bank Balance: ");
        scanf("%d", &user.backBalance);

        file = fopen("userData.txt", "w");
        if (file == NULL) {
            printf("Error opening file!\n");
            return 1;
        }
        
        fprintf(file, "Name: %s\n", user.Name);
        fprintf(file, "Age: %d\n", user.Age);
        fprintf(file, "Salary: %d\n", user.Salary);
        fprintf(file, "Bank Balance: %d\n", user.backBalance);
        fclose(file);
        printf("User data saved successfully!\n");
    }
    return 0;
}
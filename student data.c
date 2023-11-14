#include<stdio.h>

int main()
{
    char firstName[15];
    printf("Enter your firstName\n");
    scanf("%14s", firstName);
    printf("%s\n", firstName);

    char lastName[15];
    printf("Enter your lastName\n");
    scanf("%14s", lastName);
    printf("%s\n", lastName);

    char regNumber[15];
    printf("Enter your regNumber\n");
    scanf("%14s", regNumber);
    printf("%s\n", regNumber);

    // Marks scored by the student in five units.
    float introductionToProgramming;
    printf("Enter marks scored in Introduction to Programming\n");
    scanf("%f", &introductionToProgramming);
    printf("%f\n", introductionToProgramming);

    float networking;
    printf("Enter marks scored in Networking\n");
    scanf("%f", &networking);
    printf("%f\n", networking);

    float accounting;
    printf("Enter marks scored for Accounting\n");
    scanf("%f", &accounting);
    printf("%f\n", accounting);

    float OS;
    printf("Enter marks scored for OS\n");
    scanf("%f", &OS);
    printf("%f\n", OS);

    float compApplication;
    printf("Enter marks scored for Computer Application\n");
    scanf("%f", &compApplication);
    printf("%f\n", compApplication);

    return 0;
}

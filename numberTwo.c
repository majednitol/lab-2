#include <stdio.h>

struct Person
{
    char name[30];
    int NID,age;
    char address[30];
    double salary,bonus;

} information[7];

int main()
{
    int i,j;
    printf("Enter Name, NID, Age, Address, Salary\n");
    for(i=0; i<7; i++)
    {
        scanf("%s %d %d %s %lf",&information[i].name,&information[i].NID,&information[i].age,&information[i].address,&information[i].salary);
    }
    for(j=0; j<7; j++)
    {
        printf("Name: %s\nNID: %d\nAge: %d\nAddress: %s\nSalary:%.2lf\nBonus: %.2lf\n\n",information[j].name,information[j].NID,information[j].age,information[j].address,information[j].salary,(information[j].salary/2));
        printf("Annual Income : %.2lf\nIncome tax   : %.2lf\n\n\n",information[j].salary*12+information[j].salary,information[j].salary/10);
    }
}




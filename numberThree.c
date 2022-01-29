
#include <stdio.h>

struct Student
{
    char name[20];
    int id;
    int age;
    char address[20];
    double sgpa_1,sgpa_2,sgpa_3,sgpa_4,cgpa;
   
} data[10];

void allInformation()
{
    int i,j,k;
    int cradit[4]= {9,8,13,11};
    for(i=0; i<10; i++)
    {
        printf("enter name ,id,age,address\n");
        scanf("%s%d%d%s",data[i].name,&data[i].id,&data[i].age,&data[i].address);
        printf("enter GPA Of four semester \n");
        scanf("%lf%lf%lf%lf", &data[i].sgpa_1, &data[i].sgpa_2,&data[i].sgpa_3, &data[i].sgpa_4);
        data[i].cgpa = ( data[i].sgpa_1 * 12 +data[i].sgpa_2 * 16 +data[i].sgpa_3 * 15)+data[i].sgpa_4 * 11/(9+8+13+11);
    }

    for(j=0; j<11; j++)
    {
        printf("Name: %s\nID: %d\nAge: %d\nAddress: %s\nCGPA: %.2lf",data[i].name,data[i].id,data[i].age,data[i].address,data[i].cgpa);
    }

}

int main()
{
  allInformation();
}





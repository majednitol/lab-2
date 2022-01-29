//1
#include<stdio.h>
struct crick
{
    int age, run, wickets;
    char name[15];
}player[100];
void main()
{
    int i,x;
    printf("Enter number of player :\n");
    scanf("%d",&x);
    printf("Enter player's Name, Age, Runs,wickets\n");
    for(i=0; i<x; i++)
    {
       scanf("%s %d %d %d",&player[i].name,&player[i].age,&player[i].run,&player[i].wickets);

    }
    for(i=0; i<x; i++)
    {
        printf("Name: %s\tAge: %d\t\tRuns: %d\tWickets: %d\n",player[i].name, player[i].age,player[i].run,player[i].wickets);
    }}
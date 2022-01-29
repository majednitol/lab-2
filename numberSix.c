#include <stdio.h>

int printElementPosition(int a[],int n, int element){
    int i;
for (i = 0; i < n; i++)
    {
        if (a[i] == element)
        {
            printf("%d found at position %d", element, i + 1);
            return 0;
        }
        
    }

    printf("%d not found.", element);
}
int main()
{
    int a[100], n, element, pos = 0,i;
 
    printf("Enter array size ");
    scanf("%d", &n);

    printf("Enter array elements: ");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("Enter element to search: ");
    scanf("%d", &element);
    printElementPosition(a,n,element);
     return 0;
}

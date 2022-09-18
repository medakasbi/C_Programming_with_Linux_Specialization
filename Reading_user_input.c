#include <stdio.h>

int main()
{
    int num;
    int i;

    printf("Please enter a number.\n");
    scanf("%d", &num);
    
    for (i = 0; i < 11; i++)
    {
        printf("%dx%d = %d\n", i, num, i * num);
    }
    return 0;
}
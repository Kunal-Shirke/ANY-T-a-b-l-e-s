#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    int table, ans, i;
    printf("Enter the table you want\n");
    scanf("%d", &table);

    for (i = 1; i < 11; i++)
    {

        ans = table * i;
        printf("%d x %d=%d\n", table, i, ans);
    }

    system("pause");
    return 0;
}
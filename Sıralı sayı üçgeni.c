#include <stdio.h>
#include <stdlib.h>

int main()
{

    int i, j;

    for (i = 1; i < 11; i++)
    {

        for (j = 1; j <= i; j++)
        {
            while (i < j)
            {
                printf("%d ", i);
            }

            printf("%d ", j);

        }

        printf("\n");

    }

    system("pause");
    return 0;
}

#include <stdio.h>
int main()
{
    int N;
    scanf("%d", &N);

    for (int rows = 1; rows <= N; rows++)
    {
        for (int spc = 1; spc <= N - rows; spc++)
        {
            printf(" ");
        }
        for (int col = 1; col <= 2 * rows - 1; col++)
        {
            if (rows % 2 != 0)
            {
                printf("^");
            }
            else
            {
                printf("*");
            }
        }
        printf("\n");
    }

    return 0;
}


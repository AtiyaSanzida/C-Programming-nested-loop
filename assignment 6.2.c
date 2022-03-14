#include<stdio.h>

int main()

{
    int i,j,rows;
    printf("Number of rows: ");
    scanf("%d",&rows);


    for(i=1; i<=rows; i++)//rows
    {
        ///space
        for(j=i; j<=rows; j++){
            printf(" ");
        }

        ///shape
        for(int j=1; j<=i; j++)
        {
            if(i==1||i==rows||j==1||j==i)
            {
                printf("*");
            }
            else
                printf(" ");
        }

        printf("\n");
    }
 return 0;
}




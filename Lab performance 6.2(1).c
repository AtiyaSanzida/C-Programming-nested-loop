#include <stdio.h>

int main()
{
    int i , j , k ;
    int z=1 ;
    int n;
    printf("Enter N : ");
    scanf("%d", &n);

    for(i=0 ; i<=n ; i++)
    {
        for(j=n-1 ; j>=i ; j--)
            printf(" ");
        for(k=0 ; k<z ; k++)
            printf("%c", k+65);
        z+=2 ;

        printf("\n");

    }
    return 0;
}

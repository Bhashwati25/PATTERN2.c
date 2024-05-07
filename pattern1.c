#include<stdio.h>
int main()
{
int rows;
    printf("Enter number of rows :\n");
    scanf("%d",&rows);
    for(int i=1;i<=rows;i++)
    {
        for(int j=rows-i;j>0;j--)
        {
            printf("   ");
        }
        for(int k=1;k<=i;k++)
        {
            printf(" %d ",k);
        }
        for(int l=i-1;l>0;l--)
        {
            printf(" %d ",l);
        }

        printf("\n");

    }
}
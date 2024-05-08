#include<stdio.h>
int main()
{
    int n;
    printf("ENTER THE NUMBER OF ROWS: \n");
    scanf("%d",&n);
    int count=-1,c=n+1;
    for(int i=0;i<=n/2;i++)
    {
        count=count+2;
        for(int j=n/2;j>i;j--)
        {
            printf(" ");
        }
        printf("  *");
        for(int k=2;k<=count;k++)
        {
            printf(" ");
        }
        if(i>0)
        {
        printf("*");
        }printf("\n");
    }
    for(int i=1;i<=n/2;i++)
    {
        c=c-2;
        for(int j=1;j<=i;j++)
        {
            printf(" ");
        }
        printf("  *");
        for(int k=c;k>1;k--)
        {
            printf(" ");
        }
        if(i<(n/2))
        {
        printf("*");
        }
        printf("\n");
    }
}
#include<stdio.h>
int main()
{
    int count=-2,c=7;
    for(int i=0;i<5;i++)
    {
        count=count+2;
        for(int j=i;j<5;j++)
        {
            printf("*");
        }
        for(int k=1;k<count;k++)
        {
            printf(" ");
        }
        if(i==0)
        {
        for(int l=1;l<5;l++ )
        {
            printf("*");
        }
        }
        else
        {
        for(int l=i;l<5;l++)
        {
            printf("*");
        }
        }
        

        printf("\n");
    }
    //lower half
    for(int i=1;i<5;i++)
    {
        c=c-2;
     for(int j=0;j<=i;j++)
        {
            printf("*");
        }
        for(int k=1;k<=c;k++)
        {
            printf(" ");
        }
        if(i==4)
        {
        for(int l=1;l<5;l++ )
        {
            printf("*");
        }
        }
        else
        {
        for(int l=0;l<=i;l++)
        {
            printf("*");
        }
        }
        printf("\n");
    
}
}
#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number of lines: \n");
    scanf("%d",&n);
    //first half
    int count=-2,c=n+2;
    //number of lines
    for(int i=0;i<n;i++)
    {
        count=count+2;
        //half of number of columns
        for(int j=i;j<n;j++)
        {
            printf("*");
        }
        //spaces
        for(int k=1;k<count;k++)
        {
            printf(" ");
        }
        //another half of number of columns
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
        
//another line
        printf("\n");
    }
    //lower half
    for(int i=1;i<n;i++) //number of lines in lower half
    {
        c=c-2;
     for(int j=0;j<=i;j++) //half of number of columns 
        {
            printf("*");
        }
        for(int k=1;k<=c;k++) //spaces
        {
            printf(" ");
        }
        //another half of number of columns
        if(i==(n-1))
        {
        for(int l=1;l<n;l++ )
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

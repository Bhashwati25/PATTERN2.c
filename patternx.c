#include<stdio.h>
int main(){
    int i,count=0,c=1,rows;
    printf("Enter the number of rows you want to print : \n " );
    scanf("%d",&rows);
        
    for(i=1;i<=rows;i++){
        for(int j=rows-i;j>=1;j--){
            
                printf(" ");
            }
         if(i==1){
             printf("1");
        }
        if(i%2==0){
            count=count+1;
        }
        else if(i%2!=0 && i>1){
        c=c+1;
        }
        for(int k=1;k<=i-count;k++){
            if(i>1){
                printf("%d  ",k);
            }
        }
        for(int l=i-c;l>=1;l--){
            if(i>1){
                printf("%d  ",l);
            }
        }
        printf("\n");   
    }
        
    return 0;
}

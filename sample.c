#include<stdio.h>
int number()
{
    int n,i,j;
    printf("enter a number"); 
    scanf("\n%d",&n);   //5
    
    printf("%d",n);
    for(i=1;i<n;i++)
    {
        
        printf("\n%d",i);
    }
}
int main()
{
    number();
}

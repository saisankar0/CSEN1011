#include <stdio.h>  
 
int main()  
{  
    int num, i, j, k = 1;   
   
    printf( " Enter a number : \n");  
    scanf( "%d", &num);  
    
    for (i = 1; i <= num; i++)  
    {  
        
        for (j = 1; j <= i; j++)  
        {  
            printf(" %2d", k++); 
        }  
        printf( "\n");  
        }     
        
}  

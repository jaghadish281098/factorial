 #include<stdio.h>  
int main()    
{    
 int i,fact=1,n;    
 printf("Enter a n: ");    
  scanf("%d",&n);    
    for(i=1;i<=n;i++){    
      fact=fact*i;    
  }    
  printf("Factorial of %d ",fact);    
return 0;  
}   
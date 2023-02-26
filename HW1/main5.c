TEST
#include <stdio.h>
#include <stdlib.h>
int strcopy(char a[],char b[],int len){
    for(int i=0;i<len;i++){
            a[i] = b[i];
        }
        return 0;
}


int main()
{
    char a[]= "-9 8 7 6 5 -4 3 -2 1";
    int alen = sizeof(a)/sizeof(char)-1;
    int n=4,g=0;
    char b[alen];
    
    for(int i=0;i<alen-1;i++){
        if(a[i]=='-'){
            b[g]=a[i+1];
            g=g+1;
            i=i+2;
        }
    }
    char c[g];
    strcopy (c,b,g);
    for(int i=0;i<g;i++){
      for(int j=0;j<g-i;j++){
         if(c[j]>c[j+1]){
            printf("%d",1);
      
         }        
      }
   }
   int integer = atoi(c);
    printf("str to int: %d\n", integer);
printf("\n%s%d",c,g);
    
    
    return 0;
}

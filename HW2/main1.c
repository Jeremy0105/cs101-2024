TEST


#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    FILE* fp;
    int a[7];
    int n;
    scanf("%d", &n);
    srand((unsigned) time(NULL));
    for(int k=0; k<n; k++){
        for(int i=0; i<7; i++){
        a[i] = (rand()%68)+1;
       }
       printf("%", a);
       fwrite(a, sizeof(a), 1, fp);
    }
    
    
    fp = fopen("lotto.txt", "w+");

    return 0;
}

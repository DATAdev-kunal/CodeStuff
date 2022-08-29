#include <stdio.h>
int main(){
    int i=1;
    int sum=0;
    
    do
    {
        sum+=i;
        i++;
    } while (i>=1 && i<11  );
    
    printf("%d\n", sum);
    return 0;
}
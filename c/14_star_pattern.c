#include <stdio.h>
int rows;
int star(rows);
int main() {

   printf("Enter the number of rows: ");
   scanf("%d", &rows);
   star(rows);
   return 0;
}

int star(rows){
    int i, j;
    for (i = 1; i <= rows; ++i) {
            for (j = 1; j <= i; ++j) {
            printf("* ");
      }
      printf("\n");
   }
   return 0;
}

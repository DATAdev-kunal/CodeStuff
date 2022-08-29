#include<stdio.h>
#include<string.h>

int main() {
    
  char n[] = "New";
  char y[] = " York";
  char c[] = " City";

  strcat(n, y);
  strcat(n, c);

  printf("%s\n", n);
}
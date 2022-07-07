#include <stdio.h>
#include <string.h>

char *reverse( char *s){
  int size = strlen(s) ;
  int c, i, j;

  for (i = 0, j = size - 1; i < j; i++, j--){
    c = s[i];
    s[i] = s[j];
    s[j] = c;
  }
  
  return s;
}


int main(){
  char string[] = "Pablo Batista";

  printf("%s\n", reverse(string) );

  return 0;
}

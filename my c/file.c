#include <stdio.h>
#include <stdlib.h>

void main(){
  FILE * fpointer = fopen("employees.txt", "w");
  fprintf(fpointer, "i write using fprintf");
  fclose(fpointer);
  return 0;
}

#include "stdio.h"
#include "stdlib.h"

void main(){
  // & is adress, * is the value of adress
  int age = 23;
  char nama = 'S';
  double ipk = 3.3;

  int *pointerAge = &age;
  char *pointerNama = &nama;
  double *pointerIpk = &ipk;


  printf("age:%d\n", age);
  *pointerAge = 55;
  printf("now age::%d\n", age);

  printf("ipk:%f\n", ipk);
  *pointerIpk = 9.9;
  printf("now ipk::%f\n", ipk);

  printf("nama:%c\n", nama);
  *pointerNama = 'B';
  printf("now nama::%c\n", nama);

  return 0;
}

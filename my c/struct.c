#include <stdio.h>
#include <stdlib.h>

struct student{
  char name[50];
  char major[50];
  int age;
  double gpa;
};

int main(){
  struct student student1;
  student1.age = 22;
  student1.gpa = 3.1;
  strcpy(student1.name , "malinho");
  strcpy(student1.major , "Lawyer");
  printf("major MR %s is %s", student1.name,student1.major);
  return 0;
}
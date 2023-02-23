#include<stdio.h> // define the header file  
#include<stdlib.h>

void main()   // define the main function  
{  
    printf("Welcome to C");
    char buffer[30];
    char *nama = "Arman";
    char *umur = 33;
    char *jenisKelamin = "LK";
    double nilaiIpk = 0.98;
    char singleChar = 'A';

    sprintf(buffer, "\nnama:%s\numur:%d\njenis kelamin:%s\nnilai ipk:%f\nsingle char:%c\n", nama, umur, jenisKelamin, nilaiIpk, singleChar);
    printf(buffer);
    
    return 0;
}
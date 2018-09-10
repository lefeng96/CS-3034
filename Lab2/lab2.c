#include <stdio.h>
#include "lab2.h"

int main(void){
	double array[10];
  int length = sizeof(array)/sizeof(double);
  printf("enter 10 doubles\n");
  scan_array(array,length);
  printf("user input array\n");
  print_array(array, length);
  double copy[10];

  for(int i = 0; i < length; i++){
    copy[i] = array[i];
  }
  reciprocal(copy, length);
  printf("original array\n");
  print_array(array, length);
  printf("reciprocal array\n");
  print_array(copy, length);
	return 0;
}

void print_array(double *x, int length){
  double *end = x + length;
  do{
    printf("%lf ",*x );
    x++;
  } while(x<end);
  printf("\n");
}

void scan_array(double *x, int length){
  double *end = x + length;
  do{
    scanf("%lf",x);
    x++;
  } while(x<end);
}

void reciprocal(double *x, int length){
  double *end = x + length;
  do{
    *x=1/ *x;
    x++;
  } while(x<end);
}

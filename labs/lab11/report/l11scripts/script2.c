#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(){

int n;
int res;
scanf("Input the number %i", &n);

 if (n == 0){
 res = 0;
 }
 else if (n > 0){
 res = 1;
 }
 else if (n < 0){
 res = 2;
 }
exit(res);
 }

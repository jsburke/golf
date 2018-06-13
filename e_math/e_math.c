#include <stdio.h>

int fn(int a){
  if (a < 2) return 1;
  return a*fn(a-1);
}

void main(){
float e = 0;

for(int n = 0; n < 10; n++) e += 1.0 / fn(n);

printf("e: %f", e);
}

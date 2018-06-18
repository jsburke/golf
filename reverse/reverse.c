#include"d.h"
i,e,t;

void reverse(){
  while(i<e){
  printf("a[%d] == %c || a[%d] == %c\n", i, a[i], e, a[e]);
  t=a[i];
  a[i++]=a[e];
  a[e--]=t;
  }
}

main(){
while(a[++e]);
e--;
reverse();
printf("%s\n",a);
}

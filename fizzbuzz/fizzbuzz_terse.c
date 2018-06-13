main(){
for(int i=1;i<101;i++){
  if(!(i%5)&&!(i%3))printf("fizzbuzz\n");
  else if(!(i%5))printf("buzz\n");
  else if(!(i%3))printf("fizz\n");
  else printf("%d\n",i);
}
}

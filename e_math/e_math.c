f(int a){
  a = (a < 2) ? 1 : a*f(a-1);
}

main(n){
float e = 0;

for(n--;n<10;)e+=1.0/f(n++);

printf("%f", e);
}

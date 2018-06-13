int fn(int a){
  return (a < 2) ? 1 : a*fn(a-1);
}

main(){
float e = 0;

for(int n = 0; n < 10; n++) e += 1.0 / fn(n);

printf("e: %f", e);
}

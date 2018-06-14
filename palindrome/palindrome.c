palindrome(val){
int res = 0;
do{
  res *= 10;
  res += val % 10;
}while(val/=10);
return res;
}

main(){
int i=999, j = i;
while(i){
  while(j){
    if(palindrome(i*j)){printf("largest palindrome is %d",i*j);return;}
    j--;
  }
  i--;
}
}

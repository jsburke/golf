palindrome(val){
int res = 0;
do{
  res *= 10;
  res += val % 10;
}while(val/=10);
return res;
}

main(){
  if(palindrome(909)) printf("True\n");
  else printf("False");
}

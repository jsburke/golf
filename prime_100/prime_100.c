h;
main(i){
  while(i++<100){
    for(h=i/2;i%h--;);if(!h)printf("%d\n",i);
  }
}

x,y,i,s=1<<5;
main()
{
	for (y = s - 1; y+1; y--, puts(""))
		for (x=i=0; i < y | x+y<s;) printf(i++<y?" ":x++&y?"  ":"* ");
}

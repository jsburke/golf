x,y,i,s=1<<5;
main()
{
	for (y = s - 1; y+1; y--, printf("\n")) {
		for (i = 0; i++ < y;) printf(" ");
		for (x = 0; x + y < s;)
			printf((x++ & y) ? "  " : "* ");
	}
}

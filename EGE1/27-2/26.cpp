#include <stdio.h>
void main()
{
	int n, a, b, c, d, x, y;
	scanf("%d", &n);
	a = b = c = d = 0;
	for(int i = 0; i < n; i++)
	{
		scanf("%d%d", &x, &y);
		if(x == 0 || y == 0)
			continue;
		if(x > 0)
			if(y > 0)
				a++;
			else
				d++;
		else
			if(y > 0)
				b++;
			else
				c++;
	}
	printf("%d", (a*d*(a+d-2) + c*b*(c+b-2))/2);
	
}
#include <stdio.h>
int main(void)
//¹®ÀÚ¿­

{
	int a, i, b, d, m, n, e, j;

	char abc[1005];
	n = 0;
	//scanf("%s",abc);
	//scanf("%d",&a);

	scanf("%d", &m);

	for (i = 0; i < m; i++)
	{
		scanf("%s", abc);
		n = 0;
		for (d = 0; abc[d] != '\0'; d++)
		{
			n++;
		}
		printf("%c%c\n", abc[0], abc[n - 1]);
	}

	return 0;
}
#include <stdio.h>
char S[102][53];
char F[102];
int rA[102];
int rB[102];
int E = -1;
int main()
{
	int i;
	int a, b;
	int t;
	int n, m;
	int R = 0;
	scanf("%d %d", &n, &m);
	for (i = 0; i < n; i++)
	{
		F[i] = 1;
	}
	for (i = 0; i < n; i++)
	{
		scanf("%s", &S[i]);
	}
	for (a = 0; a < n; a++)
	{
		for (b = a + 1; b < n; b++)
		{
			for (t = 0; t < m; t++)
			{
				if (S[a][t] - S[b][m - 1 - t])
				{
					break;
				}
			}
			if (t == m)
			{
				rA[R] = a;
				F[a] = 0;
				rB[R] = b;
				F[b] = 0;
				R++;
			}
		}
	}
	for (t = 0; t < n; t++)
	{
		if (F[t])
		{
			for (a = 0; a < m; a++)
			{
				if (S[t][a] - S[t][m - 1 - a])
				{
					break;
				}
			}
			if (a == m)
			{
				E = t;
				break;
			}
		}
	}
	if (~E)
	{
		printf("%d\n", 2 * R * m + m);
	}
	else
	{
		printf("%d\n", R * m << 1);
	}
	for (a = 0; a < R; a++)
	{
		printf("%s", S[rA[a]]);
	}
	if (~E)
	{
		printf("%s", S[E]);
	}
	for (b = R - 1; b >= 0; b--)
	{
		printf("%s", S[rB[b]]);
	}
	return 0;
}

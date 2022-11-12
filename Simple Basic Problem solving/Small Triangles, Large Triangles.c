// https://www.hackerrank.com/challenges/small-triangles-large-triangles/problem

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct triangle
{
	int a;
	int b;
	int c;
};

typedef struct triangle triangle;
void sort_by_area(triangle *tr, int n)
{
	/**
	 * Sort an array a of the length n
	 */
	int i, j, tmp1, tmp2, tmp3;
	double s, value, Area[n], tmp;
	for (i = 0; i < n; i++)
	{
		s = (tr[i].a + tr[i].b + tr[i].c) / 2.0;
		value = (s * (s - tr[i].a) * (s - tr[i].b) * (s - tr[i].c));
		Area[i] = sqrt(value);
	}
	for (i = 0; i < n - 1; i++)
	{
		for (j = 0; j < n - i - 1; j++)
		{
			if (Area[j] > Area[j + 1])
			{
				tmp = Area[j];
				Area[j] = Area[j + 1];
				Area[j + 1] = tmp;
				tmp1 = tr[j].a;
				tmp2 = tr[j].b;
				tmp3 = tr[j].c;
				tr[j].a = tr[j + 1].a;
				tr[j].b = tr[j + 1].b;
				tr[j].c = tr[j + 1].c;
				tr[j + 1].a = tmp1;
				tr[j + 1].b = tmp2;
				tr[j + 1].c = tmp3;
			}
		}
	}
}

int main()
{
	int n;
	scanf("%d", &n);
	triangle *tr = malloc(n * sizeof(triangle));
	for (int i = 0; i < n; i++)
	{
		scanf("%d%d%d", &tr[i].a, &tr[i].b, &tr[i].c);
	}
	sort_by_area(tr, n);
	printf("\n\n\n");
	for (int i = 0; i < n; i++)
	{
		printf("%d %d %d\n", tr[i].a, tr[i].b, tr[i].c);
	}
	return 0;
}
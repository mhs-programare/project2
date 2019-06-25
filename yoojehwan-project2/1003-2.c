// 메모이제이션
#include <stdio.h>

int c[41];
int zero[41], one[41];

void fibo(int x) {
	for (int i = 2; i <= x; i++)
	{
		if (!c[i]) {
			c[i] = 1;
			zero[i] = zero[i - 1] + zero[i - 2];
			one[i] = one[i - 1] + one[i - 2];
		}
	}
}

int main(void)
{
	int n, x;
	scanf("%d", &n);

	c[0] = 1;
	c[1] = 1;
	zero[0] = 1;
	one[1] = 1;

	for (int i = 0; i < n; i++) {
		scanf("%d", &x);
		fibo(x);
		printf("%d %d\n", zero[x], one[x]);
	}
}


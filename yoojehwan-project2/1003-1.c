// DP + 재귀를 이용한 방법
#include <stdio.h>
#include <string.h>

int dp[41];
int zero[41], one[41];

int fibo(int x) {
	if (dp[x] == -1) {
		dp[x] = fibo(x - 1) + fibo(x - 2);
		zero[x] = zero[x - 1] + zero[x - 2];
		one[x] = one[x - 1] + one[x - 2];
	}

	return dp[x];
}

int main(void)
{
	int n, x;
	scanf("%d", &n);

	dp[0] = 0;
	dp[1] = 1;
	zero[0] = 1;
	one[1] = 1;

	for (int j = 2; j <= 40; j++) {
		dp[j] = -1;
	}

	for (int i = 0; i < n; i++) {
		scanf("%d", &x);
		fibo(x);
		printf("%d %d\n", zero[x], one[x]);
	}
}

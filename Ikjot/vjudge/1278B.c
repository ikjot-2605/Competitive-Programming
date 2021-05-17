#include <stdio.h>

int main() {
	int t;

	scanf("%d", &t);
	while (t--) {
		int a, b, k;

		scanf("%d%d", &a, &b);
		if (a > b) {
			int tmp;

			tmp = a;
			a = b;
			b = tmp;
		}
		k = 0;
		while (a < b || (a - b) % 2)
			a += ++k;
		printf("%d\n", k);
	}
	return 0;
}

#include <math.h>
#include <stdio.h>
#include <stdbool.h>

int main() {
	int n = 1;
	int long long max = 1000000000000000000;
	for (int i = 0; i < max; i++) {
		if (n < 10) {
			if (n == 2 || n == 3 || n == 5 || n == 7) {
				printf("%d\n", n);
			}
		} else if (n >= 10) {
			bool is_prime = true;
			for (int div = 2; div <= (int)sqrt(n) + 1; div++) {
				if (n % div == 0) {
					is_prime = false;
					break;
				}
			}
			if (is_prime == true) {
				printf("%d\n", n);
			}
		}
		n++;
	}
	return 0;
}

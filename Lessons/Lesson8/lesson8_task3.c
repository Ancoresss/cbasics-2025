#include <stdio.h>

int main() {
	char name1[] = {'h', 'e', 'l', 'l', 'o'};
	char name2[] = "hello";

	for (int i = 0; i < 5; i++) {
		name2[i] += 3;
		printf("%c", name2[i]);

	}
	return 0;
}

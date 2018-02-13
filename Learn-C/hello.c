#include <stdio.h>
#include <string.h>

int main() {
	char hello[] = {
		'h', 'e', 'l', 'l', 'o',
		' ',
		'w', 'o', 'r', 'l', 'd', '!'
	};

	for (int i = 0; i < strlen(hello); i++) {
		if (hello[i] >= 'a' && hello[i] <= 'z') {
			hello[i] = hello[i] - ('a' - 'A');
		}
		printf("%c", hello[i]);
	}
	putchar('\n');
	puts("--------------");
	puts("yeah-yeah-yeah");

	return 0;
}

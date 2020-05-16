#include "../libft/libft.h"
#include "testft.h"

int main() {
	for (int i = 0; i < 128; i++) {
		printf("%d : %c : %d\n", i, i, isprint(i));
	}
	return 0;
}
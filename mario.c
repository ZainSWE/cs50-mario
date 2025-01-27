#include <stdio.h>


int main() {

    int height = 0, row = 0, column = 0, hash = 0;

    do {
	printf("Height: ");
	scanf("%d", &height);
	row++;
    }

    while (height < 1 || height > 8);

    for (row = 0; row < height; row++) {

	for (column = 0; column < height - row - 1; column++) {
	    printf(" ");
	}

	    for (hash = 0; hash <= row; hash++) {
		printf("#");
	    }

	    printf("\n");
    }

    return 0;
}

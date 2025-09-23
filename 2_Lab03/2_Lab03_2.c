#include <stdio.h>

int main() {

	int score[5][4];
	int max_score = 0;
	int winner = 0;

	for (int i = 0; i < 5; i++) {
		int total = 0;
		for (int j = 0; j < 4; j++) {
			scanf("%d", &score[i][j]);
			total += score[i][j];
		}
		if (total > max_score) {
			max_score = total;
			winner = i + 1;
		}
	}

	printf("%d %d\n", winner, max_score);

	return 0;
}
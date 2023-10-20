// 2023-2 고급프로그래밍 과제: 쭈꾸미 게임
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>
#include "jjuggumi.h"

#define	DATA_FILE	"jjuggumi.dat"

int jjuggumi_init(void);

// low 이상 high 이하 난수를 발생시키는 함수
int randint(int low, int high) {
	int rnum = rand() % (high - low + 1) + low;
	return rnum;
}

int jjuggumi_init(void) {
	srand((unsigned int)time(NULL));

	printf("플레이어 수: ");
	scanf_s("%d", &n_player);

	n_alive = n_player;
	for (int i = 0; i < n_player; i++) {
		player[i] = true;
	}
	return 0;
}

void intro() {
	printf("\n");
	printf("    ___      _  _  ____   __    __  ____  ____   __    _\n");
	printf("   / __)    ( \\( )(  _ \\ (  )  (  )( ___)(  _ \\ (  )  ( )\n");
	printf("  ( (__  _   )  (  )(_) )/ (_/\\/\\ )__)  )   /  )(__  )(\n");
	printf("   ) __)( )  (  ) (  __/ (  _)(_  ) __)  )   \\ (____)(_) \n");
	printf("  ( (    (   )  ( )      (  (_  ) (     (  ( )  _  _   _\n");
	printf("  ( (___  \\ (  ) ( )_    (  _  ) (       )  (  (  (  (  )_\n");
	printf("   \\___   /  )(__  )  )   )(_)(  )_)     (____)  )(_)(  __)\n");
	printf("   (___/  (______)(__/   (______)          (____)(____)\n");
	printf("\n");
	Sleep(1000);
}

void ending(int playerScore) {
	if (playerScore >= 100) {
		printf("Congratulations! You are the champion of the Jjuggumi Game!\n");
		printf("You scored %d points and emerged victorious!\n", playerScore);
	}
	else {
		printf("Thanks for playing the Jjuggumi Game!\n");
		printf("Your score: %d\n", playerScore);
		printf("Better luck next time. Keep playing to improve your skills!\n");
	}
}


int main(void) {
	int playerScore = 120;
	jjuggumi_init();
	intro();
	sample();
	//mugunghwa();
	//nightgame();
	//juldarigi();
	//jebi();
	ending(playerScore);
	return 0;
}

// 2023-2 고급프로그래밍 과제: 쭈꾸미 게임
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>
#include "jjuggumi.h"


#define   DATA_FILE   "jjuggumi.dat"

void intro() {
    printf("   ___    ___  _   _  _____  _____  _   _ ___  ___ _____ \n");
    printf("  |_  |  |_  || | | ||  __  |  __ || | | ||  |/  ||_   _|\n");
    printf("    | |    | || | | || |  / | |  / | | | || .  . |  | |  \n");
    printf("    | |    | || | | || | __ | | __ | | | || |/ | |  | |  \n");
    printf("/|__/ //|__/ /| |_| || |_| || |_| || |_| || |  | | _| |_ \n");
    printf("|____/ |____/ |____/ |____/ |____/ |____/ |_|  |_/|___ / \n");
    Sleep(1000);
}


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

int main(void) {
    jjuggumi_init();
    intro();
    //sample();
    mugunghwa();
    //nightgame();
    //juldarigi();
    //jebi();
    return 0;
}

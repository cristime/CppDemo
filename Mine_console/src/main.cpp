#include "../headers/header.h"
#include <cstdio>
#include <ctime>
#include <algorithm>

int main(int argc, char * argv[]) {
    Game game(argc, argv);
    game.GenMap();
    if (game.GameLoop()) {
        printf("Congratulations!\n");
        int t = clock() / CLOCKS_PER_SEC;
        printf("Time used: %d seconds\n", t);
        FILE * f = fopen(".best.txt", "r");
        if (f == NULL) {
            fclose(f);
            f = fopen(".best.txt", "w");
            fprintf(f, "%d\n", t);
            fclose(f);
        } else {
            int x;
            fscanf(f, "%d", &x);
            x = std::max(x, t);
            fclose(f);
            f = fopen(".best.txt", "w");
            fprintf(f, "%d\n", t);
            fclose(f);
        }
    } else {
        ClearWindow();
        game.PrintAnswer();
    }
	return 0;
}

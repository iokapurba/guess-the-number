#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int difficulties(int diff, int range[4][2]);
int play();
int playagain();

// ----------------------------------------------------------------------------------------------------//

int main(){

    int enter;
    int cont;
    printf("Press 0 to enter the game.\n");
    scanf("%d", &enter);
    if(enter == 0){
        play();
        cont = playagain();
        while(cont != 0){
            cont = playagain();
        }
    }

}

// ----------------------------------------------------------------------------------------------------//

int difficulties(int diff, int range[4][2]){
    int max;

    if(diff == 1){
        max = range[0][1];
    }else if (diff == 2){
        max = range[1][1];
    }else if (diff == 3){
        max = range[2][1];
    }else if (diff == 4){
        max = range[3][1];
    }

    return max;
}

int play(){
    int enter;
    int diff;
    int max = 0;
    int min = 0;
    int guess;

    srand(time(NULL));
    int range[4][2];
    range[0][0] = 0;
    range[0][1] = 5;
    range[1][0] = 0;
    range[1][1] = 10;
    range[2][0] = 0;
    range[2][1] = 50;
    range[3][0] = 0;
    range[3][1] = 100;

    printf("The game is started\n");
    printf("Choose the difficulties (Presss 1 or 2 or 3 or 4):\n1. 0 - 5\n2. 0 - 10\n3. 0 - 50\n4. 0 - 100\n");
    scanf("%d", &diff);

    max = difficulties(diff, range);

    int randomNumber = rand() % (max - min + 1) + min;

    printf("Select a number between %d to %d: ", min, max);
    scanf("%d", &guess);

    if(guess == randomNumber){
        printf("Your guess is on point!\n");
    }else{
        printf("It's not your lucky day...\n");
        printf("The correct number is %d.\n", randomNumber);
    }
    printf("\n*****************************************************\n\n");
}

int playagain(){

    int cont;
    printf("Press 1 to play again\n");
    printf("Press 0 to stop the game\n");
    scanf("%d", &cont);
    printf("\n");
    if(cont == 1){
        play();
    }else{
        return 0;
    }

    return cont;
}




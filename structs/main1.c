#include <stdio.h>

struct player
{
    char name[32];
    int highscore;
};
typedef struct player player;

int main(void)
{
    player xbox;
    printf("Enter the player's name: ");
    scanf("%s", xbox.name);

    printf("Enter their high score: ");
    scanf("%d", &xbox.highscore);

    printf("Player %s has a high score of %d\n", xbox.name, xbox.highscore);
    return (0);
}

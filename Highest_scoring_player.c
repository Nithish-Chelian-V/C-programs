
#include <stdio.h>

int main()
{
    int score1, score2, score3, highest;

    printf("Enter score of Player 1: ");
    scanf("%d", &score1);

    printf("Enter score of Player 2: ");
    scanf("%d", &score2);

    printf("Enter score of Player 3: ");
    scanf("%d", &score3);

    highest = score1;

    if (score2 > highest)
    {
        highest = score2;
    }

    if (score3 > highest)
    {
        highest = score3;
    }

    printf("Highest score = %d\n", highest);

    return 0;
}

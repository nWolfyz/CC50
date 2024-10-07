#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX_WORD_LENGTH 100

int letter_scores[26] = {
    1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};

int calculate_score(const char *word)
{
    int score = 0;
    for (size_t i = 0; i < strlen(word); i++)
    {
        if (isalpha(word[i]))
        {
            score += letter_scores[toupper(word[i]) - 'A'];
        }
    }
    return score;
}

int main()
{
    char word1[MAX_WORD_LENGTH];
    char word2[MAX_WORD_LENGTH];

    printf("Jogador 1, digite uma palavra: ");
    scanf("%s", word1);

    printf("Jogador 2, digite uma palavra: ");
    scanf("%s", word2);

    int score1 = calculate_score(word1);
    int score2 = calculate_score(word2);

    printf("A pontuação da palavra do Jogador 1 '%s' é: %d\n", word1, score1);
    printf("A pontuação da palavra do Jogador 2 '%s' é: %d\n", word2, score2);

    if (score1 > score2)
    {
        printf("Jogador 1 venceu!\n");
    }
    else if (score2 > score1)
    {
        printf("Jogador 2 venceu!\n");
    }
    else
    {
        printf("Empate!\n");
    }

    return 0;
}

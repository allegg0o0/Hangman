#include <libhangman/functions.h>
#include <stdio.h>

void output(int live)
{
    switch (live) {
    case 7:
        printf(" ────────\n"
               "|        |\n"
               "|       \n"
               "|       \n"
               "|       \n"
               "|      \n"
               "|       \n"
               "|     \n"
               "|\n");
        printf("Попробуйте еще\n");
        break;
    case 6:
        printf(" ────────\n"
               "|        |\n"
               "|        |\n"
               "|        \n"
               "|       \n"
               "|        \n"
               "|       \n"
               "|      \n"
               "|\n");
        printf("Попробуйте еще\n");
        break;
    case 5:
        printf(" ────────\n"
               "|        |\n"
               "|        |\n"
               "|        O\n"
               "|       \n"
               "|        \n"
               "|       \n"
               "|      \n"
               "|\n");
        printf("Попробуйте еще\n");
        break;
    case 4:
        printf(" ────────\n"
               "|        |\n"
               "|        |\n"
               "|        O\n"
               "|        |\n"
               "|       \n"
               "|       \n"
               "|      \n"
               "|\n");
        printf("Попробуйте еще\n");
        break;
    case 3:
        printf(" ────────\n"
               "|        |\n"
               "|        |\n"
               "|        O\n"
               "|       /|\\\n"
               "|       \n"
               "|       \n"
               "|      \n"
               "|\n");
        printf("Попробуйте еще\n");
        break;
    case 2:
        printf(" ────────\n"
               "|        |\n"
               "|        |\n"
               "|        O\n"
               "|       /|\\\n"
               "|        |\n"
               "|       \n"
               "|      \n"
               "|\n");
        printf("Попробуйте еще\n");
        break;
    case 1:
        printf(" ────────\n"
               "|        |\n"
               "|        |\n"
               "|        O\n"
               "|       /|\\\n"
               "|        |\n"
               "|       / \\\n"
               "|      \n"
               "|\n");
        printf("Попробуйте еще\n");
        break;

    default:
        printf("Вы проиграли!\n");
        printf(" ────────\n"
               "|        |\n"
               "|        |\n"
               "|        O\n"
               "|       /|\\\n"
               "|        |\n"
               "|       / \\\n"
               "|      /   \\\n"
               "|\n");
        exit(0);
        break;
    }
}

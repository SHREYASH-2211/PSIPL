#include <stdio.h>
#include <string.h>

struct Player {
    char name[30];
    char country[20];
    float batavg;
};

void swap(struct Player *a, struct Player *b) {
    struct Player temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    struct Player players[11];

    printf("Enter details of players as well as average rate:\n");
    printf("       Name         |         Country         |      Batting Average     |\n");
    for (int i = 0; i < 11; i++) {
        scanf("%s", players[i].name);
        scanf("%s", players[i].country);
        scanf("%f", &players[i].batavg);
    }

    for (int i = 0; i < 10; i++) {
        int min = i;
        for (int j = i + 1; j < 11; j++) {
            if (players[j].batavg > players[min].batavg) {
                min = j;
            }
        }
        if (min != i) {
            swap(&players[i], &players[min]);
        }
    }

    printf("\nList of players sorted by batting average:\n");
    for (int i = 0; i < 11; i++) {
        printf("Player:%d ", i + 1);
        printf(" Name:%s ", players[i].name);
        printf(" Country:%s ", players[i].country);
        printf(" Batting Average:%.2f ", players[i].batavg);
    }

    printf("\nThe best batsman is:\n");
    printf("Name: %s ", players[0].name);
    printf(" Country: %s ", players[0].country);
    printf(" Batting Average: %.2f ", players[0].batavg);

    return 0;
}

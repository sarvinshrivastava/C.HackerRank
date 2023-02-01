#include <stdio.h>

struct planets {
    char name[15];
    int distance;
    int moonscount;
} p1, p2;

int main() {
    printf("Enter the name of planet:");
    scanf("%s", p1.name);
    printf("Enter the distance of planet:");
    scanf("%d", p1.distance);
    printf("Enter the no. of moons revolve around:");
    scanf("%d", p1.moonscount);
    printf("Enter the name of planet:");
    scanf("%s", p2.name);
    printf("Enter the distance of planet:");
    scanf("%d", p2.distance);
    printf("Enter the no. of moons revolve around:");
    scanf("%d", p2.moonscount);
    printf("\n Entered data is:\n %s %d %d", p1.name, p1.distance, p1.moonscount);
    return 0;
}
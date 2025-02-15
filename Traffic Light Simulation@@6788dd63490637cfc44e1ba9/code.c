#include <stdio.h>

int main() {
    char light_color;

    // Read a single character input
    scanf("%c", &light_color);

    // Determine the action based on the traffic light color
    if (light_color == 'R' || light_color == 'r') {
        printf("stop\n");
    } else if (light_color == 'G' || light_color == 'g') {
        printf("go\n");
    } else if (light_color == 'Y' || light_color == 'y') {
        printf("slow down\n");
    } else {
        printf("invalid input\n");
    }

    return 0;
}

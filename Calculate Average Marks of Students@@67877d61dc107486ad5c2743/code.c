#include <stdio.h>

struct Student {
    int roll;
    char name[100];
    float marks;
};

int main() {
    int n;
    scanf("%d", &n);

    struct Student s[n];
    float sum = 0;

    for (int i = 0; i < n; i++) {
        scanf("%d %s %f", &s[i].roll, s[i].name, &s[i].marks);
        sum += s[i].marks;
    }

    float average = sum / n;
    printf("Average Marks: %.2f\n", average);

    return 0;
}

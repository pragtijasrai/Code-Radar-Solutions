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

    // Read student data
    for (int i = 0; i < n; i++) {
        scanf("%d %s %f", &s[i].roll, s[i].name, &s[i].marks);
    }

    // Find the top scorer
    int topIndex = 0;
    for (int i = 1; i < n; i++) {
        if (s[i].marks > s[topIndex].marks) {
            topIndex = i;
        }
    }

    // Print top scorer's details
    printf("Top Scorer: Roll Number: %d, Name: %s, Marks: %.2f\n", 
           s[topIndex].roll, s[topIndex].name, s[topIndex].marks);

    return 0;
}

#include <stdio.h>
#include <string.h>

struct Student {
    int roll_no;
    char name[50];
    float marks;
};

int main() {
    int n, all_passed = 1;
    scanf("%d", &n);

    struct Student students[n];

    for (int i = 0; i < n; i++) {
        scanf("%d %s %f", &students[i].roll_no, students[i].name, &students[i].marks);
        if (students[i].marks <= 50) {
            all_passed = 0;
        }
    }

    if (all_passed) {
        printf("All Passed\n");
    } else {
        printf("Not All Passed\n");
    }

    return 0;
}

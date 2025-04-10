#include <stdio.h>
#include <string.h>

struct Student {
    int roll_no;
    char name[50];
    float marks;
};

int main() {
    int n, count = 0;
    float threshold;
    
    scanf("%d", &n);
    
    struct Student students[n];
    
    for (int i = 0; i < n; i++) {
        scanf("%d %s %f", &students[i].roll_no, students[i].name, &students[i].marks);
    }
    
    scanf("%f", &threshold);
    
    for (int i = 0; i < n; i++) {
        if (students[i].marks > threshold) {
            count++;
        }
    }
    
    printf("Count of students scoring above %.2f: %d\n", threshold, count);
    
    return 0;
}

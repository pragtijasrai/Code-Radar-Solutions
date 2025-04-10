#include <stdio.h>
#include <string.h>

struct Student {
    int roll_no;
    char name[50];
    float marks;
};

int main() {
    int n;
    scanf("%d", &n);
    
    struct Student students[n];
    
    for (int i = 0; i < n; i++) {
        scanf("%d %s %f", &students[i].roll_no, students[i].name, &students[i].marks);
    }

    int min_index = 0;

    for (int i = 1; i < n; i++) {
        if (students[i].marks < students[min_index].marks) {
            min_index = i;
        }
    }

    printf("Student with Minimum Marks: Roll Number: %d, Name: %s, Marks: %.2f\n",
           students[min_index].roll_no,
           students[min_index].name,
           students[min_index].marks);

    return 0;
}

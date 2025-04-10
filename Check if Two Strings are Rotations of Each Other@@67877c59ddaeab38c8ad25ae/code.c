#include <stdio.h>
#include <string.h>

int isRotation(char *s1, char *s2) {
    int len1 = strlen(s1);
    int len2 = strlen(s2);

    if (len1 != len2) return 0;

    char temp[2 * len1 + 1];
    strcpy(temp, s1);
    strcat(temp, s1);

    return strstr(temp, s2) != NULL;
}

int main() {
    char str1[1000], str2[1000];

    fgets(str1, sizeof(str1), stdin);
    fgets(str2, sizeof(str2), stdin);

    str1[strcspn(str1, "\n")] = '\0';
    str2[strcspn(str2, "\n")] = '\0';

    if (isRotation(str1, str2))
        printf("Yes\n");
    else
        printf("No\n");

    return 0;
}
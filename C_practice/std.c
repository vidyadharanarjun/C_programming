#include <stdio.h>

struct Student {
    int roll;
    int marks;
};

int main() {
    struct Student s[3];
    int i;

    for (i = 0; i < 3; i++) {
        scanf("%d %d", &s[i].roll, &s[i].marks);
    }

    for (i = 0; i < 3; i++) {
        printf("%d %d\n", s[i].roll, s[i].marks);
    }

    return 0;
}

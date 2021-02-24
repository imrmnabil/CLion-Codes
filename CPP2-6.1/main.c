#include <stdio.h>
#include <string.h>

int main() {
    struct student {
        int id;
        char name[40];
    };
    struct student one;
    one.id = 1;
    scanf("%[^Z]", one.name);
    printf("%d %s\n", one.id, one.name);
    return 0;
}

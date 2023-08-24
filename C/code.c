#include <stdio.h>

char* can_divide_watermelon(int w) {
    if (w >= 1 && w<=100 && w % 2 == 0) {
        return "YES";
    } else {
        return "NO";
    }
}

int main() {
    int w;
    printf("Please Enter a number: ");
    scanf("%d", &w);
    char* result = can_divide_watermelon(w);
    printf("%s\n", result);

    return 0;
}
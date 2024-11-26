#include <stdio.h>
#include <string.h>

void swap(char *x, char *y) {
    char temp = *x;
    *x = *y;
    *y = temp;
}

void reverse(char *str, int start, int end) {
    while (start < end) {
        swap(&str[start++], &str[end--]);
    }
}

int next_permutation(char *str) {
    int n = strlen(str);
    int i = n - 2;

    while (i >= 0 && str[i] >= str[i + 1]) i--;
    if (i < 0) return 0;

    int j = n - 1;
    while (str[j] <= str[i]) j--;

    swap(&str[i], &str[j]);
    reverse(str, i + 1, n - 1);
    return 1;
}

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        char word[101];
        scanf("%s", word);

        if (next_permutation(word)) {
            printf("%s\n", word);
        } else {
            printf("no answer\n");
        }
    }

    return 0;
}

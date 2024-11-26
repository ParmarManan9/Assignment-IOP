#include <stdio.h>
#include <string.h>

void permute(char *str, int l, int r);

int main() {
    char str[] = "ABCD";
    int n = strlen(str);
    printf("The permutations of the string are:\n");
    permute(str, 0, n - 1);
    return 0;
}

void permute(char *str, int l, int r) {
    if (l == r) {
        printf("%s\n", str);
    } else {
        for (int i = l; i <= r; i++) {
            // Swap characters at position l and i
            char temp = *(str + l);
            *(str + l) = *(str + i);
            *(str + i) = temp;

            // Recurse for the next position
            permute(str, l + 1, r);

            // Backtrack by swapping the characters back
            temp = *(str + l);
            *(str + l) = *(str + i);
            *(str + i) = temp;
        }
    }
}

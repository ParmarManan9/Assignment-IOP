#include <stdio.h>
#include <string.h>

int main() {
    int n;
    scanf("%d", &n);

    int gem_elements[26] = {0};
    char rock[101];

    for (int i = 0; i < n; i++) {
        int present[26] = {0};
        scanf("%s", rock);

        for (int j = 0; rock[j] != '\0'; j++) {
            present[rock[j] - 'a'] = 1;
        }

        for (int j = 0; j < 26; j++) {
            gem_elements[j] += present[j];
        }
    }

    int gem_count = 0;
    for (int i = 0; i < 26; i++) {
        if (gem_elements[i] == n) {
            gem_count++;
        }
    }

    printf("%d\n", gem_count);

    return 0;
}

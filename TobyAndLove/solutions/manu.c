#include <stdio.h>
#include <string.h>

int main() {
    int tc;
    scanf("%d", &tc);
    char line[1111];
    while (tc--) {
        int i, len, ans = 0;
        scanf("%s", line);
        len = strlen(line);
        for (i = 0; i + 3 < len; i++) {
            ans += (line[i] == 'l') && (line[i + 1] == 'o') && (line[i + 2] == 'v')
                                  && (line[i + 3] == 'e');
        }
        printf("%d\n", ans);
    }
    return 0;
}
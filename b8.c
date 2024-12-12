#include <stdio.h>
#include <string.h>
int main() {
    char chuoi[] = "hello world";
    int len = strlen(chuoi);
    if (chuoi[0] >= 'a' && chuoi[0] <= 'z') {
        chuoi[0] -= 32;
    }
    for (int i = 1; i < len; i++) {
        if (chuoi[i] == ' ' && i + 1 < len) {
            if (chuoi[i + 1] >= 'a' && chuoi[i + 1] <= 'z') {
                chuoi[i + 1] -= 32;
            }
        }
    }

    printf("%s\n", chuoi);

    return 0;
}
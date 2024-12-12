// Khai báo và gán giá trị cho 1 chuỗi bất kỳ, viết chương trình viết hoa các chữ cái đầu của các từ trong chuỗi đó.

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char chuoi[] = "hello world";
    chuoi[0] = toupper(chuoi[0]);
    for (int i = 1; i < strlen(chuoi); i++) {
        if (chuoi[i-1] == ' ') {
            chuoi[i] = toupper(chuoi[i]);
        }
    }
    printf("%s\n", chuoi);
    return 0;
}
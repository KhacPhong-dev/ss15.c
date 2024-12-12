// Khai báo và gán giá trị cho 1 chuỗi bất kỳ, viết chương trình in ra tất cả các ký tự và số lần xuất hiện của từng ký tự.

#include <stdio.h>
#include <string.h>

int main() {
    char chuoi[] = "Hello World";
    int count[256] = {0};
    for (int i = 0; i < strlen(chuoi); i++) {
        count[chuoi[i]]++;
    }
    for (int i = 0; i < 256; i++) {
        if (count[i] > 0) {
            printf("Ky tu %c xuat hien %d lan\n", i, count[i]);
        }
    }
    return 0;
}
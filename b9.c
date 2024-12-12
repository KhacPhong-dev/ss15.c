// Khai báo và gán giá trị cho 1 chuỗi bất kỳ, viết chương trình yêu cầu người dùng nhập vào 1 ký tự và xóa các ký tự đó khỏi chuỗi đã khai báo.

#include <stdio.h>  
#include <string.h>

int main() {
    char chuoi[] = "Hello World";
    char kytu;
    int count = 0;
    printf("Chuoi da khai bao: %s\n", chuoi);
    printf("Nhap mot ky tu bat ky: ");
    scanf("%c", &kytu);
    for (int i = 0; i < strlen(chuoi); i++) {
        if (chuoi[i] == kytu) {
            count++;
        }
    }
    printf("So lan xuat hien cua ky tu %c trong chuoi la: %d\n", kytu, count);
    return 0;
}
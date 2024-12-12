#include <stdio.h>
#include <string.h>

int main() {
    char chuoi[] = "Hello my gmail is test123@gmail.com";
    int chu_cai = 0, chu_so = 0, dac_biet = 0;

    for (int i = 0; i < strlen(chuoi); i++) {
        if ((chuoi[i] >= 'A' && chuoi[i] <= 'Z') || (chuoi[i] >= 'a' && chuoi[i] <= 'z')) {
            chu_cai++;
        } else if (chuoi[i] >= '0' && chuoi[i] <= '9') {
            chu_so++;
        } else if (chuoi[i] != ' ') {
            dac_biet++;
        }
    }

    printf("So ky tu la chu cai: %d\n", chu_cai);
    printf("So ky tu la chu so: %d\n", chu_so);
    printf("So ky tu dac biet: %d\n", dac_biet);

    return 0;
}
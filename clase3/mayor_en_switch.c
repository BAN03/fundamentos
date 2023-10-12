#include <stdio.h>
int main() {

    int num;
    num = 0;

    switch (num >= 0) {
    case 1:
        if (num > 0) {
            printf("mayor a 0");
        } else {
            printf("es 0");
        }
        break;
    case 0:
        printf("menor a 0");
        break;
    }
    return 0;
}
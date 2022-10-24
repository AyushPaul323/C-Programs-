#include <stdio.h>
int main() {
    char *data[5];

    printf("Enter elements: ");
    for (int i = 0; i < 5; ++i)
        scanf("%s", data + i);

    printf("You entered: \n");
    for (int i = 0; i < 5; ++i)
        printf("%s\n", *(data + i));
    return 0;
}

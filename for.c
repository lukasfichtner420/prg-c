#include <stdio.h>
#include <stdlib.h>

int main() {
int x = 1;

while (x < 10) {
    if (x == 6)
        break;
    printf("%d \n", x);
    x++;
}

return 0;
}

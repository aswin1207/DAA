#include <stdio.h>
int main() {
int a[] = {10, 20, 30, 40, 50};
int key = 40;
int i;
for (i = 0; i < 5; i++) {
if (a[i] == key)
 {
printf("element found at index %d", i);
return 0;
}
}
printf("element not found");
return 0;
}

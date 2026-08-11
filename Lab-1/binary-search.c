#include <stdio.h>
int main() {
int a[] = {10, 20, 30, 40, 50};
int key = 10;
int l = 0, r = 4, m;
while (l <= r) {
m = (l + r) / 2;
if (a[m] == key) {
printf("element found at index %d", m);
return 0;
}
else if (key < a[m]) {
r = m - 1;
}
else {
l = m + 1;
}
}
printf("element not found");
return 0;
}

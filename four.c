#include <stdio.h>

void four(int n) {

    if((n - 4) != 0) {

      switch (n % 10) {
        case 0: four( n / 10); break;
        case 4: four( n / 10); break;
        default: four(n * 2);
      }
      printf("--> %d ", n);
    }
}

int main(int argc, char const *argv[]) {

  int n;
  printf("n = ");
  scanf("%d", &n);

  printf("4 ");
  four(n);

  return 0;
}

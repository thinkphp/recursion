#include <stdio.h>
#define FIN "four.in"
#define FOUT "four.out"

int four(int n) {

    if((n - 4)!=0) {
      switch (n % 10) {
        case 0: four(n/10);break;
        case 4: four(n/10);break;
        default: four(n*2);
      }
      printf("-->%d", n);
    }
}

int main(int argc, char const *argv[]) {

  int n;
  freopen(FIN,"r",stdin);
  freopen(FOUT,"w",stdout);

  while(scanf && scanf("%d",&n) == 1) {
        printf("%d",4);
        four(n);
        printf("\n");
  }


  return 0;
}

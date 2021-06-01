#include <iostream>
#define FIN "four.in"
#define FOUT "four.out"

using namespace std;

void four(int n) {

    if((n - 4)!=0) {
      switch (n % 10) {
        case 0: four(n/10);break;
        case 4: four(n/10);break;
        default: four(n*2);
      }
      cout<<"-->"<<n;
    }
}

int main(int argc, char const *argv[]) {

  int n;
  freopen(FIN,"r",stdin);
  freopen(FOUT,"w",stdout);

  while((cin>>n)) {
        cout<<"4";
        four(n);
        cout<<endl;
  }


  return 0;
}

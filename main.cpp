#include <iostream>

using namespace std;

/*
int muertos (int h, int m) {
    int size = 2 * h;

    int curr = (m - 1) % size, i = 0, j = 0;
    for (i = 0; i < 2*h; i++) {
        if (curr<h) break;
        size--;
        curr=(curr+m-1)%(size);
    }

    return i;
}
*/
int main () {
    int x=0;
    int r[15] = {0, 2, 7, 5, 30, 169, 441, 1872, 7632, 1740,
            93313, 459901, 1358657, 2504881, 13482720};


    /*for (int i = 1; i <= 14; i++) {
      for (int j = 1;; j++) {
        if (muertos(i, j) == i) {
          r[i] = j;
          break;
        }
      }
    }*/

    while(cin>>x and x!=0){
    cout<<r[x]<<endl;}

}
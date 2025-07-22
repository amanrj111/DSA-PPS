#include <iostream>
using namespace std;

int findMx (int a, int b, int c ){
  if ( a>b && a>c){
    return a;
  }else if( b>a && b>c){
    return b;
  }else{
    return c;
  }
}

int main() {
   int a,b,c;

   cin >> a >> b >> c;

   int max = findMx(a, b , c);

   cout << "max number is " << max << endl;

  return 0;
}
#include <iostream>
using namespace std;

int add (int a, int b){
   int result = a+b;
   return result;

}

int main(){
   
   int a;
   cout << " enter  the value off a : " << endl;
   cin >> a;

   int b;
   cout << "Ente the va;lue of b : " << endl;
   cin >> b;
 
   int sum = add(a, b);

   cout << "Addition result is : " << sum << endl;

   return 0;
}
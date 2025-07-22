#include <iostream>
using namespace std;

int main(){

  int n;
  cout << "enter n :";
  cin >> n;

  // part1 star
  
   for (int row=1; row<=n; row++){
     //spac
     for(int col=1; col<=n-row; col++){
       cout << " ";
     }
     //star
     for(int col=1; col<=row; col++){
       cout << "* ";
     }
     cout << endl;

   }


   //part2 space 

   for (int row=1; row<=n; row++){
     //space
     for(int col=1; col<=n; col++){
         cout << " ";
     }
     //space 
     for(int col=1; col<=row+3; col++){
         cout << " ";
     }
     //star
     for(int col =1; col<=n-row+1; col++){
         cout << "* ";
     }
     cout << endl;
   }
  return 0;
}
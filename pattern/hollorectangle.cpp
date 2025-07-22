#include <iostream>
using namespace std;

int main()
{
  int rowCount, n, colCount;
  // cin >> rowCount;
  cin >> n;
  // cin >> colCount;
  // for(int row=0; row < rowCount; row++){
  //   if(row == 0 || row == rowCount-1){
  //     for(int col=0; col < colCount; col++){
  //       cout<<"* ";
  //     }
  //   }else{
  //     cout << "* ";
  //     for(int i=0; i<colCount-2; i++){
  //       cout<< "  ";
  //     }
  //     cout << "* ";
  //   }
  //   cout << endl;
  // }
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
    {
      if (i == 0 || i == n - 1 || j == 0 || j == n - 1)
      {
        cout << "*";
      }
      else
      {
        cout << " ";
      }
    }
    cout << endl;
  }
  return 0;
}
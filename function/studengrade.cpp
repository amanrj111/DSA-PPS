#include <iostream>
using namespace std;

char getGrade(int m)
{
  if (m >= 90)
  {
    return 'A';
  }
  else if (m >= 80)
  {
    return 'B';
  }
  else if (m >= 70)
  {
    return 'C';
  }
  else if (m >= 60)
  {
    return 'D';
  }
  else
  {
    return 'E';
  }
}

int main()
{

  int marks;
  cout << "enter the marks: " << endl;
  cin >> marks;

  char finalGrade = getGrade(marks);
  cout << finalGrade << endl;
  return 0;
}
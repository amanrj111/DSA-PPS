#include <iostream>
#include <vector>
#include <iterator>   // for begin(), end()
#include <algorithm>  // for sort()

using namespace std;

void mergeSortedArrays(int arr1[], int size1, int arr2[], int size2, vector<int> &result)
{
  int i = 0, j = 0;

  while (i < size1 && j < size2)
  {
    if (arr1[i] < arr2[j])
    {
      result.push_back(arr1[i]);
      i++;
    }
    else
    {
      result.push_back(arr2[j]);
      j++;
    }
  }

  while (i < size1)
  {
    result.push_back(arr1[i]);
    i++;
  }

  while (j < size2)
  {
    result.push_back(arr2[j]);
    j++;
  }
}

int main()
{
  int arr1[] = {1, 5, 9, 7, 10};
  int size1 = sizeof(arr1) / sizeof(arr1[0]);
  int arr2[] = {6, 3, 2, 8};
  int size2 = sizeof(arr2) / sizeof(arr2[0]);

  // Sort the arrays before merging
  sort(begin(arr1), end(arr1));
  sort(arr2, arr2 + size2);

  vector<int> result;
  mergeSortedArrays(arr1, size1, arr2, size2, result);

  cout << "Printing after array is sorted and merged: " << endl;
  for (int i = 0; i < result.size(); i++)
  {
    cout << result[i] << " ";
  }
  cout << endl;

  return 0;
}

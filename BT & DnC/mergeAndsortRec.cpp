#include <iostream>
#include <vector>
#include <iterator>  // for begin(), end()
#include <algorithm> // for sort()

using namespace std;

void merge(int arr[], int start, int end, int mid)
{
  // calulate length of the left array
  int leftArrayLength = mid - start + 1;
  int rightArrayLength = end - mid; // end - (mid + 1) + 1;
  // copying data from original array to the left part and right part
  int *arr1 = new int[leftArrayLength];
  int *arr2 = new int[rightArrayLength];

  // copy
  for (int i = 0; i < leftArrayLength; i++)
  {
    arr1[i] = arr[start + i];
  }
  for (int i = 0; i < rightArrayLength; i++)
  {
    arr2[i] = arr[mid + 1 + i];
  }

  // merge and sorted array
  int i = 0; // arr1
  int j = 0; // arr2

  int k = start; // original aray ka inddex

  // compare
  while (i < leftArrayLength && j < rightArrayLength)
  {
    if (arr1[i] < arr2[j])
    {
      arr[k] = arr1[i];
      i++;
      k++;
    }
    else
    {
      arr[k] = arr2[j];
      j++;
      k++;
    }
  }
  // copy
  while (i < leftArrayLength)
  {
    arr[k] = arr1[i];
    i++;
    k++;
  }
  while (j < rightArrayLength)
  {
    arr[k] = arr2[j];
    j++;
    k++;
  }
  // free memory allocate for temporary array
  delete[] arr1;
  delete[] arr2;
}

void mergeSort(int arr[], int start, int end)
{
  // base case
  if (start >= end)
    return;
  // mid
  int mid = (start + end) / 2;

  /// compare recursivily
  mergeSort(arr, start, mid);
  mergeSort(arr, mid + 1, end);

  // copy
  merge(arr, start, end, mid);
}

int main()
{
  int arr[] = {1, 5, 9, 7, 10, 2, 4, 6, 8};
  int size = sizeof(arr) / sizeof(arr[0]);

  // Sort the arrays before merging
  mergeSort(arr, 0, size - 1);

  cout << "Printing after array is sorted and merged: " << endl;
  for (int i = 0; i < size; i++)
  {
    cout << arr[i] << " ";
  }
  cout << endl;

  return 0;
}

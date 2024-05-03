#include <iostream>
#include <vector>
using namespace std;

int main()
{

  vector<int> array1;
  vector<int> array2;
  int size1;
  int size2;

  cout << "enter the number for first array :";
  cin >> size1;
  cout << "enter the number for second array :";
  cin >> size2;

  for (int i = 1; i < size1; i++)
  {
    int element;
    cout << "Enter element " << i + 1 << " of the first array: ";
    cin >> element;
    array1.push_back(element);
  }
}
#include <iostream>
using namespace std;

int main() {
   
  int size,target,flag;
  
  cout <<"enter the array size = ";
  cin >> size;
  
  int arr[size];
  
  for(int i = 0 ; i < size ; i++)
  {
      cin >> arr[i];
  }
  
  cout << "\n";
   
  for(int j =0 ; j < size ; j ++)
  {
      cout << arr[j];
  }
   cout << "\n";
  
  cout << "enter the sum = ";
  cin >> target;
  
   cout << "\n";
  
  for(int k = 0 ; k < size ; k++)
  {
      for(int h = k + 1 ; h < size ; h++)
      {
          if(arr[k] + arr[h] == target)
          {
              flag = 1 ;
              cout << "Found: " << arr[k] << " + " << arr[h] << " = " << target << "\n";
              break;
          }
      }
  }
  
  if(flag == 1)
  {
      cout << "found";
  }
  else
  {
      cout << "not found";
  }
    return 0;
}
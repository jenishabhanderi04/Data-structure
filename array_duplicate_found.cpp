#include <iostream>
using namespace std;

int main() {
   
  int size,target,flag,dup,count = 0;
  
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
  
  for(int i = 0 ; i < size ; i++)
  {
      for(int j = i+1 ; j < size ; j++)
      {
          if(arr[i] == arr[j])
          {
              flag = 1;
              cout << "Duplicate found: " << arr[i] << " and " << arr[j] << "\n";
              count = count + 1 ;
          }
      }
  }
  
  if(flag == 1)
  {
     
      cout << "number of duplicates"<<count;
  }
  else
  {
      cout << "not duplicate";
  }
    return 0;
}
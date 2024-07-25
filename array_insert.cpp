// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() {
    
    int size;
    
    cout << "enter the size of array = ";
    cin >> size;
    
    int arr[size];
    
    //enter the array element
    
    for (int i = 0 ; i <size ; i++)
    {
        cin >> arr[i];
    }
    
    //print the array element
    
    for (int j = 0 ; j <size ; j++)
    {
        cout<<arr[j] <<" , " << "\n";
    }
    
    int pos,element,k;
    
  cout << "enter the element insert in array  which index = ";
  cin >> pos;
  
  cout << "enter the element in the array = ";
  cin >> element;
  
  //shift the array for insert the element in the array
  
  if(pos > size  || pos < 0)
  
  {
      cout << "enter the right position"<<"\n";
  }
  
  else
  {
  
  for(k = size; k > pos;k --)
  {
      arr[k] = arr[k - 1];
  }
   
   arr[pos] = element;
   
   size++;
  }
   //print new elemenet in array
   
   for(int f = 0 ; f < size ; f++)
   {
       cout << arr[f];
   }
   
   cout << "\n";
   
   cout << "size of array = ";
   cout << size;


    return 0;
}
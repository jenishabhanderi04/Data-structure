// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() {
    
    int size,flag = 0;
    
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
    
    //delete the element given the position
    
    int e,k;
    
   cout << "enter the element which is delete = ";
   cin >> e;
   
   for(k = 0 ; k < size;k++)
   {
       if(arr[k] == e)
       {
           
           flag = 1;
           break;
       }
      
   }
   
  if(flag == 1)
  {
      for(int h = k ; h < size ; h++)
      {
          arr[h] = arr[h + 1];
      }
      
      size --;
  }
  else
  {
      cout << "element not found";
  }
   
   cout <<"\n";
   
   //print new array
   
   for(int f =0 ; f < size ; f++)
   {
       cout << arr[f];
   }

cout <<"new array size = " << size << "\n";

    return 0;
}
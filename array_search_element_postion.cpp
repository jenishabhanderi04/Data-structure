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
    
    //find the element 
  
    
    int e,k;
   
    cout << "enter the element = "; 
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
     
          cout <<"element found this index = " << k << "\n";
  }
  else
  {
      cout << "element not found";
  }
   
   
  
 cout <<"\n";



    return 0;
}
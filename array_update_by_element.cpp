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
    
    //update the element 
    
    int e,k,newelement;
    
   cout << "enter the element which is update = ";
   cin >> e;
   cout <<"enter the new update element = ";
   cin>>newelement;
   
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
     
          arr[k] = newelement;
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
   
 cout <<"\n";

cout <<"new array size = " << size << "\n";

    return 0;
}
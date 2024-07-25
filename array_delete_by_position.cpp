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
    
    //delete the element given the position
    
    int pos,k;
    
   cout << "enter the postion which is delete = ";
   cin >> pos;
   
   if(pos < 0 || pos > size)   
   {
       cout << "invalid position";
   }
   
   else{
       

   for ( k = pos ; pos < size ; k++)
   {
       arr[k] = arr[k + 1];
   }    
  
   size --;
   }
   
   cout <<"\n";
   
   //print new array
   
   for(int f =0 ; f < size ; f ++)
   {
       cout << arr[f];
   }

cout <<"new array size = " << size;

    return 0;
}
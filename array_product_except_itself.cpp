#include <iostream>
using namespace std;

int main() {
    int size;
    
    cout << "Enter the array size: ";
    cin >> size;
    
    int arr[size];
    int prod[size];
    long long totalProduct = 1;
    
    cout << "Enter the array elements:\n";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
        totalProduct *= arr[i]; // Calculate the total product of all elements
    }
    
    cout << "Array elements are: ";
    for (int j = 0; j < size; j++) {
        cout << arr[j] << " ";
    }
    cout << "\n";
    
    for (int i = 0; i < size; i++) {
        prod[i] = totalProduct / arr[i]; // Calculate the product of all other elements
    }
    
    cout << "Product array is: ";
    for (int j = 0; j < size; j++) {
        cout << prod[j] << " ";
    }
    cout << "\n";
    
    return 0;
}

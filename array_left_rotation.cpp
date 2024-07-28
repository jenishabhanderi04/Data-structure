#include <iostream>
using namespace std;

int main() {
    int size, s;
    
    cout << "Enter the array size: ";
    cin >> size;
    
    int arr[size];
    
    cout << "Enter the array elements:\n";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }
    
    cout << "Array elements are: ";
    for (int j = 0; j < size; j++) {
        cout << arr[j] << " ";
    }
    cout << "\n";
    
    cout << "Enter the shift array from left by positions: ";
    cin >> s;
    
    // Ensure s is within the bounds of the array length
    s = s % size;
    
    int rotatedArr[size];
    
    // Copy the elements shifted by s positions
    for (int i = 0; i < size; i++) {
        rotatedArr[i] = arr[(i + s) % size];
    }
    
    cout << "Array after left rotation: ";
    for (int j = 0; j < size; j++) {
        cout << rotatedArr[j] << " ";
    }
    cout << "\n";
    
    return 0;
}
        
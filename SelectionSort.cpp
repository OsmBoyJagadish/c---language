#include <iostream>
void swap(int *a, int *b) {
int temp = *a;
*a = *b;
*b = temp;
}
#include<iostream>
using namespace std;
void swapping(int &a, int &b) {
int temp;
temp = a;
a = b;
b = temp;
}
void display(int *array, int size) {
for(int i = 0; i<size; i++)
cout << array[i] << " ";
cout << endl;
}
void selectionSort(int *array, int size) {
int i, j, imin;
for(i = 0; i<size-1; i++) {
imin = i;
for(j = i+1; j<size; j++)
if(array[j] < array[imin])
imin = j;
//placing in correct position
swap(array[i], array[imin]);
}
}
int main() {
int n;
cout << "Enter the number of elements: ";
cin >> n;
int arr[n];
cout << "Enter elements:" << endl;
for(int i = 0; i<n; i++) {
cin >> arr[i];
}
cout << "Array before Sorting: ";
display(arr, n);
selectionSort(arr, n);
cout << "Array after Sorting: ";
display(arr, n);
}

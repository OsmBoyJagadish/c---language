#include<iostream>
#include<list>
#include<cmath>
using namespace std;
void display(int *array, int size) {
for(int i =0; i<size; i++)
cout << array[i] << " ";
cout << endl;
}
void radixSort(int *arr, int n, int max) {
int i, j, m, p=1, index, temp, count=0;
list<int> pocket[10];
for(i=0; i<max; i++) {
m = pow(10, i+1);
p = pow(10, i);
for(j=0; j<n; j++) {
temp= arr[j]%m;
index = temp/p;
pocket[index].push_back(arr[j]);
}
count=0;
for(j=0; j<10; j++) {
while(!pocket[j].empty()) {
arr[count] = *(pocket[j].begin());
pocket[j].erase(pocket[j].begin());
count++;
}
}
}
}
int main() {
int n, max;
cout << "Enter the number of elements: ";
cin >> n;
cout << "Enter the maximum digit of elements: ";
cin >> max;
int arr[n];
cout << "Enter elements: " <<endl;
for(int i=0; i<n; i++) {
cin >> arr[i];
}
cout << "Data before Sorting: ";
display(arr, n);
radixSort(arr, n, max);
cout << "Data after Sorting: ";
display(arr, n);
}

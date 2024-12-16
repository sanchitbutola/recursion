#include<iostream>
using namespace std;
void fun(int *arr,int s,int e) {
    if(s >= e) return;
    //if start index not crosses the end index then swap the numbers
    swap(arr[s] , arr[e]);
    fun(arr,s+1,e-1);
}
int main() {
    int arr[100];
    int n;
    cout << "Enter the Number of elements in the Array : ";
    cin >> n; 
    //input array
    cout << "Enter The Elements Of The Array: ";
    for(int i = 0; i < n; i++) cin >> arr[i];
    //recursive function call
    fun(arr,0,n-1);
    //print the reversed array
    cout << "The Reversed Array Is : ";
    for(int i = 0; i < n; i++) cout << arr[i] <<" ";
}
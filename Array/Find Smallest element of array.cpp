// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int minimum(int arr[],int n) {
    // Write C++ code here
int i;
int min = arr[0];
for(i = 1; i<n; i++)
{
    if(arr[i]<min)
       min = arr[i];
}
    return min;
}
int main() {
    int arr1[] = {2,3,1,4,5};
    int n = 5;
    int min = minimum(arr1,n);
    cout << "The Smallest element in the array is : "<< min <<endl;
    return 0;
}

#include <bits/stdc++.h> 
using namespace std;

int main(){
    int n, val, key, num;

    int arr[n];

    int left = 0;
    int right = n;
    int mid = (left + right)/2 ;

    cout << "Enter the size of array" << endl;
    cin >> n;

    cout << "Enter the array";
    for(int i=0; i<=n; i++){
        cin >> arr[i];
    }

    cout << "Enter the number to be searched" << endl;
    cin >> num;

    while(left < right){
        if(key == arr[mid]){
            cout << "Number found at" << arr[mid];
        }else if(key < mid){
            right = mid - 1;
        }else{
            left = mid;
        }
    }
    return 0;
}
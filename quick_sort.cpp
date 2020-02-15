#include <bits/stdc++.h>
using namespace std;

int Partition(int A[], int q, int p){
    int i = q-1;
    for(int j=q; j<p; j++){
        if(A[j] <= A[p]){
            i++;
            swap(A[i], A[j]);
        }
    }
    swap(A[i+1], A[p]);
    return (i+1);
}

void QuickSort(int A[], int q, int p){
    if(q < p){
        int r;
        r = Partition(A, q, p);
        QuickSort(A, q, r-1);
        QuickSort(A, r+1, p);
    }
}

int main(){
    int n;
    cout << "Enter the size of array: " << endl;
    cin >> n;
    int A[n];
    cout << "Enter the elements of array: " << endl;
    for(int i=0; i<n; i++){
        cin >> A[i];
    }
    QuickSort(A, 0, n-1);

    cout << "Elements of sorted array is: " << endl;
    for(int i=0; i<n; i++){
        cout << A[i] << " ";
    }

    return 0;
}
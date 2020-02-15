#include <bits/stdc++.h>
using namespace std;
int n;

int knapsack(int value[], int weight[], int capacity, int currentindex){
    if(capacity <= 0 || currentindex < 0 || currentindex >= n){
        return 0;
    }
    int profit2, profit1 = 0;
    if(weight[currentindex] <= capacity){
        profit1 = value[currentindex] + knapsack(value, weight, (capacity - weight[currentindex]), currentindex + 1);
    }
    profit2 = knapsack(value, weight, capacity, currentindex + 1);

    return max(profit1, profit2);
}

int main(){
    int k, m;
    cout << "Enter the no. of items in Knapsack: " << endl;
    cin >> n;
    int V[n], W[n], i;
    cout << "Enter the value of items: " << endl;
    for(i=0; i<n; i++){
        cin >> V[i];
    }
    cout << "Enter the weight of items: " << endl;
    for(i=0; i<n; i++){
        cin >> W[i];
    }
    cout << "Enter the Knapsack capacity: " << endl;
    cin >> k;

    m = knapsack(V, W, k, 0);

    cout << "Maximum profit is: " << endl << m ;

    return 0;
}
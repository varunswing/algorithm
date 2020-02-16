#include <bits/stdc++.h>
using namespace std;
int n;

int knapsack(int capacity, int weight[], int value[]){
    double ratio[n], totalweight = 0, fraction = 0, totalvalue = 0;
    int i;
    for(i=0; i<n; i++){
        ratio[i] = value[i]*1.0/weight[i];
    }
    
    for(int j=0; j<n; j++){
        for(i=0; i<n-1; i++){
            if(ratio[i] < ratio[i+1]){
                swap(weight[i], weight[i+1]);
                swap(value[i], value[i+1]);
                swap(ratio[i], ratio[i+1]);
            }
        }
    }

    for(i=0; i<n; i++){
        if(totalweight + weight[i] < capacity){
            totalweight += weight[i];
            totalvalue += value[i];
        }else{
            fraction = value[i]*(capacity - totalweight)*1.0/weight[i];
            totalvalue += fraction*1.0;
            break;
        }
    }

    return totalvalue;
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

    m = knapsack(k, W, V);

    cout << "Maximum profit is: " << endl << m ;

    return 0;
}
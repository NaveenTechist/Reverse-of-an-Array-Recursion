#include <bits/stdc++.h>
using namespace std;

class solution{
public:
    int i = 0;
    void reverse(int arr[], int N){
        if(i >= N/2) {return;}
        swap(arr[i], arr[N-1-i]);
        i++;
        reverse(arr,N);
    }
};

/*
run loop to select all possible index of subarray index lies between 0 to n-1.
run another loop that stops the outer loop
after starting each subarray from index i and j, run another loop to sum the elements
if sum=k, consider the length j-i+1*/

#include <bits/stdc++.h>
using namespace std;

int longestsub(vector<int> &a, long long k){
    int n= a.size();
    int len= 0;
    for(int i=0; i<n; i++){
        for(int j=i; j<n; j++){
            long long sum=0;
            for(int k=i; k<=j; k++){
                sum += a[k];
            }
            if(sum==k){
                len= max(len, j-i+1);
            }
        }
        return len;
    }
}
int main()
{
    vector<int> a = {4, 1, 1, 1, 2, 3, 5};
    long long k = 3;
    cout << longestsub(a, k);
    return 0;
}
#include <bits/stdc++.h>
using namespace std;
class solution{
    public:
    void kth_element(vector<int>&arr, int k){
        sort(arr.begin(), arr.end());
        int n= arr.size();
        cout<< " the kth largest element is "<<arr[n-k]<<" and the kth smallest element is "<< arr[k-1]<<endl;

    }
};

int main(){
    vector<int> arr = {12, 3, 4, 5, 6, 7, 2};
    solution obj;
    obj.kth_element(arr, 1);
    return 0;
}
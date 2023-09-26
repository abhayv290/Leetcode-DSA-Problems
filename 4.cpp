#include<iostream>
#include<vector>
using namespace std;

int  merge(vector<int> &nums1 ,vector<int> &nums2){
    int n = nums1.size() - 1;
    int m = nums2.size() - 1;
    int i = 0, j = 0;
    vector<int> ans;
    int sum = n + m;
    while(i<n && j<m){

    }
    if(nums1[i]<=num2[j] && i<=n){
        ans.push_back(nums1[i]);
        i++;
    }
    if(nums1[i]>num2[j] && j<=m){
        ans.push_back(nums1[i]);
        i++;
    }
    return ans;
}

int main(){
    vector<int> arr1 = {1, 2, 4};
    vector<int> arr2 = {3};
    vector<int> mer = merge(arr1, arr2);
    cout << mer;
    return 0;
}
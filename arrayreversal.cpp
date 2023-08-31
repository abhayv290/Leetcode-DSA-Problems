#include<iostream>
using namespace std;
void reversearray(vector<int> &arr, int m){
 int n=arr.size();

 vector<int> brr(n, 0);
 int p = 0;

 for (int i = 0; int < m; i++) {
     brr[p++] = arr[i];
     }
     for (int j = n - 1;j>m;j--){
        brr[p++]=arr[j];
     }
     for (int i = 0; i < n;i++){
        brr[p++] = arr[i];
     };
}
int main(){
     int num[6] = {3, 5, 6, 0, 8,7};
     cin >> n;
     cout << reversearray(6, n);
     return 0;
}
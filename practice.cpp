

#include <iostream>
#include<math.h>
using namespace std;

//this problem for counting bit of an integer and gives in an array

// int count_ones(int n) {
//   int count = 0;
//   while (n) {
//     if (n & 1) {
//       count++;
//     }
//     n >>= 1;
//   }
//   return count;
// }

// int* get_ones_array(int n) {
//   int* ans = new int[n + 1];
//   for (int i = 0; i <= n; i++) {
//     ans[i] = count_ones(i);
//   }
//   return ans;
// }

// int main() {
//   int n = 5;
//   int* ans = get_ones_array(n);
//   for (int i = 0; i <= n; i++) {
//     cout << ans[i] << " ";
//   }
//   cout << endl;
//   delete[] ans;
//   return 0;
// }



// for an Armstrong Number

int main() {
 int n;
  cin>>n; 
  int sum=0;
  int num=n;
  while(num>0){
 
  int  digit=num%10;
    num/=10;
    sum+=pow(digit,3);
  }
  if(sum==n) cout << "This is a Armstrong Number";
    else cout << "Not a Armstrong Number";
}
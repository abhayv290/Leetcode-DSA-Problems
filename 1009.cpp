//Complement of base 10 interger

#include<iostream>
using namespace std;
int bitwise(int n){
    int m=n;
    int mask=0;
    if(n==0){
        return 1;
    }
    while(m!=0){
        mask=(mask<<1)|1;
        m=m>>1;

    }
    int ans = (~n) & mask;
    return ans;
}
int main(){
    int n=5;
    cout << bitwise(n);

    return 0;
}
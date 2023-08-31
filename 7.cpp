// Array reversal 



#include<iostream>



using namespace std;
int rev(int num){
    int ans=0,i=0;
    while(num!=0){
        int digit=num%10;
        ans = (ans * 10) + digit;
        num = num / 10;

    }
    return ans;
}
int main(){
    int num = 123;
    
    cout << rev(num);
    return 0;
}
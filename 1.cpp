// Power of two


#include<iostream>
#include<math.h>
using namespace std;
int poweroftwo(int num){
    for (int i = 0; i < 31;i++){
        int  ans=pow(2,i);
        if (ans==num)
            return true;
    }
    return false;
}

// 0 for false and 1 for true
int main(){
    int num;
    cin >> num;
    
    cout << poweroftwo((num));

    return 0;
}
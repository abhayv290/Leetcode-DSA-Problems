#include <iostream>
using namespace std;

//bad practices  
  
int& fun(int n){  // Gives warning
    int num = n;
    int& j = num;
    return j;
}
int* func(int n)   {    //Gives Warnining
    int num = n;
    int* j = num;
    return j;
}



/// update function
void update(int& a){
    a++;
}

int main()
{

    int a = 5;
    int &b = a;  // Inisiliazation of an reference variables
    cout << a << endl;
    update(a);
    cout <<a<<endl;
    cout << ++b << ++a << endl;
    return 0;
}
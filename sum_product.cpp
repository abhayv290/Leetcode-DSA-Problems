#include <bits/stdc++.h> 
long long int sumOrProduct(long long int n, long long int q)
{
	long int ans=1;
	if(q==1){
		ans=(n*n+1)/2;
	}
	else{
                for (int i = 1; i <= n; i++) {
                  ans = ans * i;
                }
        }
                return ans;
}
int main(){
                int q,;
                cin >> q;

}
               
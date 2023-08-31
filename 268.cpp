#include <iostream>
using namespace std;

int missingNumber(vector<int> &nums)
{

    sort(nums.begin(), nums.end());
    int ans;
    for (int i = 0; i <= nums.size(); i++)
    {
        if (i != nums[i])
        {
            ans = i;
            break;
        }
    }
    return ans;
}
int main(){

    int arr[3] = { 2, 3, 0;
    int ans = missingNumber(arr);
    cout << ans;
    return 0;
}

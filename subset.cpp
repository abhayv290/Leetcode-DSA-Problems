#include<vector>
#include<iostream>
using namespace std;

void solve(vector<int>nums, vector<int> output, int index, vector<vector<int>>& ans)
{
    // base  case
    if (index >= nums.size()) {
        ans.push_back(output);
        return;
    }
    // inclusion - just make the function to iterate only
    solve(nums, output, index + 1, ans);

    //Exclution with an extra output  array 
    int element = nums[index];
    output.push_back(element);
    solve(nums, output, index + 1, ans);
}

vector<vector<int>> subsets(vector<int>& nums) {
    vector<vector<int>> ans;
    vector<int> output;
    int index = 0;
    solve(nums, output, index, ans);
    return ans;
}

int main() {
    vector<int> nums = {1,2,3};

    cout << subsets(nums) << endl;
}
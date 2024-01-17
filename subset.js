// let subsets = function (nums) {
//     let res = [[]];
//     for (const num of nums) {
//         const newRes = [];
//         for (const sol of res) {
//             newRes.push([...sol, num])
//         }
//         res = [...res, ...newRes];
//     }

//     return res;
// };

function solve(nums, idx, arr, ans) {
    //base case
    if (idx >= nums.length) {
        ans.push(arr);
        return;
    }
    //exc
    solve(nums, idx + 1, arr, ans);

    let el = nums[idx];
    arr.push(el);
    solve(nums, idx + 1, arr, ans);

}


function subset(nums) {
    let idx = 0;
    let arr = [];
    let ans = [[]];
    solve(nums, idx, arr, ans);
    return ans;
}



const nums = [1, 2, 3];
console.log(subset(nums));
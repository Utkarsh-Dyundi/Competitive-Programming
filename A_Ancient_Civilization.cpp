
#include<bits/stdc++.h>
using namespace std;

int smallestSubWithSum(vector<int> arr, int x)
{
    int n=arr.size();
    int curr_sum = 0, min_len = n + 1;
    int start = 0, end = 0;
    while (end < n) {
        while (curr_sum <x && end < n)
            curr_sum += arr[end++];

        while (curr_sum >= x && start < n) {
            if (end - start < min_len)
                min_len = end - start;

            curr_sum -= arr[start++];
        }
    }
    return min_len;
}

int main()
{
    int target;
    cin>>target;
    vector<int> nums;
   int x;
   while(cin>>x)
   nums.push_back(x);

   for(int i=0;i<nums.size();i++)
   cout<<nums[i]<<" ";
int n=nums.size();
   int ans=smallestSubWithSum(nums,target);
   if(ans>nums.size())
   cout<<0;
   else
   cout<<ans;
}
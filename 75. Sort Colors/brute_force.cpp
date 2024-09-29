#include<iostream>
#include<vector>
using namespace std ;

//sorting aaray using bubble sort 
//TC-> O(N^2)
class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n = nums.size();
        for(int i = 0 ; i < n ; i++){
            for(int j = 0 ; j < n-1-i ; j++){
                if(nums[j] > nums[j+1]){
                    swap(nums[j],nums[j+1]);
                }
            }
        }
    }
};

int main(){
    vector<int>arr = {1,2,0,0,2,1,2,0,0,1};
    Solution array ;
    array.sortColors(arr);
    
    //after sorting 
    for(int i = 0 ; i < arr.size() ; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0 ;

}

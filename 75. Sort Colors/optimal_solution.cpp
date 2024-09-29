#include<iostream>
#include<vector>
using namespace std ;

// using Dutch National flag algorithm

class Solution {
public:
    void sortColors(vector<int>& nums) {
        int low = 0 ;
        int mid = 0 ;
        int high = nums.size()-1 ;
        while(mid <= high){
            if(nums[mid] == 0){
                swap(nums[mid],nums[low]);
                low++;
                mid++;
            }else if(nums[mid] == 1){
                mid++;
            }else{
                swap(nums[high],nums[mid]);
                high--;
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

#include<iostream>
#include<vector>
using namespace std ;
// we will count 0 , 1 and 2 and place it accordingly in sorted manner 
class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n = nums.size();
        int count0 = 0 ;
        int count1 = 0 ;
        int count2 = 0 ;
        for(int i = 0 ; i < n ; i++){
            if(nums[i] == 0){
                count0++;
            }else if(nums[i] == 1){
                count1++;
            }else{
                count2++;
            }
        }
        for(int i = 0 ; i < count0 ;i++){
            nums[i] = 0 ;
        }
        for(int i = count0 ; i < count0 + count1 ; i++){
            nums[i] = 1 ;
        }
        for(int i = count0 + count1 - 1 ; i < n ;i++){
            nums[i] = 2 ;
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


#include<iostream>
#include<vector>
#include<map>
#include<set>
#include<algorithm>
using namespace std ;

class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        vector<int> sortedArr = arr;  // Create a copy of the array
        sort(sortedArr.begin(), sortedArr.end());  // Sort the copied array

        // Map to store the rank of each unique element
        map<int, int> rankMap;
        int rank = 1;

        // Assign ranks to unique elements
        for (int i = 0; i < sortedArr.size(); i++) {
            if (rankMap.find(sortedArr[i]) == rankMap.end()) {
                rankMap[sortedArr[i]] = rank++;
            }
        }

        // Replace elements in the original array with their rank
        for (int i = 0; i < arr.size(); i++) {
            arr[i] = rankMap[arr[i]];
        }

        return arr;
    }
};

int main(){
    Solution arr;
    vector<int>vec ={37,12,28,9,100,56,80,5,12};
    arr.arrayRankTransform(vec);
    for(int i = 0 ; i < vec.size() ; i++){
        cout<<vec[i]<<" ";
    }
    cout<<endl;
}
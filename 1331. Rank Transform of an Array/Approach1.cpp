#include<iostream>
#include<vector>
#include<map>
#include<set>
using namespace std ;

class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {

        set<int>s(arr.begin(),arr.end());
        map<int,int>m;
        int rank = 1 ;
        for(auto i : s){
            m[i] = rank++;
        }
        for(int i = 0 ; i < arr.size() ; i++){
            arr[i] = m[arr[i]];
        }
        return arr ;
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
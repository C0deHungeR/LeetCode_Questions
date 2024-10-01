#include<iostream>
#include<vector>
#include<string>
using namespace std ;

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string s = strs[0];
        string ans ;
        for(int i = 0 ; i < strs[0].length() ; i++){
            bool match = true ;
            char ch = strs[0][i];
            for(int j = 1 ; j < strs.size() ; j++ ){
                if(strs[j].size() < i || ch != strs[j][i]){
                    match = false ;
                    break ;
                }
            }
            if(match == false){
                break ;
            }else{
                ans.push_back(ch);
            }
        }
        return ans ;
    }
};
int main(){
    Solution arr ;
    vector<string>strs = {"coding","coder","codingnanjas"};
    string ans = arr.longestCommonPrefix(strs);
    cout<<ans<<endl;
    return 0 ;
    
}
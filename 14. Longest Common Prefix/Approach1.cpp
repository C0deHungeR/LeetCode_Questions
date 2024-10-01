#include<iostream>
#include<vector>
#include<string>
using namespace std ;

class TrieNode{
    public :
    int data ;
    bool isterminal ;
    int childcount ;
    TrieNode*children[26]; 


    TrieNode(int data){
        this->data = data ;
        this->isterminal = false ;
        this->childcount = 0 ;
        for(int i = 0 ; i < 26 ; i++){
            children[i] = nullptr ;
        }
    }
};

void insertString(TrieNode*root,string str){
    if(str.length() == 0){
        root->isterminal = true ;
        return ;
    }
    int index = str[0] - 'a';
    TrieNode*child ;
    if(root->children[index] != nullptr){
        child = root->children[index];
    }else{

       child =new TrieNode(str[0]);
       root->children[index] = child ;
       root->childcount++;
    }
    insertString(child,str.substr(1));
}

void findAns(TrieNode*root,string&ans,string s){
    if(s.length() == 0){
        return ;
    }
    int index = s[0] - 'a';
    if(root->children[index] != nullptr && root->childcount == 1 && root->isterminal == false){
        ans.push_back(s[0]);
    }else{
        return ;
    }
    findAns(root->children[index],ans,s.substr(1));

}

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        TrieNode*root = new TrieNode('-');
        for(int i = 0 ; i < strs.size() ; i++){
            insertString(root,strs[i]);
        }
        string ans = "";
        findAns(root,ans,strs[0]);
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
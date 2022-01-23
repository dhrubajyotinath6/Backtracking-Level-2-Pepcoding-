/*
https://www.pepcoding.com/resources/data-structures-and-algorithms-in-java-levelup/recursion-and-backtracking/lexicographical-numbers-official/ojquestion

https://leetcode.com/problems/lexicographical-numbers/

Input: n = 13
Output: [1,10,11,12,13,2,3,4,5,6,7,8,9]
Example 2:

Input: n = 2
Output: [1,2]
*/

class Solution {
    
    void dfs(int i, int n, vector<int> &ans){
        
        if(i > n ){
            
             return;
        }
        ans.push_back(i);
        for(int j = 0; j < 10; j++) dfs(10 * i + j, n, ans);
        
    }
public:
    vector<int> lexicalOrder(int n) {
        
        vector<int> ans;
        
        for(int i = 1; i <= 9; i++) dfs(i,n, ans);
        return ans;
    }
};
/*
https://www.pepcoding.com/resources/data-structures-and-algorithms-in-java-levelup/recursion-and-backtracking/coin-change-combinations-1-official/ojquestion

Sample Input
5
2
3
5
6
7
12


Sample Output
2-3-7-.
5-7-.
*/

class solution{

    void coinChange(int i, vector<int> &coins, int amount, int targetAmount, string ans){

        //BASE CASE
        if(i == coins.size()){
            if(amount == targetAmount) cout << ans;
        return;
        }
        coinChange(i + 1, coins, amount + coins[i], targetAmount, ans + to_string(coins[i]) + "-");
        coinChange(i + 1, coins, amount + 0, targetAmount, ans);
    }

    void question(vector<int> coins, int targetAmount){

        coinChange(0, coins, 0, targetAmount, "");
    }

};
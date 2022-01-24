/*
https://www.pepcoding.com/resources/data-structures-and-algorithms-in-java-levelup/recursion-and-backtracking/tug-of-war-official/ojquestion
*/
class solution{

    static int mini = INT_MAX;
    static string  ans = "";

    void solve(vector<int> arr, int ind, set<int> set1, set<int> set2, int sum1, int sum2){

        if(ind = arr.size(){
            int delta = Math.abs(sum1 - sum2);
            if(delta < mini){
                mini = delta;
                ans = set1 + " " + set2;
            }
        })

        /*
        For 6, (6 + 1)/2 =  3 -> so maximum we can add 3 elements
        For 7, ( 7 + 1)/2 = 4 -> so maximum we can store 4 elements
        */
        if(set1.size() < (arr.size() + 1)/2){
            set1.insert(arr[ind]);
            solve(arr, ind + 1, set1, set2, sum1 + arr[ind], sum2);
            set1.erase(set1.size() - 1);
        }

        if(set2.size() < (arr.size() + 1)/2){
            set2.insert(arr[ind]);
            solve(arr, ind + 1, set1, set2, sum1 , sum2 + arr[ind]);
            set2.erase(set2.size() - 1);
        }

    }
}
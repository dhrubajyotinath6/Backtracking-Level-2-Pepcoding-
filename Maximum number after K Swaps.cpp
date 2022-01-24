/*
https://www.pepcoding.com/resources/data-structures-and-algorithms-in-java-levelup/recursion-and-backtracking/largest-number-at-most-k-swaps-official/ojquestion
*/
class solution{

    // THERE CAN BE INBUILT SWAP FUNCTIONS FOR STRING . FOR INTEGER THERE IS
    string swap(string str, int i, int j){

        char ith = str[i];
        char jth = str[j];

        /*
        0   1   "2"   3   4   "5"   6   7
        A   B   "C"   D   E   "F"   G   H
        suppose c is ith charcter nd f is jth charcter

        so left = (0, 2)    middle = (3, 5-2-1) = (3, 2)  left= ( 6)
        */

        string left = str.substr(0,i);
        string middle = str.substr(i + 1, j - i -1);
        string right = str.substr( j + 1);

        return left + jth + middle + ith + right;
    }

    int findMaximum(string str, int k){

        int maxi = INT_MIN;

        maxi = max(maxi, stoi(str));

        //BASE CASE
        if(k == 0) return;

        for(int i = 0; i < str.length() - 1; i++){
            for(int j = i + 1; j < str.length(); j++){
                if(str[j] > str[i]){        --> number is passed as string and we r comparing string
                    str = swap(str, i, j);
                    findMaximum(str, k - 1);
                    str = swap(str, i, j);
                }
            }
        }
        return maxi;

    }
};
/*
https://www.pepcoding.com/resources/online-java-foundation/dynamic-programming-and-greedy/friends-pairing-official/ojquestion

void friendsPairing(int n)  --> n is no of friends


1. You are given a number n, representing the number of friends.
2. Each friend can stay single or pair up with any of it's friends.
3. You are required to print the number of ways in which these friends can stay single or pair up.
E.g.
1 person can stay single or pair up in 1 way.
2 people can stay singles or pair up in 2 ways. 12 => 1-2, 12.
3 people (123) can stay singles or pair up in 4 ways. 123 => 1-2-3, 12-3, 13-2, 23-1.

*/

class solution{

    static int counter = 1;

    void f(int i, int n, bool used[], string ans){

        //BASE CASE
        if(i > n){
            cout << counter << " . "<< ans << endl;
            counter++;
            return;
        }

        if(used[i] == true) f(i + 1, n, used, ans);
        else {
            used[i] = true;
            f(i + 1, n, used, ans + "(" + i ") ");

            for(int j = i + 1; j <= n; j++){
                used[j] = true;
                f(i + 1, n, used, ans + "(" + i + j + ") ");
                used[j] = false;
            }
            used[i] = false;
        }

    }

    void friendsPairing(int n){

        bool used[n+1] = {false};

        f(1, n, used, "");
    }

};





// https://www.pepcoding.com/resources/data-structures-and-algorithms-in-java-levelup/recursion-and-backtracking/abbreviation-suing-backtracking-official/ojquestion

/*
Sample Input
pep

Sample Output
pep
pe1
p1p
p2
1ep
1e1
2p
3

*/

#include <bits/stdc++.h>
using namespace std;

void func(string s, string ans, int count, int pos){

    if(pos == s.length()){

        if(count == 0) cout << ans << endl;

        else cout << ans << count << endl;

        return;
    }

    //if we pick
    if(count > 0) func(s, ans + to_string(count) + s[pos], 0, pos + 1);
    else func(s, ans + s[pos], 0, pos + 1);

    // Not picking it
    func(s, ans , count + 1, pos + 1);
}

int main(){

    func("pep", "", 0, 0);

    return 0;
}
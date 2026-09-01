class Solution {
public:

    vector<string> ans;

    bool isValid(string s) {
        int count = 0;

        for (char ch : s) {

            if (ch == '(')
                count++;
            else
                count--;

            if (count < 0)
                return false;
        }

        return count == 0;
    }

    void solve(string &s, int n) {

        // We have used 2*n brackets
        if (s.size() == 2 * n) {

            if (isValid(s))
                ans.push_back(s);

            return;
        }

        // Choose '('
        s.push_back('(');
        solve(s, n);
        s.pop_back();          // BACKTRACK

        // Choose ')'
        s.push_back(')');
        solve(s, n);
        s.pop_back();          // BACKTRACK
    }

    vector<string> generateParenthesis(int n) {

        string s = "";

        solve(s, n);

        return ans;
    }
};
//BEST SOLUTION POSSIBLE FOR BOTHHHHH

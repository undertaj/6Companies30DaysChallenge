class Solution {
public:
    int numberOfSubstrings(string s) {
        int n = s.length(), count = 0;
        if(s.find("c") == n-1) {
            for(int i = n-3, j = 3; i >= 0; i--, j++) {
                string sub = s.substr(i,j);
                int fa = sub.find("a"), fb = sub.find("b"), fc = sub.find("c");
                if(fa >= 0 && fa < i+j && fb >= 0 && fb < i+j && fc >= 0 && fc < i+j) {
                    return i+1;
                    
                }
            
            }
        }
        for(int i = 0; i < n-1; i++) {
            for(int j = 3; i+j-1 < n; j++) {
                string sub = s.substr(i,j);
                int fa = sub.find("a"), fb = sub.find("b"), fc = sub.find("c");
                if(fa >= 0 && fa < i+j && fb >= 0 && fb < i+j && fc >= 0 && fc < i+j) {
                    count+= (n - (i+j) + 1);
                    i++;
                    j = 2;
                }
            }
        }
        return count;
    }
};

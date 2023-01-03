class Solution {
public:
    string getHint(string secret, string guess) {
        int bulls = 0;
        for(int i = 0; i <secret.length(); i++) {
            if(secret[i] == guess[i]) {
            bulls++;
            secret.erase(i,1);
            guess.erase(i,1);
            i--;
            }
        }
        int cows = 0;
        for(int i = 0; i < secret.length() && guess != ""; i++) {
            int pp = guess.find(secret[i]);
            if(pp >= 0 && pp < guess.length()) {
                cows++;
                guess.erase(pp,1);
            }
        }
        return (to_string(bulls) + "A" + to_string(cows) + "B");
    }
};

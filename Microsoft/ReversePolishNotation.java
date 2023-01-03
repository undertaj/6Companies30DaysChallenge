import java.util.*;
import java.lang.*;
class Solution {
    public int evalRPN(String[] tokens) {
        int l = tokens.length;
        int a[] = new int[l], t = 0;
        for(int i = 0; i < l; i++) {
            String ccc = tokens[i];
            if(ccc.equals("+")) {
                int ans = a[t-1]+a[t-2];
                a[t-2] = ans;
                a[t-1] = 0;
                t-=1;
            }
            else if(ccc.equals("-")) {
                int ans = a[t-2]-a[t-1];
                a[t-2] = ans;
                a[t-1] = 0;
                t-=1;
            }
            else if(ccc.equals("*")) {
                int ans = a[t-1]*a[t-2];
                a[t-2] = ans;
                a[t-1] = 0;
                t-=1;
            }
            else if(ccc.equals("/")) {
                int ans = a[t-2]/a[t-1];
                a[t-2] = ans;
                a[t-1] = 0;
                t-=1;
            }
            else {
                int x = Integer.valueOf(ccc);
                a[t] = x;
                t++;
            }
        }
        return a[0];
    }
}

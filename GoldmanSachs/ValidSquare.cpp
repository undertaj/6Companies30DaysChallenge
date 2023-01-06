class Solution {
public:
    bool validSquare(vector<int>& p1, vector<int>& p2, vector<int>& p3, vector<int>& p4) {
        int dist1 = pow(abs(p1.at(0) - p2.at(0)),2) + pow(abs(p1.at(1) - p2.at(1)),2);
        int dist2 = pow(abs(p1.at(0) - p3.at(0)),2) + pow(abs(p1.at(1) - p3.at(1)),2);
        int dist3 = pow(abs(p1.at(0) - p4.at(0)),2) + pow(abs(p1.at(1) - p4.at(1)),2);
        int dist4 = pow(abs(p3.at(0) - p2.at(0)),2) + pow(abs(p3.at(1) - p2.at(1)),2);
        int dist5 = pow(abs(p4.at(0) - p2.at(0)),2) + pow(abs(p4.at(1) - p2.at(1)),2);
        int dist6 = pow(abs(p4.at(0) - p3.at(0)),2) + pow(abs(p4.at(1) - p3.at(1)),2);
        int a[6] = {dist1, dist2, dist3, dist4, dist5, dist6};
        sort(a,a+6);
        if(dist1 == 0){
            return false;
        }
        else if(a[0] == a[3] && a[4] == a[5] && a[5] == 2*a[0]){
            return true;
        }
        else return false;
    }
    
};

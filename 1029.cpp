/* Two City Scheduling */

class Solution {
    static bool comparotor(vector<int> &a, vector<int>&b){
        return a[1]-a[0] > b[1] - b[0];
    }
public:
    int twoCitySchedCost(vector<vector<int>>& cost) {
        int n = cost.size();
        sort(cost.begin(),cost.end(),comparotor);
        int res = 0;
        for(int i=0;i<n;i++){
            if(i>=n/2){
                res += cost[i][1];
            }
            else{
                res += cost[i][0];
            }
        }
        return res; 
    }
};

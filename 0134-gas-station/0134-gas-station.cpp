class Solution {
public:
//     O(n) Time   ||   O(1) Space
//     GREEDY APPROACH
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
       int gasSum  = accumulate(gas.begin(),gas.end(),0);
       int costSum = accumulate(cost.begin(),cost.end(),0);
        if(costSum>gasSum)
        {
            return -1;
        }
        int total =0,pos =0;
        for(int i = 0;i<gas.size();i++)
        {
            // total = total + (gas[i]-cost[i]);
            total += gas[i]-cost[i];
            if(total<0)
            {
                total = 0;
                pos = i+1;
            }
        }
    return pos;
    }
};
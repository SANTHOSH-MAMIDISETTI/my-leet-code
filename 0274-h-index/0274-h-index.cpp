class Solution {
//     O(nlogn) TIME
public:
    int hIndex(vector<int>& citations) {
        int count =0;
        sort(citations.begin(), citations.end(), greater<int>());
        for(int i=0;i<citations.size();i++)
        {
            if(citations[i]>i)
            {
                count++;
            }
        }
        return count;
    }
};
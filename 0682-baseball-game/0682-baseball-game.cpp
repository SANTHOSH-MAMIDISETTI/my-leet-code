class Solution {
public:
    int calPoints(vector<string>& operations) {
        vector<int> vec;
        for(auto i: operations) {
            if(i == "C") {
                if (!vec.empty()) {
                    vec.pop_back();
                }
            }
            else if(i == "D") {
                if (!vec.empty()) {
                    vec.push_back(2 * vec.back());
                }
            }
            else if (i == "+") {
                if (vec.size() >= 2) {
                    vec.push_back(vec[vec.size() - 1] + vec[vec.size() - 2]);
                }
            }
            else {
                vec.push_back(stoi(i));
            }
        }
        return accumulate(vec.begin(), vec.end(), 0);
    }
};

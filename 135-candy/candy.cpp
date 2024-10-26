// class Solution {
// public:
//     int candy(vector<int>& ratings) {
//         vector<int>candy(ratings.size(),1);
//         for(int i=1;i<ratings.size();i++)
//         {
//             if(ratings[i]>ratings[i-1])
//             {
//                 candy[i] = candy[i-1]+1;
//             }
//         }
//         for(int i=ratings.size()-2;i>=0;i--)
//         {
//             if(ratings[i]>ratings[i+1])
//             {
//                 candy[i] = max(candy[i],candy[i+1]+1);
//             }
//         }
//         return accumulate(candy.begin(), candy.end(), 0);
//     }
// };

class Solution {
public:
    int candy(vector<int>& ratings) {
        vector<int> minCandy(ratings.size(),1);
        for(int i=1; i<ratings.size(); i++)
        {
           if(ratings[i-1] < ratings[i])
           {
                minCandy[i] = minCandy[i-1]+1;
           }
        }

        for(int j = ratings.size()-2;j>=0;j--)
        {
            if(ratings[j]> ratings[j+1])
            {
                minCandy[j] = max(minCandy[j],minCandy[j+1]+1);
            }
        }
        return accumulate(minCandy.begin(),minCandy.end(),0);
    }
};

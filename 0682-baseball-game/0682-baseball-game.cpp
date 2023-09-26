// class Solution {
// public:
//     int calPoints(vector<string>& operations) {
//         stack<int> stack;
//         int sum=0;
//         for(int i=0;i<operations.size();i++)
//         {
//             if(operations[i]=="+")
//             {
//                 int one = stack.top();
//                 stack.pop();
//                 int two = stack.top();
//                 stack.pop();
//                 stack.push(one+two);
//                 sum +=one+two;
//             }
//             else if(operations[i]=="D")
//             {
//                 sum += 2*stack.top();
//                 stack.push(2*stack.top());
//             }
//             else if(operations[i]=="C")
//             {
//                 sum -= stack.top();
//                 stack.pop();
//             }
//             else{
//                 sum += stoi(operations[i]);
//                 stack.push(stoi(operations[i]));
//             }
//         }
//         return sum;
//     }
// };
class Solution {
public:
    int calPoints(vector<string>& ops) {
        stack<int> stack;
        int sum =  0;
        
        for (int i = 0; i < ops.size(); i++){
            if (ops[i] == "+"){
                int first = stack.top();
                stack.pop();
                
                int second = stack.top();
                
                stack.push(first);
                
                stack.push(first + second);
                
                sum += first + second;
            }
            
            else if (ops[i] == "D"){
                sum += 2 * stack.top();
                stack.push(2 * stack.top());
            }
            
            else if (ops[i] == "C"){
                sum -= stack.top();
                stack.pop();
            }
            
            else{
                sum += stoi(ops[i]);
                stack.push(stoi(ops[i]));
            }
        }
        
        return sum;
    }
};
class Solution {
public:
    string triangleType(vector<int>& nums) {
        int a = nums[0], b = nums[1], c = nums[2];
        if (a + b <= c || a + c <= b || b + c <= a) return "none";
        if (a == b && b == c) return "equilateral";
        if (a == b || b == c || a == c) return "isosceles";
        return "scalene";
    }
};
// To determine the type of triangle, we first check if the three sides can form a valid triangle. According to the triangle inequality theorem, for any three lengths to form a triangle, the sum of any two sides must be greater than the third. So, we check all three combinations: a + b > c, a + c > b, and b + c > a. If any of these fail, the sides do not form a triangle, and we return "none".

// If the triangle is valid, we check the equality of the sides. If all three sides are equal, it's an equilateral triangle. If exactly two sides are equal, it's an isosceles triangle. If all sides are different, it's a scalene triangle.

// Sorting is not needed because we only have three fixed inputs, so direct comparisons are simpler and more efficient.

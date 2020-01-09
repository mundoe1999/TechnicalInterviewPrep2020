class Solution {
public:
    vector<int> sortedSquares(vector<int>& A) {
        for(int i = 0; i < A.size(); i++){
            A[i] = std::pow(A[i],2);
        }
        
        std::sort(A.begin(), A.end());
        return A;
    }
};
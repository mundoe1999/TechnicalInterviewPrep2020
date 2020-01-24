#include <vector>
using namespace std;

struct TreeNode
{
  int val;
  TreeNode* left;
  TreeNode* right;
};

class Solution {
public:
    vector<vector<int>> res;
    void helper(TreeNode* root, int sum, int curr, vector<int>& path){
        if(root != NULL){
            int val = root->val;
            curr += val;
            path.push_back(val);

            // Travel until a child has been reached
            helper(root->left, sum, curr, path);
            helper(root->right,sum, curr, path);
            
            // Check if sums are equal and are leaf
            if((root->left == NULL && root->right == NULL) && curr == sum){
                res.push_back(path);
            }
            
            
            path.pop_back();
        }

    }
    vector<vector<int>> pathSum(TreeNode* root, int sum) {
        vector<int> path;
        helper(root, sum, 0, path);
        return res;
    }
};
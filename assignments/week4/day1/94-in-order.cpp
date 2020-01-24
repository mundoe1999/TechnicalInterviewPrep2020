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
        void helper(TreeNode* root, vector<int> & v){
        if(root != nullptr){
            helper(root->left, v);
            v.push_back(root->val); 
            helper(root->right, v);
            
        }

    }
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> res;
        helper(root, res);
        return res;   
    }
};
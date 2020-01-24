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
        if(root != NULL){
            v.push_back(root->val); 
            helper(root->left, v);
            helper(root->right, v);
            
        }

    }
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> res;
        helper(root, res);
        return res;
        
    }
};
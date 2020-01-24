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
            helper(root->left, v);
            helper(root->right, v);
            v.push_back(root->val); 
            
        }

    }
    vector<int> postorderTraversal(TreeNode* root) {
             vector<int> res;
        helper(root, res);
        return res;   
    }
};
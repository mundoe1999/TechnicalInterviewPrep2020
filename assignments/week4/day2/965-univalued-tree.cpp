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
    bool helper(TreeNode* root, int val){
        if(root != NULL){
            if(root->val == val)
                return helper(root->left, val) && helper(root->right,val);
            return false;
        }
        return true;
    }
    bool isUnivalTree(TreeNode* root) {
        return helper(root, root->val);
    }
};
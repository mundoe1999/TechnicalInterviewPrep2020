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
    TreeNode* helper(TreeNode* t1, TreeNode* t2){
        if(t1 == NULL)
            return t2;
        if(t2 == NULL)
            return t1;
        
        t1->val = t1->val + t2->val;
        t1->left = helper(t1->left,t2->left);
        t1->right = helper(t1->right, t2->right);
        
        return t1;
        
    }
    TreeNode* mergeTrees(TreeNode* t1, TreeNode* t2) {
        return helper(t1,t2);
    }
};
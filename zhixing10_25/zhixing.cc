/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
//LeetCode 938 二叉搜索树的范围和
//给定二叉搜索树的根结点 root，返回 L 和 R（含）之间的所有结点的值的和。
//二叉搜索树保证具有唯一的值。
class Solution {
public:
    int rangeSumBST(TreeNode* root, int L, int R) {
      if(root == NULL)
        {
            return 0;
        }
      if(root->val > R)
        {
            return rangeSumBST(root->left, L, R);
        } 
      else if(root->val < L)
        {
            return rangeSumBST(root->right, L, R);
        } 
      else 
        {
            return root->val + rangeSumBST(root->left, L, R) + rangeSumBST(root->right, L, R);
        }
    }
};


//LeetCode 709 转换成小写字母
//实现函数 ToLowerCase()，该函数接收一个字符串参数 str，
//并将该字符串中的大写字母转换成小写字母，之后返回新的字符串。
//解法一
class Solution {
public:
    string toLowerCase(string str) {
        for(int i = 0;i < str.size();++i)
        {
            if(str[i] >= 'A' && str[i] <= 'Z')
                str[i] += 32;
        }
        return str;
    }
};

//解法二
//用位运算的技巧就行了。。。
//大写变小写、小写变大写 : 字符 ^= 32;
//大写变小写、小写变小写 : 字符 |= 32;
//小写变大写、大写变大写 : 字符 &= -33;

class Solution {
public:
    string toLowerCase(string str) {
        for(auto &i : str){
            i |= 32;
        }
        return str; 
    }
};

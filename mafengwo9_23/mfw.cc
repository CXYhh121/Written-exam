//re meng chengshi paihangban
//#include <iostream>
//#include <map>
//#include <string>
//#include <vector>
//
//using namespace std;
//
//bool cmp(vector<pair<string,int>> a,vector<pair<string,int>> b)
//{
//    if(a.second == b.second)
//        return a.first < b.first;
//    else
//        return a.second > b.second;
//}
//
//int main()
//{
//    string str;
//    while(cin >> str)
//    {
//        map<string,int> mp;
//        int pos,start;
//        do{
//            start = str.find(start,'-');
//            pos = str.find(pos,' ');
//            string ret = str.substr(start,pos);
//        }while(pos <= str.size() && start <= str.size());
//
//        vector<pair<string,int>> v;
//        for(auto it = mp.begin();it != mp.end();++it)
//            v.push_back(pair<string,int>(it->first,it->second));
//        sort(v.begin(),v.end(),cmp);
//        for(int i = 0;i < 3; ++i)
//        {
//            cout << v[i].first << " " << v[i].second << endl;
//        }
//    }
//    return 0;
//}
//


/*
struct TreeLinkNode {
    int val;
    struct TreeLinkNode *left;
    struct TreeLinkNode *right;
    struct TreeLinkNode *father;
    TreeLinkNode(int x) :val(x), left(NULL), right(NULL), father(NULL) {

    }
};
*/

class Solution {
public:
    TreeLinkNode* GetNext(TreeLinkNode* pNode)
    {
        if(pNode==NULL)
            return NULL;
        TreeLinkNode* rNode=NULL;
        TreeLinkNode* nextNode=NULL;
        //情况1、
        //右子树存在
        if(pNode->right)
        {
            rNode=pNode->right;
            //找到最左边的节点
            while(rNode->left)
                rNode=rNode->left;
            nextNode=rNode;
        }
        else if(pNode->next)
        {
            //parent标记pNode的父亲节点
            TreeLinkNode* parent=pNode->father;
            TreeLinkNode* pCur=pNode;
            nextNode=pNode;
            //如果pNode是他父亲节点的右子树，一直往上找，
            while(parent && pCur==parent->right)
            {
                pCur=parent;
                parent=pCur->father;
            }
            //此时pCur有两种可能
            //1、是其父亲节点的左孩子
            //2、是根节点，说明是中序遍历的最后一个节点，它的父亲节点为空
            nextNode=parent;
        }
        return nextNode;
    }
};

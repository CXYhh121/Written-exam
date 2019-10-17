#include <iostream>
#include <string>
#include <algorithm>

using namespace std;
 
int fun(string s1,string s2)
{
    set<char> s;
    for(auto it : s1)
    {
        if(s.count(it) == 0)
        {
            s.insert(it);
        }
        else
        {
            return 0;
        }
    }
    for(auto it : s2)
    {
        if(s.count(it) == 0)
        {
            s.insert(it);
        }
        else
        {
            return 0;
        }
    }
    int ans = s1.length()*s2.length();
    return ans;
}
 
int main()
{
    string str;
    getline(cin,str);
    vector<string> v;
    //分割字符串得到单词
    for(int i = 0; i < str.length(); i++)
    {
        if(str[i] == '"')
        {
            string word = "";
            i++;
            while(str[i] != '"')
            {
                word += str[i];
                i++;
            }
            //cout << word << endl;
            v.push_back(word);
        }
    }
    //暴力破解
    int ans = 0;   //输出结果
    for(int i = 0; i < v.size(); i++)
    {
        for(int j = i+1; j < v.size(); j++)
        {
            ans = max(ans,fun(v[i],v[j]));
        }
    }
    cout << ans << endl;
    return 0;
}



#include<iostream>

using namespace std;
int main()
{
    int n, i = 1, count = 1;
    cin >> n;
    while(count < n)
    {
       i++;                     //i相当于层数，可想象成杨辉三角那种形状
       count += i;
    }
    cout << i << endl;
    return 0;
}

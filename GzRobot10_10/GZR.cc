#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    vector<int> a;
    string s;
    cin >> s;
    int cur=0, sign = 1;
    for (int i = 0; i < s.size(); i++)
    {
        if (!isdigit(s[i]))
        {
            a.push_back(cur * sign);
            cur = 0;
            sign = 1;
        }
        else
            cur = cur * 10 + s[i] - '0';
    }
    a.push_back(cur * sign);
    sort(a.begin(),a.end());
    for(int i = 1;i < a.size();i++)
    {
        if(a[i]-a[i-1] > 1)
        {
            cout << a[i-1] + 1 << endl;
            return 0;
        }
    }
    return 0;
}



//#include <iostream>
//#include <string>
//#include <algorithm>
//
//using namespace std;
// 
//int main(){
//    string s,s1,s2;
//    cin>>s;
//    int p = s.find(',');
//    s1 = s.substr(0,p);
//    s2 = s.substr(p+1);
//    int Max = 0, m=s1.size(), n=s2.size();
//    int dp[m+1][n+1];
//    for(int i=0;i<m;i++)
//        for(int j=0;j<n;j++){
//            if(s1[i]==s2[j])
//                dp[i+1][j+1] = dp[i][j] + 1;
//            else
//                dp[i+1][j+1] = 0;
//            if(dp[i+1][j+1] > Max)
//                Max = dp[i+1][j+1];
//        }
//    cout<<Max<<endl;
//    return 0;
//}

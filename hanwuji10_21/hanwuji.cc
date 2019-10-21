//给定两个长度为N的整型数组A和B。如果Ai==Bj则认为（i，j）为最佳配对。
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
int main(){
    int n;
    cin >> n;
    vector<int> arr1(n,0),arr2(n,0);
    for(int i=0;i<n;i++)
        cin >> arr1[i];
    for(int i=0;i<n;i++)
        cin >> arr2[i];
    sort(arr1.begin(),arr1.end());
    sort(arr2.begin(),arr2.end());
    int i=0,j=0,ans=0;
    while(i<n && j<n){
        if(arr1[i]==arr2[j]){
            i++;
            j++;
            ans++;
        }
        else if(arr1[i]<arr2[j])
            i++;
        else
            j++;
    }
    ans == n ? ans--:ans++;
    cout << ans << endl;
    return 0;
}


//给定一个仅由小写字母组成的字符串。
//现在请找出一个位置，删掉那个字母之后，字符串变成回文。
//请放心总会有一个合法的解。如果给定的字符串已经是一个回文串，那么输出-1。
//#include <iostream>
//using namespace std;
//int main(void){
//    string s;
//    int T;
//    cin>>T;
//    while(T--){
//        cin>>s;
//        string r(s.rbegin(), s.rend());
//        int i, len = s.length(), res = -1;
//        for(i = 0; i < len; ++i){
//            if(s[i] != r[i]){
//                res = (s[i] == r[i+1]) ? len-i-1 : i;
//                break;
//            }
//        }
//        cout<<res<<endl;
//    }
//    return 0;
//}

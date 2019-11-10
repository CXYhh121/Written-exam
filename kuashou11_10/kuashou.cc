//对字符串进行RLE压缩，将相邻的相同字符，用计数值和字符值来代替。例如：aaabccccccddeee，则可用3a1b6c2d3e来代替。
//解法一
#include <iostream>
#include <string>

using namespace std;

int main()
{
    string str;
    while(cin >> str)
    {
        int a = 1;
        for(int i = 1;i<str.size();i++)
        {
            if(str[i]==str[i-1])
            {
                a++;
            }
            else
            {
                cout << a << str[i-1] ;
                a = 1;
            }
        }
        cout << a << str[str.size()-1] << endl;
    }
    return 0;
}

//
//#include <iostream>
//#include <string>
//#include <map>
// 
//using namespace std;
// 
//int main()
//{
//    string str;
//    while(cin >> str)
//    {
//        map<char,int> countmap;
//        for(auto e : str)
//
//
//
//
////解析加减法运算
////输入字符串："1+2+3" 输出："6"
////输入字符串："1+2-3" 输出："0"
////输入字符串："-1+2+3" 输出："4"
////输入字符串："1" 输出："1"
////输入字符串："-1" 输出："-1"
//
//#include <bits/stdc++.h>
//using namespace std;
// 
//int main(){
//    int ans=0,i=0,start=0,end=0;
//    bool plus=true;
//    string str;
//    cin>>str;
//    if(str[0]=='-'){
//        end++;
//        start++;
//        plus=false;
//    }
//    while(i<=str.size()){
//        if(str[i]=='-'||str[i]=='+'||i==str.size())
//            end=i;
//        if(end>start){
//            int num=stoi(str.substr(start,end-start));
//            if(start>=1)
//                plus = str[start-1]=='+';
//            ans= plus==true ? ans+num:ans-num;
//            start=end+1;
//        }
//        i++;
//    }
//    cout<<ans;
//    return 0;
//}
//
//
//
////一个非空整数数组，选择其中的两个位置，使得两个位置之间的数和最大。
////如果最大的和为正数，则输出这个数；如果最大的和为负数或0，则输出0
////解法一
//
//#include <bits/stdc++.h>
//using namespace std;
//int main(){
//    int n,sum,maxsum=0;
//    vector<int> arr;
//    arr.reserve(10000);
//    while(scanf("%d,",&n)>0)
//        arr.push_back(n);
//    sum=arr[0];
//    maxsum=max(sum,maxsum);
//    for(int i=1;i<arr.size();i++)
//        if(sum+arr[i]<0)
//            sum=0;
//        else{
//            sum+=arr[i];
//            maxsum=max(maxsum,sum);
//        }
//    cout<<maxsum;
//    return 0;
//}
//
//
//
//
//
////解法二
//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//int calcSum(vector<int>& array){
//    if (array.size() == 0)
//        return 0;
//    int max_arr = array[0];
//    int max_step = array[0];
//    for (int i = 1; i < array.size(); i++){
//        max_step = max(max_step + array[i], array[i]);
//        max_arr = max(max_arr, max_step);
//    }
//    return max_arr > 0 ? max_arr : 0;
//}
//int main(){
//    vector<int> array;
//    int num;
//    while (scanf("%d,", &num) != EOF){
//        array.push_back(num);
//    }
//    cout << calcSum(array) << endl;
//    return 0;
//}
//


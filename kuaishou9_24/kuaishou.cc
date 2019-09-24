//zhezhi
#include <iostream>
#include <string>
#include <vector>
using namespace std;

void Solve(int n,string str,vector<string>& v)
{
    if(n == 0)
        return;
    Solve(n-1,"up",v);
    v.push_back(str);
    Solve(n-1,"down",v);
}

int main()
{
    int n;
    while(cin >> n)
    {
        vector<string> v;
        Solve(n,"down",v);
        for(int i = 0;i < v.size();++i)
        {
            cout << v[i] << endl;
        }
    }
    return 0;
}




//kuaishou banbenhaobijiao
//1.10.9     1.8.9
//3.3.1      5.10.0
//#include <iostream>
//#include <string>
//#include <vector>
//
//using namespace std;
//
//void Getintv(string str,vector<int>& v)
//{
//    string ret = "";
//    int j = 0;
//    for(int i = 0;i < str.size();++i)
//    {
//        if(str[i] == '.')
//        {
//            v[j++] = atoi(ret.c_str());
//            ret = "";
//        }
//        else{
//            ret += str[i];
//        }
//    }
//    v[j++] = atoi(ret.c_str());
//}
//
//int main()
//{
//    string str1,str2;
//    while(cin >> str1 >> str2)
//    {
//        vector<int> v1(4);
//        vector<int> v2(4);
//        Getintv(str1,v1);
//        Getintv(str2,v2);
//        
//        for(int i = 0;i :< v1.size();++i)
//        {
//            if(v1[i] > v2[i])
//            {
//                cout << str1 << endl;
//                break;
//            } 
//            else if(v1[i] < v2[i])
//            {
//                cout << str2 << endl;
//                break;
//            }
//        }
//    }
//    return 0;
//}




//kuaishou  zhaochu youxushuzu zhong quedeshu

//#include <iostream>
//#include <string>
//#include <vector>
//
//using namespace std;
//
//int BinSearch(vector<int>& v,int left,int right)
//{
//    int mid = left + ((right-left) >> 1);
//    int tmp = v[mid];
//    int key = (1 + n)/2;
//    while(left <= right)
//    {
//        if(tmp > key)
//            BinSearch(v,left,mid - 1);
//        else
//            BinSearch(v,mid,right);
//    }
//    return v[mid];
//}
//
//int main()
//{
//    int n;
//    while(cin >> n)
//    {
//        vector<int> v(n);
//        for(int i = 0;i < n;++i)
//        {
//            v.push_back(i);
//        }
//        int left = 0;
//        int right = v.size();
//        BinSearch(v,left,right);
//    }
//    return 0;
//}

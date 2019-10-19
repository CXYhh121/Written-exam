//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//int main()
//{
//    int n;
//    while(cin >> n)
//    {
//        vector<int> v(n,0);
//        v[0] = 1;
//        v[1] = 2;
//        for(int i = 2;i < n;++i)
//        {
//            v[i] = v[i - 1] + v[i - 2];
//        }
//        cout << v[n-1] << endl;
//    }
//    return 0;
//}
//


#include <iostream>
#include <string>

using namespace std;

int main()
{
    string str;
    while(cin >> str)
    {
        bool flag = false;
        for(int i = 0;i < str.size();++i)
        {
            if(str.find(str[i]) == str.find(str[i]))
            {
                flag = true;
                cout << str[i] << endl;
                break;
            }
        }
        if(i == str.size())
        {
            flag == false;
        }
    }
    return 0;
}

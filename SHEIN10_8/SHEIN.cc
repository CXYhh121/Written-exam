//jiefayi
//#include <iostream>
//#include <string>
//#include <algorithm>
//
//using namespace std;
//
//int main()
//{
//    string str;
//    while(getline(cin,str))
//    {
//        int i = 0,j = 0;
//        reverse(str.begin(),str.end());
//        while(i < str.size())
//        {
//            while(i < str.size() && str[i] == ' ')
//            {
//                ++i;
//                j = i;
//            }
//            while(i < str.size() && str[i] != ' ')
//            {
//                ++i;
//            }
//            reverse(str.begin()+j,str.begin()+i);
//        }
//        cout << str << endl;
//    }
//    return 0;
//}

//jiefaer
#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    string str;
    while(getline(cin,str))
    {
        reverse(str.begin(),str.end());
        int pos = 0,start = 0;
        do{
            pos = str.find(pos,' ');
            reverse(str.begin()+start,str.begin()+pos);
            start = pos + 1;
        }while(pos <= str.size() && start <= str.size());
        cout << str << endl;
    }
    return 0;
}

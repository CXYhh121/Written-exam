#include <iostream>
#include <vector>
#include <string>
using namespace std;


int main() {
    string str;
    while(cin >> str)
    {
        int i = 0;
        for(i = 0;i < str.size();++i)
        {
            if(str[i] >= '0' && str[i] <='9')
                continue;
            else
            {
                cout << "输入错误，请重新输入："<<endl;
                break;
            }
        }
        if(i == str.size())
        {
            vector<int> v(n,0);
            v[0] = 1;
            v[1] = 2;
            for(int i = 2;i < n;++i)
            {
                v[i] = v[i-1] + v[i-2];
            }
            cout << v[n-1] << endl;
        }
        
    }
    return 0;
}


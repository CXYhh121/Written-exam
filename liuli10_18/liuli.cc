#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> v1;
    vector<int> v2;
    int ret;
    while(cin >> ret)
    {
        v1.push_back(ret);
    }
    int size = v1.size();
    for(int  i = size/2-1;i < size;++i)
        v2.push_back(v1[i]);
    int count = 0;
    for(int i = 1;i < v2.size();++i)
    {
        if(v1[i] >= v2[i])
            count++;
    }
    cout << count << endl;
    return 0;
}

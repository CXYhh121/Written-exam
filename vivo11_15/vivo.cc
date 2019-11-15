//假设小v挖到了n（n<100）个矿石，每个矿石重量不超过100，为了确保一次性将n个矿石都运送出去，
//一旦矿车的车厢重量不一样就需要购买配重砝码。请问小v每次最少需要购买多少重量的砝码呢? （假设车厢足够放下这些矿石和砝码，砝码重量任选）
//背包问题，动归加上限制条件即可

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <iostream>
#include <algorithm>
#include <set>
using namespace std;

  
#define MAX_NUM 101
int solution(int n, int weight[]) {
    int sum = 0;
    for(int i = 0;i < n;i++)
        sum+=weight[i];
    bool f[110][10010];
    memset(f,0,sizeof(f));
    int a=0,b=0,mi=0,ans=0;
    a = (n+1)/2;
    b = (sum+1)/2;
    mi = 100000;
    ans = 0;
    f[0][0] = 1;
    for(int i = 0;i < n;i++){ 
        for(int j = sum;j >= weight[i];j--){
            for(int h = n;h >= 0;h--){
                if(f[h][j-weight[i]]){
                    f[h+1][j] = 1;
                    if(h+1==a){
                        if(abs(j-b) < mi){
                            mi = abs(j-b);
                            ans = j;
                        }
                    }
                }
            }
        }
    }
    return abs(sum-ans-ans);
}
  
int main()
{   
    string str("");
    getline(cin, str);
    int a[MAX_NUM];
    int i = 0;
    char *p;
    int count = 0;
      
    const char* strs = str.c_str();
    p = strtok((char *)strs, " ");
    while(p)
    {
        a[i] = atoi(p);
        count++;
        p = strtok(NULL, " ");
        i++;
        if(i >= MAX_NUM)
            break;
    }
      
    int result = solution(count, a);
    cout << result << endl;
    return 0;
}



//今年7月份vivo迎来了新入职的大学生，现在需要为每个新同事分配一个工号。人力资源部同事小v设计了一个方法为每个人进行排序并分配最终的工号，具体规则是：
//将N（N<10000）个人排成一排，从第1个人开始报数；如果报数是M的倍数就出列，报到队尾后则回到队头继续报，直到所有人都出列；
//最后按照出列顺序为每个人依次分配工号。请你使用自己擅长的编程语言帮助小v实现此方法。



//简单的约瑟夫环问题，注意其中设置一个永远增长的量count，还有自身的值，所以要用到结构体，存自身的值value和排队数数的值count
//进入循环前，初始化时veic【i】count都设置为0。在后面的每次循环中，veic[i] count++，
//如果veic[i] count%M ==0就把这个i这个数给灭掉，即veic.erase(veic.begin()+i)意思是消除第i个元素，然后i--，
//因为要把后面一个数会立马填充上来，填充掉这个位置。一直循环直到这个i=veic.size()时候停止
//#include <iostream>
//#include <string>
//#include <vector>
//#include <algorithm>
//
//using namespace std;
//
//struct A
//{
//    int val;
//    int count;
//};
//
//int main()
//{
//    int N, M;
//    cin >> N >> M;
//    vector<A> ivec;
//    for (int i = 1; i <= N; i++)
//    {
//        A a;
//        a.val = i;
//        a.count = 0;
//        ivec.push_back(a);
//    }
//    int count = 0;
//    while (ivec.size() > 1)
//    {
//        for(int i=0;i<ivec.size();i++)
//        {
//            count++;
//            ivec[i].count=count;
//            if ((ivec[i].count) % M == 0)
//            {
//                cout << ivec[i].val << " ";
//                ivec.erase(ivec.begin() + i);
//                i--;
//            }
//        }
//    }
//    cout << ivec[0].val << endl;
//
//    return 0;
//
//}

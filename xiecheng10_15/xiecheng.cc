//请使用random() 函数，生成 10个随机数，并对它进行降序排序 ，要求有效率。
//注意：不允许使用代码库提供的 sort() 之类现成的排序函数

#include <stdlib.h>
#include <stdio.h>

int main( )
{
    int i,j,temp;
    int a[100];
    int n;
    scanf("%d",&n);//随机数的个数
    for(i = 0; i < n;i++)
    {
        a[i]=rand()%100+1;//生成n个1-100内的随机数，并存入数组a
    }
       //将数组a冒泡降序排列
    for(i = 0; i < n-1;i++)
        for(j=0;j<n-i-1;j++)
        {
            if(a[j]<a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    for(i = 0; i < n;i++)
    printf("%d\n",a[i]);
    return 0;
}
//携程客户下单的时候系统会发放一个优惠券码，
//用户在前端界面看到的展现形式如下：“1Ct3r4ip_ti4C6k9Et^”，包含数字、字母、和 [\]^_’ 6个特殊字符。
//为了安全性，系统在使用的时候做解密操作，删除里面的数字部分，
//只验字母A~z以及[\]^_’ 6个特殊字符部分才是有效的，
//并且在解密后不会重新排序字母的顺序，按照之前的对应顺序排列。
#include <iostream>
#include <string>

using namespace std;
 
int main(){
    string s,t="";
    cin>>s;
    int n = s.length();
    for(int i=0;i<n;i++)
        if(s[i]<'0' || s[i]>'9'){
            if(s[i]=='$')
                t += '^';
            else
                t += s[i];
        }
    cout<<t<<endl;
 
    return 0;
}

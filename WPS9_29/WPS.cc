#include <iostream>
#include <bits/stdc++.h>
#include <stdio.h>

using namespace std;
int main()
{
    int len,i,j,ans,res3,res2,res1,res4,res5,res6;
    bool n,d,x;
    char s[1000];
    gets(s);
    len = strlen(s);
    n = d = x = 0;
    res3 = res4 = res5 = res6 = 0;
    j = -1;
    for(i=0;i<len;i++)
    {
        if('A'<=s[i]&&s[i]<='Z'&&d==0)
        {
            d=1;
        }
        if('a'<=s[i]&&s[i]<='z'&&x==0)
        {
            x=1;
        }
        if('0'<=s[i]&&s[i]<='9'&&n==0)
        {
            n=1;
        }
        if(i>=2)
        {
            if(s[i]==s[i-1]&&s[i]==s[i-2]&&s[i]==s[i+1]&&s[i]==s[i+2]&&i<len-2)
            {
                if(i-j>=3)
                {
                    res6++;
                }
        }
        if(s[i]==s[i-1]&&s[i]==s[i-2]&&s[i]==s[i+1]&&i<len-1)
        {
            if(i-j>=3)
            {
                res5++;
            }
        }
        if(s[i]==s[i-1]&&s[i]==s[i-2])
        {
            if(i-j>=3)
            {
                res3++;
                j=i;
            }
            res4++;
        }
        }
    }
    res2=0;
    res3=res3-res5;
    res5=res5-res6;
    if(d==0)    res2++;
    if(x==0)    res2++;
    if(n==0)    res2++;
    if(len<6)
    {
         res1=6-len;
         ans=max(res1,res3+res5+res6);
         ans=max(ans,res2);
    }
    else
    {
        if(len>20)
        {
            res1=len-20;
            //printf("%d %d\n",res1,res4);
            if(res1>=res4)
            {
                ans=res1+res2;
            }
            else
            {
                 if(res3>=res1)
                 {
                    if(res2<=(res3+res5+res6-res1))
                    {
                        ans=res3+res5+res6;
                    }
                    else
                    {
                        ans=res1+res2;
                    }
                 }
                 else
                 {
                    ans=res3;
                    res1=res1-res3;
                    for(;res1>0;)
                    {
                        if(res5>0&&res1>=2)
                        {
                            res1=res1-2;
                            res5--;
                            ans=ans+2;
                        }
                        if(res1==1)
                        {
                            ans++;
                            res1=0;
                        }
                        if(res1==2&&res5==0)
                        {
                            ans=ans+2;
                            res1=0;
                        }
                        if(res6>0&&res1>=3)
                        {
                            res1=res1-3;
                            res6--;
                            ans=ans+3;
                        }
                    }
                    if(res2<=res6+res5)
                    {
                        ans=ans+res6+res5;
                    }
                    else
                    {
                        ans=ans+res2;
                    }
                 }
            }
        }
        else
        {
            res1=0;
            ans=max(res1,res3+res5+res6);
            ans=max(ans,res2);
        }
    }
    printf("%d\n",ans);
    return 0;
}

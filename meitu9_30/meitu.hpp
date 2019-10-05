#include <iostream>
#include <stdio.h>
#include <algorithm>
  
struct my_list
{
    my_list *next;
    int value;
    my_list()
    {
        next = NULL;
        value = 0;
    }
};
 
 
class dynamic
{
    my_list *head;
    int arr[10000];
 
    void add_a_number(int n,int value)//在位置 n 添加一个数据，从 0 开始
    {
        int cal = 0;//计数
        my_list *it = new my_list;
        my_list *des = new my_list; des->value = value;
        my_list *_next = new my_list;
        for(it=head;cal<n;cal++)//it为代插入位置的上一个节点
            it = it->next;
        _next = it->next;
        if(_next == NULL)//插入到末尾
            it->next = des;
        else//在中间插入
        {
            it->next = des;
            des->next = _next;
        }
    } 
 
    void delete_a_number(int n)//在位置 n 删除一个数据
    {
        int cal = 0;//计数
        my_list *it = new my_list;
        my_list *des = new my_list;
        for(it=head;cal<n;cal++)//it为代插入位置的上一个节点
            it = it->next;
        des = it->next;//待删除位置
        if(des == NULL)
            printf("error:wrong index\n");
        else if(des->next == NULL)
        {
            delete(des);
            it->next = NULL;
        }
        else
        {
            it->next = des->next;
            delete(des);
        }
    }
     
    int get_nth_min(int n)//获取第 n 小的数据，从 0 开始
    {
        int cal = 0;//计数
        my_list *it = new my_list; it = head;
        while(it->next)//存放到数组里
        {
            arr[cal++] = it->next->value;
            it = it->next;
        }
        std::sort(arr,arr+n);
        return arr[n-1];
    }

    int get_nth_number(int n)//获取第 n 个数据，从 0 开始
    {
        int cal = 0;//计数
        my_list *it = new my_list; it = head;
        while(cal<n)//遍历链表
        {
            cal++;
            it = it->next;
        }
         
        return it->next->value;
    }
};


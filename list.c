#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;//用来存放具体的数
    //嵌套
    struct node *next;//存放下一个节点的地址
};

int main()
{
    struct node *head,*p,*q,*t;
    int n,a;//a用来存储值
    scanf("%d",&n);//输入多少个数
    head=NULL;//滞空
    for (int i = 1; i <= n; i++)
    {
        scanf("%d",&a);
        //申请一个空间存储节点
        p=(struct node*)malloc(sizeof(struct node));
        //存储data
        p->data=a;
        //节点的继后指针为空
        p->next=NULL;

        if(head==NULL)
          head=p;
        //如果不是第一个,让前一个节点的指针指向它
        else q->next=p;

        q=p;//指针q也指向节点
    }
    //输出
    t=head;
    while (t!=NULL)
    {
        printf("%d ",t->data);
        t=t->next;
    }

    //插入数字6
    t=head;//开始遍历
    scanf("%d",&a);//插入6
    //寻找t下一个节点的data比6大时，插入，及t->next->data>6
    while (t!=NULL)
    {
        if (t->next->data>=a)
        {
            p=(struct node*)malloc(sizeof(struct node));
            p->data=a;
            p->next=t->next;
            t->next=p;
            break;//退出循环
        }
        t=t->next;//下一个节点
    }
    
    //打印
    t=head;
    while (t!=NULL)
    {
        printf("%d ",t->data);
        t=t->next;
    }
    return 0;

}
/*
队列解密
*/
#include <stdio.h>
int main()
{
    int q[101]={0,6,3,1,7,5,8,9,2,4};//定义一个数组来储存
    int head=1;//记录首个元素
    int tail=10;//记录队尾的后一个元素,这样两个变量重合时为空，也方便数的转移
    while (head!=tail)//队列有元素时执行(不为空队列时)
    {
        //打印头元素
        printf("%d ",q[head]);
        //出队
        head++;

        //加到队尾
        q[tail]=q[head];
        tail++;
        //出队
        head++;
    }
    //结构体封装
    struct 
    {
        int data[101];
        int head1;
        int tail1;
    }queue;

    int n;
    scanf("%d",&n);
    int i;
    for (i = 1; i <= n; i++)
    {
        scanf("%d",&queue.data[i]);
    }
    queue.head1=1;
    queue.tail1=i;// =n+1
    //后面和前面同理
    while (queue.head1!=queue.tail1)
    {
        printf("%d ",queue.data[queue.head1]);
        queue.head1++;
        queue.data[queue.tail1]=queue.data[queue.head1];
        queue.tail1++;queue.head1++;
    }
    
    return 0;
}
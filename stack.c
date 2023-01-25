/*
栈
*/

#include<stdio.h>
#include<string.h>

int main()
{
    char a[101];//键盘读入字符串
    char s[101];//栈

    /*
    计算长度,从a[1]开始记录(方便)
    例如，输入yxcxy||yxccxy
    a[1]=y
    a[2]=x
    a[3]=c
    a[4]=x
    a[5]=y
    */
    gets(a+1);
    int len=strlen(a+1);//len=5,6

    //栈的初始化
    int top=0;
    //中间值，这里是3
    int mid=(len+1)/2;//mid=3
    //将前一半yxc存入栈中
    int i = 1;
    for (; i <= mid ; i++)
    {
        s[i]=a[i];
    }
    /*
    s[1]=y
    s[2]=x
    s[3]=c
    */
    top=mid;//存到栈里面三个数

    //奇数和偶数的起始判断点不同
    i=(len%2)?mid:mid+1;

    //判断谁是回文
    for (; i <= len ; i++,top--)
    {
        if (a[i]!=s[top])
        {
            break;
        }
    }
    printf("%s",(top)?"no":"yes");
    return 0;
    
}
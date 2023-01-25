#include<stdio.h>

int main()
{
    int data[101],right[101];
    int n,t,len;
    scanf("%d",&n);//要输入多少个数
    for (int i = 1; i <= n; i++)
    {
        scanf("%d",data+i);
    }
    
    //初始化right
    for (int i = 1; i <= n; i++)
    {
        if (i!=n)
        {
            right[i]=i+1;
        }
        else right[i]=0;
    }
    
    len=n+1;//数组扩展一位，用于输入要插入的数
    //输入6
    scanf("%d",data+len);

    //开始遍历
    t=1;
    while (t!=0)//right[n]=0
    {
        if (data[right[t]]>=data[len])//data[right[3]]=8>6
        {
            right[len]=right[t];//right[10]=right[3]
            right[t]=len;//right[3]=10
            break;//跳出当前循环
        }
        t=right[t];//向后挪
    }
    
    //打印数组
    t=1;
    while (t!=0)
    {
        printf("%d ",data[t]);
        t=right[t];//向后挪
    }
    return 0;

}
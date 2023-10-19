#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main() {
    int num;
    printf("请输入键盘输入名单的人数：");
    scanf("%d", &num);

    // 创建名单数组
    char names[100][50];

    // 输入名单
    for (int i = 0; i < num; i++){
        printf("请输入第 %d 个人的姓名：", i + 1);
        scanf("%s", names[i]);
}

    // 生成随机数种子
    srand(time(0));

    // 随机选人
    int i;
    while(i==1);
{
	int randomIndex = rand() % num;
    printf("\n随机选取的人是：%s\n", names[randomIndex]);
    printf("是否继续y\n:");
    char c;
    
    c=getcher();
    scanf("c",&c);
    if(c=='y')
    	{
    		i=1;
		}
	if(c=='n')
}
    return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main() {
    int num;
    printf("�������������������������");
    scanf("%d", &num);

    // ������������
    char names[100][50];

    // ��������
    for (int i = 0; i < num; i++){
        printf("������� %d ���˵�������", i + 1);
        scanf("%s", names[i]);
}

    // �������������
    srand(time(0));

    // ���ѡ��
    int i;
    while(i==1);
{
	int randomIndex = rand() % num;
    printf("\n���ѡȡ�����ǣ�%s\n", names[randomIndex]);
    printf("�Ƿ����y\n:");
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

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
	int secret_number,guess,attempts = 0;
	
	srand(time(0));
	secret_number = rand()%100 + 1;
	
	printf("===��ӭ������������Ϸ��===\n");
	printf("===���Ѿ������һ��1��100�����֡�\n");
	
	do{
		printf("��������Ĳ²⣺");
		scanf("%d",&guess);
		attempts++;
		
		if(guess>secret_number){
			printf("̫���ˣ�\n");
		}
		else if(guess<secret_number){
			printf("̫С�ˣ�\n");
		}
		else{
			printf("��ϲ�㣡�¶��ˣ�\n");
			printf("��һ��������%d�Ρ�\n",attempts);
		}
	}while(guess!=secret_number);
	printf("��Ϸ�������ܰ���\n");
	system("pause");
	return 0;
 } 

#include<stdio.h>      				 //���J���Y�� 
#include<stdlib.h>
int main(void){
	int year;    					//�إ�int year�ܼ� 
	printf("�п�J�~��");
	scanf("%d",&year);				//��Jyear�ܼ� 
									//�P�_�O�_���|�~ ���O�����~ 
	if((year%4==00&&year%100!=0)|year%400==0) { 
				printf("�|�~");
			}
			else {
				printf("���~");
			}
			
}

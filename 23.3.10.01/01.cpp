#define _CRT_SECURE_NO_WARNINGS 1

//����һ��
#include <stdio.h>

int main()
{
	printf("Please Say:");
	printf("Hellow World!\n");//�⺯��������Ļ�ϴ�ӡ����Ҫ����ͷ�ļ�
	printf("%d\n",1000);//һ������-%d
	printf("%d\n", sizeof(char));//sizeof-�ؼ���-������-�������ͻ����ռ�ռ��С1
	printf("%d\n", sizeof(int));//sizeof-�ؼ���-������-�������ͻ����ռ�ռ��С4
	printf("%d\n", sizeof(short));//sizeof-�ؼ���-������-�������ͻ����ռ�ռ��С2
	printf("%d\n", sizeof(long));//sizeof-�ؼ���-������-�������ͻ����ռ�ռ��С4
	printf("%d\n", sizeof(long long));//sizeof-�ؼ���-������-�������ͻ����ռ�ռ��С8
	printf("%d\n", sizeof(float));//sizeof-�ؼ���-������-�������ͻ����ռ�ռ��С4
	printf("%d\n", sizeof(double));//sizeof-�ؼ���-������-�������ͻ����ռ�ռ��С8
	//������λbyte=8bit,sizeof(long)>=sizeof(int)��˫4
	// ��ͬ���͵�Ŀ���Ǻ���ѡ�����������
	//kb��mb��gb��tb��pb

	return 0;
}//��Ϊ������
//int�����������ͣ����� main��������һ�������п����ж��.C�ļ�����ֻ����һ��main����
//����+����+���У�ctrl+F5


//С����������������������
//55.5�����ȸ�����

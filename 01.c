#define _CRT_SECURE_NO_WARNINGS  1
#include <stdio.h>//��������stdioͷ�ļ���printf����������
//int a = 100;//ȫ�ֱ������ڴ�������
//
//int main()    //��������int������,һ����������ҽ���һ��main����
//{
//	printf("hello world\n");//�⺯��֮һ����������Ļ�ϴ�ӡ���ݣ�������������ÿ����������Ҫ��";",���ɺ��\nΪ����
//
//	printf("%d\n", 100);//��ӡһ������-%d
//
//	//�ؼ��ַ�"sizeof"���ڼ������ͻ��߱�����ռ�ռ�Ĵ�С
//	//�����ռ����ͣ���������ǰ��Ҫ�����ռ䴴���ռ���Ҫ�õ������ַ�
//	// char(�ַ���������)/short(������)/int(����)/long(��������)/long long(����������)
//	// float(�����ȸ�����)/double(˫���ȸ�����)
//	printf("%d\n", sizeof(int));//����int��ռ���ռ�
//
//
//	char ch = 't';//�����ַ����ͱ�����char������''�����ַ�
////����  �������� ��ֵ
//	int weight = 120;//��������-short/int/long/long long-ע��ռ��˷�
//	float toufachangdu = 0.5;//����������Ҳ����С��-float/double-ע�⾫��
//	double shengao = 1.73;
//	printf("%d\n", weight);//%d-����
//	printf("%f\n", toufachangdu);//%f-float
//	printf("%lf\n", shengao);//%lf-double
//
//    //�������з���/ȫ�ֱ���/�ֲ�����
//	int a = 10;//�ֲ������ڴ�������
//	printf("%d\n", a);//���ֲ�������ȫ�ֱ������ֳ�ͻ������£��ֲ�����
//
//	return 0;//������0һ��������
//}
int main()
{
	//scanf���������뺯��
	int a = 0;
	int b = 0;
	int sum = 0;
	scanf("%d %d", &a, &b);
	sum = a + b;
	printf("sum = %d\n", sum);








	return 0;
}

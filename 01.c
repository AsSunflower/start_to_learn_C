#include <stdio.h>//��������stdioͷ�ļ���printf����������


int main()    //��������int������,һ����������ҽ���һ��main����
{
	printf("hello world\n");//�⺯��֮һ����������Ļ�ϴ�ӡ���ݣ�������������ÿ����������Ҫ��";",���ɺ��\nΪ����

	//��������  ,char�ͣ�
	printf("%d\n", 100);//��ӡһ������-%d
	//�ؼ��ַ�"sizeof"���ڼ������ͻ��߱�����ռ�ռ�Ĵ�С
	//�����ռ����ͣ���������ǰ��Ҫ�����ռ䴴���ռ���Ҫ�õ������ַ�
	// char(�ַ���������)/short(������)/int(����)/long(��������)/long long(����������)
	// float(�����ȸ�����)/double(˫���ȸ�����)
	printf("%d\n", sizeof(int));//����int��ռ���ռ�
	char ch = 't';//�����ַ����ͱ�����char������''�����ַ�
//����  �������� ��ֵ
	int weight = 120;//��������ʹ��short/int/long/long longע��ռ��˷�
	float toufachangdu = 0.5;
	double shengao = 1.73;//����������Ҳ����С��ʹ��float/doubleע�⾫��
	printf("%d\n", weight);//%d-����
	printf("%f\n", toufachangdu);//%f-float
	printf("%lf\n", shengao);//%lf-double

	return 0;//������0һ��������
}
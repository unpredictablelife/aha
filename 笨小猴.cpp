#include <iostream>
#include <string>
using namespace std;
int main()
{
	string a;  //����һ���䳤�ַ���
	cin>>a;  //��������
	int maxn = 1;  //��ʼ����ĸ�������ִ���
	int minn =a.size();   //��ʼ����ĸ�����ٳ��ִ���

	for (char b:a)  //�����ַ���a�е�ÿ���ַ���ֵ������b
	{
		int time = 0;  //��ʼ��time
		for (char c:a)  //�����ַ���a�е�ÿ���ַ���ֵ������c
		{
			if (c == b)  //������ظ��ַ����ͽ�time+1
				time++;
		}
		if (time>=maxn)  //���time�ȵ�ǰ���ֵ���󣬾ͽ�maxn����Ϊtime
			maxn = time;
		if (time<=minn)  //���time�ȵ�ǰ��Сֵ��С���ͽ�minn����Ϊtime
			minn = time;
	}

	int sum = maxn - minn;
	//�����ֵ����Сֵ֮����Ϊsum
	//��ʵҲ���Բ���ר�Ŷ���һ������������Ϊ�˽�������д�ķ��㣬�ų�ʼ�����������
	int t = 0;

	//���sumΪ1��0�Ļ������������Ȳ����������ֲ��Ǻ���������Ĵ����ⲻ��������ֱ�������No Answer��
	if (sum==1||sum==0)
		cout << "No Answer\n0" << endl;
	else
	{
		if (sum == 2)  //����2Ҳ��Ҫר�Ŷ��壬���������forѭ���޷�������������ר���������
			cout << "Lucky Word\n" << maxn - minn << endl;
		else
		{
		    for (int x = 2; x < sum; x++)  //�ж��ǲ�������
		    {
			    if (sum%x == 0)  //���sum�ܱ�x��������t�趨Ϊ1������ѭ��
			    {
			    	t = 1;
				    break;
			    }

		    }

		    if (t == 0)  //���t=0��˵�����޷����������������Ϊ�����������Lucky Word��
			    cout << "Lucky Word\n" << maxn - minn << endl;
		    else  //���䲻����0���������Ǻ����������No Answer��
			    cout << "No Answer\n0" << endl;
	    }
	}
	getchar(); getchar();  //��ͣ����
	return 0;  //����Բ������
}


////Ѱ���ַ���
////KMP�㷨������˼·������ƥ���ǰ׺����Ѱ�ҵ����ƥ���׺�Ӵ������ƥ��ǰ׺�Ӵ�������һ��ֱ�Ӱ����߶��룬�Ӷ�ʵ��ģʽ���Ŀ����ƶ���
////
////1. ��ģʽ��Ԥ����������next����
////
////2. ������ѭ������������
////
////2.1.�Ƚ�������ģʽ�����ַ�
////
////2.2.������ֻ��ַ�����ѯnext���飬�õ�ƥ��ǰ׺����Ӧ�����ƥ��ǰ׺�Ӵ����ƶ�ģʽ������Ӧλ��
////
////2.3.�����ǰ�ַ�ƥ�䣬����ѭ��
//
//#include<stdlib.h>
//#include<iostream>
//#include<string>
//using namespace std;
//int main()
//{
//	string str1;
//	string str2;
//	int count;
//	while (cin >> str1>> str2)
//	{
//		//�����ַ�����ȫ��ȣ�����ַ���Ϊ1
//		if (str2 == str1)
//			count = 0;
//		//���ַ���������ȣ���ͷ��β��һ�ȶԣ����ȾͲ�ƥ�䣬ֱ�����-1
//		else if (str1.length() == str1.length())
//		{
//			for (int i = 0; i < str1.length(); )
//			{
//				if (str1[i] == str2[i])
//					i++;
//				else
//					count = -1;
//			}
//		}
//		//���ַ������Ȳ��ȣ������ַ���2�ȶԣ���ͬcount+1��ͬʱ�ȶ�Ϊ���ַ���1�����һλ��ֱ���ַ���1����
//		else
//		{
//			for (int i = 0; i < str1.length(); i++)
//			{
//				//��־λ����
//				for (int j = 0; j < str2.length(); j++)
//				{
//					//�ȶ�һ��
//					if (str2[j] == str1[j])
//						j++;
//					else{
//						str1[j++];
//					}
//				}
//				count += 1;	
//				if (str1[i] == str2[0])
//					i++;
//				else
//					str1[i++];
//			}
//			count += 1;
//		}
//	}
//	cout << count << endl;
//	system("pause");
//	return 0;
//}
//
//
//
//
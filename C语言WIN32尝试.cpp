
	
#include<stdio.h>
int main()
{
double number1=0.0;
double number2=0.0;
char operation=0;
a:
printf("��������Ҫ�����������ʽa+b����\n");
scanf("%lf%c%lf",&number1,&operation,&number2);
if(operation=='+')
{
printf("ͨ���ӷ����㣬�����ֵΪ��%lf\n",number1+number2);
}
else if(operation=='-')
{
printf("ͨ���������㣬�����ֵΪ��%lf\n",number1-number2);
}
else if(operation=='*')
{
printf("ͨ���˷����㣬�����ֵΪ��%lf\n",number1*number2);
}
else if(operation=='/')
{
if(number2==0)
{
printf("������ĸΪ������������:\n");
goto a;
}
else
{
printf("ͨ���������㣬�����ֵΪ��%lf\n",number1/number2);
}
}
else if(operation=='%')
{
if(number2==0)
{
printf("ȡģ��ĸΪ������������:\n");
goto a;
}
else
{
printf("ͨ��ȡģ���㣬�����ֵΪ��%ld\n",(long)number1%(long)number2);
}
}
else
{
printf("�����ʽ����ϵͳ���˳���");
}
returb 0;
}




	
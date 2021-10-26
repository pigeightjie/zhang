
	
#include<stdio.h>
int main()
{
double number1=0.0;
double number2=0.0;
char operation=0;
a:
printf("请输入需要计算的数（格式a+b）：\n");
scanf("%lf%c%lf",&number1,&operation,&number2);
if(operation=='+')
{
printf("通过加法运算，计算的值为：%lf\n",number1+number2);
}
else if(operation=='-')
{
printf("通过减法运算，计算的值为：%lf\n",number1-number2);
}
else if(operation=='*')
{
printf("通过乘法运算，计算的值为：%lf\n",number1*number2);
}
else if(operation=='/')
{
if(number2==0)
{
printf("除数分母为零请重新输入:\n");
goto a;
}
else
{
printf("通过除法运算，计算的值为：%lf\n",number1/number2);
}
}
else if(operation=='%')
{
if(number2==0)
{
printf("取模分母为零请重新输入:\n");
goto a;
}
else
{
printf("通过取模运算，计算的值为：%ld\n",(long)number1%(long)number2);
}
}
else
{
printf("输入格式错误，系统将退出！");
}
returb 0;
}




	
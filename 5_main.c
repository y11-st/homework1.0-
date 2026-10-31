//202610125311
//秦玉杰
#include <stdio.h>
int main()
{
float a;
float b;
char op;
scanf("%f %c %f",&a,&op,&b);
if (op=='+')
{printf("%.2f",a+b);  
}
else if (op=='-')
{printf("%.2f",a-b);
}
else if (op=='*')
{printf("%.2f",a*b);
}
else if (op=='/')
{if (b==0)
{printf("错误 除数不能为0");
}
else{ printf("%.2f",a/b);
}}
else {printf("错误 不支持的运算符\n");}
  return 0;
}

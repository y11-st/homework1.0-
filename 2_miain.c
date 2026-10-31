//202610125311
//秦玉杰
#include <stdio.h>
int main()
{float a;
printf("请输入您的值：");
scanf("%f",&a);
if (a==0)
{printf("零");
}
else if (a>0)
{printf("正数");
}
else{printf("负数");}
return 0;
}
//202610125311
//秦玉杰
#include <stdio.h>
int main()
{float a=-1;
printf("请输入您的成绩：");
scanf("%f",&a);
if (a>=90&&a<=100)
{printf("A");
}
else if (a>=80&&a<=89.99)
{printf("B");
}
else if (a>=70&&a<=79.99)
{printf("C");
}
else if(a>=60&&a<=69.99){
    printf("D");
}
else if (a>=0&&a<=59.99)
{printf("E");
  
}
else{printf("输入无效");}
return 0;
}
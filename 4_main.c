//202610125311
//秦玉杰
#include <stdio.h>
int main()
{float a=-1;
scanf("%f",&a);
if (a<0||a>100)
{printf("输入无效");
}
else if (a>=90)
{printf("A");
}
else if (a>=80)
{printf("B");
}
else if(a>=70){
    printf("C");
}
else if (a>=60)
{printf("D");
  
}
else{printf("E");}
return 0;
}
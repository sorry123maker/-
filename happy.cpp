#include <stdio.h>
int main()
{
char str[100]; 
int height;
printf("请大侠输入姓名：");
 scanf("%s", str);
 
 printf("请大侠输入身高(cm)：");
scanf("%d", &height);
printf("%s大侠，身高%dcm，骨骼惊奇，是百年难得一遇的人才，只要好好学习C语言，日后必成大器!\n", str, height);
 return 0;
}



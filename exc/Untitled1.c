#include <stdio.h>
int main(){
    // output
    printf("Hi");
    // zheng shu
    int a = 5;
    // xiao shu
    float b = 3.6;
    // chufa qu zheng
    float c = 5/3;
    // chufa qu yushu 
    float b = 5%3;
    // chufa chuxian xiaoshu
    float e = 1.0*5/3;
    // xiaoshu huan zhengshu(xiang xia qu zheng)
    float money =8.8;
    float banana = 3.5;
    int number = (int)(money/banana);
    // buy fruit
    
    
    float money;
    printf("How much do you have?\n");
    scanf("%f",&money);
    printf("How much the fruit it is?\n");
    float fruit;
    scanf("%f",&fruit);
    int number = (int)(money/fruit);
    float n = 1.0*number/2;
    printf("you can buy %.1f kg fruit",n);
    return 0;
}

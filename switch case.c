#include<stdio.h>
int main(){
    double a,b;
    char op;
    scanf("%lf %lf",&a ,&b);
    scanf(" %c",&op);
    switch(op){
        case'+':printf("%.6lf",a+b);
        break;
        case'-':printf("%.6lf",a-b);
        break;
        case'*':printf("%.6lf",a*b);
        break;
        case'/':
        if(b!=0){
            printf("%.6lf",a/b);}
            else{
            printf("undefined");}
            break;
            default:
            printf("invalid");
    }
    return 0;
}

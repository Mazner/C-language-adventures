/*Make a program that can calculate bhaskara*/

#include<stdio.h>
#include<math.h>

int main(){
    double a,b,c;

    printf("I'll calculate your second grade equation, tell me the values!\n");
    printf("ax^2+bx+c=0\nwhat's the value of a?>");
    scanf("%lf",&a);
    if(a!=0){
        printf("%.2lfx^2+bx+c=0\nNow, tell me the value of b>",a);
        scanf("%lf",&b);
        printf("%.2lf^2+%.2lfb+c=0 <<< that's the equation until the moment\nNow, tell me the value of c >",a,b);
        scanf("%lf",&c);
        printf("%.2lf^2+%.2lfb+%.2lf=0",a,b,c);

//calculating the delta and afterwards, the bhaskhara

        double delta=0;
        delta= (b*b-(4*a*c));
        if(delta <0){
            printf("There's no real root\n");
            return 0;
        }else if(delta == 0){
            printf("Delta is equal to 0, so there's one real root\n");
            printf("The root is> %lf",((-b)+(sqrt(delta)))/(2*a));
            return 0;
        }else{
            printf("Delta is bigger than 0 (%lf) so there's two roots!\n",delta);
            printf("First root is> %lf\n",((-b)+(sqrt(delta)))/(2*a));
            printf("Second root is> %lf\n",((-b)-(sqrt(delta)))/(2*a));
            return 0;
        }

    }else{
        printf("It's not a second grade equation!");
        return 0;
    }

return 0;
}
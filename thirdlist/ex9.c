/* Make a program that receives a number in cash, and return the most efficient number of
bank notes for that*/

#include<stdio.h>

int main(){
    int cashout;
    int count100=0,
        count50=0,
        count20=0,
        count10=0,
        count5=0,
        count2=0,
        count1=0;

    printf("how much dop you want to cashout?\n");
    printf("Avaible bank notes: 100,50,20,10,5,2,1\n");   
    scanf("%d",&cashout);

    while(cashout>0){
        if(cashout%100==0){
            count100++;
            cashout -= 100;
        }else if(cashout%50==0){
            count50++;
            cashout-=50;
        }else if(cashout%20==0){
            count20++;
            cashout-=20;
        }else if(cashout%10==0){
            count10++;
            cashout-=10;
        }else if (cashout%5==0){
            count5++;
            cashout-=5;
        }else if (cashout%2==0){
            count2++;
            cashout-=2;
        }
        else if (cashout%1==0){
            count1++;
            cashout-=1;
        }
//verifying if the algorithm has the most effective way of giving in the bank notes        

    }if(count20==3){
        count20-=3;
        count50++;
        count10++;
    }

    int flag=0;
    int counter=0;
    flag= (count20 /3);
    if(flag){
        counter=count20*20;
        if(counter%3==2){
            count20-=3;
            count50++;
            count10++;
            }
        }if(count10==2){
            count10-=2;
            count20++;
        }
/*Reset the flags, for the unities number verification*/        
    flag=0;
    counter=0;

    if(count2==3){
        count2-=3;
        count5++;
        count1++;
    }
    flag = (count2/3);
     if(flag){
         counter=count2*2;
         if(counter%3==2){
             count2-=3;
             count5++;
             count1++;
            }
        }
        if(count1==2){
                count1-=2;
                count2++;
        }    

    printf("%d notes of 100\n%d notes of 50\n%d notes of 20\n%d notes of 10\n",count100,count50,count20,count10);
    printf("%d notes of 5\n%d notes of 2\n%d notes of 1",count5,count2,count1);
return 0;
}
//
//  프밍 Ch_06.c
//  StudyAlgo
//
//  Created by IJ . on 2020/07/02.
//  Copyright © 2020 jun. All rights reserved.
//

#include <stdio.h>
//
//void draw_line(char ch, int len)
//{
//    int i;
//    for(i=0; i<len;i++)
//    {
//        printf("%c",ch);
//    }
//    printf("\n");
//}
//
//int main()
//{
//    int amount = 10;
//    int price = 1000;
//    int total = amount * price;
//
//    draw_line('-', 30);
//
//    printf("수량 단가 합계\n");
//
//    draw_line('*', 24);
//
//    printf("%d %d %d\n",amount,price,total);
//
//    draw_line('-', 30);
//}
//9주차4차시 끝


//int get_factorial(int num)
//{
//    int i;
//    int factorial = 1;
//
//    for( i=1; i<=num;i++)
//    {
//        factorial *=i;
//    }
//    return factorial;
//}
//
//void hi()
//{
//    printf("hi\n");
//    //리턴 값과 매개변수가 없는 함수
//}
//void print_sum(int count)
//{
//    int i;
//    int num;
//    int sum = 0;
//
//    printf("%d개의 정수를 입력하세요: ",count);
//
//    for(i=0;i<count;i++)
//    {
//        scanf("%d",&num);
//        sum += num;
//    }
//    printf("합계: %d\n",sum);
//}
//int main()
//{
//    int num;
//    int factorial = 1;
//    int i;
//
//    printf("정수를 입력해주세요: ");
//    scanf("%d", &num);
//
//    hi();
//
//    printf("%d ! = %d\n",num,get_factorial(num));
//
//
//    for(i=3;i<10;i+=2)
//    {
//        printf("i의 값: %d\n",i);
//        print_sum(i);
//    }
//
//    return 0;
//}

double get_area(double radius)
{
    const double PI = 3.14159265359;
    return PI * radius * radius;
}

int get_gcd(int x,int y)
{
    int r;
    while (y !=0) {
        r = x % y;
        x = y;
        y = r;
    }
    return x;
}

int main()
{
    int i;
    for(i=1;i<=5;i++)
    {
        printf("반지름이 %d일 때, Dnjsdml auswjr: %.2f\n",i,get_area(i));
    }
    
    int x,y;
    int gcd;
    
    while (1) {
        printf("정수 2개를 입력하세요(0이면 종료): ");
        scanf("%d %d",&x,&y);
        if(x==0 && y==0)break;
        gcd = get_gcd(x,y);
        printf("%d와 %d의 GCD: %d\n",x,y,gcd);
    }
    return 0;
}

//10주차 4차시 끝

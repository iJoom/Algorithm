//
//  프밍Ch_03.c
//  StudyAlgo
//
//  Created by IJ . on 2020/07/02.
//  Copyright © 2020 jun. All rights reserved.
//

#include <stdio.h>


//int main()
//{
//    char ch;
//    int num;
//    double x;
//
//    printf("char형의 바이트 크기: %d, 비트 크기: %d\n",sizeof(char),sizeof(char)*8);
//      printf("short형의 바이트 크기: %d, 비트 크기: %d\n",sizeof(short),sizeof(short)*8);
//      printf("int형의 바이트 크기: %d, 비트 크기: %d\n",sizeof(int),sizeof(int)*8);
//    printf("long형의 바이트 크기: %d, 비트 크기: %d\n",sizeof(long),sizeof(long)*8);
//      printf("long long형의 바이트 크기: %d, 비트 크기: %d\n",sizeof(long long),sizeof(long long)*8);
//
//    printf("float형의 바이트 크기: %d, 비트 크기: %d\n",sizeof(float),sizeof(float)*8);
//    printf("double형의 바이트 크기: %d, 비트 크기: %d\n",sizeof(double),sizeof(double)*8);
//    printf("long double형의 바이트 크기: %d, 비트 크기: %d\n",sizeof(long double),sizeof(long double)*8);
//
//    printf("ch 변수의 바이트 크기: %d, 비트 크기: %d\n",sizeof(ch),sizeof(ch)*8);
//    printf("num 변수의 바이트 크기: %d, 비트 크기: %d\n",sizeof(num),sizeof(num)*8);
//    printf("x 변수의 바이트 크기: %d, 비트 크기: %d\n",sizeof(x),sizeof(x)*8);
//
//
//}


//int main()
//{
//    printf(" 7 = %08x\n",7);
//    printf("-7 = %08x\n",-7);
//    printf("7+(-10) = %08x\n",7 + (-10));
//
//    return 0;
//}


//int main()
//{
//    short a= -10;
//    unsigned short b = 65526;
//
//    printf("a = %d, %08x\n",a,a);
//    printf("b = %d, %08x\n",b,b);
//
//    return 0;
//}

//3챕 2의 보수까지

//int main()
//{
//    char n = 128;
//    unsigned char m = 256;
//    char x = -129;
//    unsigned char y = -1;
//
//    printf("n = %d\n",n);
//    printf("m = %d\n",m);
//    printf("n = %d\n",n);
//    printf("y = %d\n",y);
//
//    return 0;
//}


//int main()
//{
//    char ch, prev_ch,next_ch;
//
//    printf("문자를 입력해 주세요: ");
//    scanf("%c",&ch);
//
//    prev_ch = ch - 1;
//    next_ch = ch + 1;
//
//    printf("ch     = %c,%d,%#02x\n",ch,ch,ch);
//    printf("prev_ch = %c, %d, #02x\n",prev_ch,prev_ch,prev_ch);
//    printf("next_ch = %c, %d, #02x\n",next_ch,next_ch,next_ch);
//}

//int main()
//{
//    char bell = '\b';
//    printf("%c프로그램을 시작합니다.\n",bell);
//
//    printf("c:\\work\\charp03\\ex0303\\debung\n");
//    printf("\t탭 문자를 출력합니다.\n");
//
//    return 0;
//}
//
//int main()
//{
//    float x = 3.40282e38;
//    float y = 1.175492-38;
//
//    printf("x = %30.25e\n",x);
//    printf("x = %30.25e\n",y);
//
//    x = x * 100;
//    printf("x = %30.25e\n",x);
//
//    y = y / 1000;
//    printf("y = %30.25e\n",y);
//
//    y = y / 1000;
//       printf("y = %30.25e\n",y);
//    return 0;
//}

//#pragma warnig(disable:6001)
//#pragma warnig(disable:4700)
//
//int main()
//{
//    int price;
//    printf("price = %d\n",price);
//
//    return 0;
//}


int main()
{
    int amount;
    int price = 0 ;
    int total_price = 0;
    
    printf("amount = %d, price = %d\n",amount,price);
    
    printf("수량? ");
    scanf("%d",&amount);
    
    price = 2000;
    
    total_price = amount * price;
    printf("합계: %d원\n",total_price);
    
    return 0;
}

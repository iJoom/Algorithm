//
//  프밍Ch_04.c
//  StudyAlgo
//
//  Created by IJ . on 2020/07/02.
//  Copyright © 2020 jun. All rights reserved.
//

#include <stdio.h>

//int main()
//{
//    int x = 0, y = 0;
//
//    printf("두 개의 정수를 입력하세요 : ");
//    scanf("%d %d", &x,&y);
//
//    printf("+%d = %d\n", x, +x);
//    printf("-%d = %d\n",y,-y);
//    printf("%d + %d = %d\n",x,y,x+y);
//    printf("%d - %d = %d\n",x,y,x-y);
//    printf("%d * %d = %d\n",x,y,x*y);
//    printf("%d / %d = %d\n",x,y,x/y);
//    printf("%d % %d = %d\n",x,y,x%y);
//
//    return 0;
//}


//int main()
//{
//    double x = 0, y = 0;
//
//    printf("두 개의 실수 를 입력하세요 : ");
//    scanf("%lf %lf", &x,&y);
//
//    printf("+%f = %f\n", x, +x);
//    printf("-%f = %f\n",y,-y);
//    printf("%f + %f = %f\n",x,y,x+y);
//    printf("%f - %f = %f\n",x,y,x-y);
//    printf("%f * %f = %f\n",x,y,x*y);
//    printf("%f / %f = %f\n",x,y,x/y);
//  //  printf("%f %% %f = %f\n",x,y,x%y);
//
//    return 0;
//}

//int main()
//{
//    int index1 =0, index2=0;
//    int c1,c2;
//    float x1 = 0.5F, x2 = 0.5F;
//    float y1, y2;
//
//    c1 = index1++;
//    printf("idx1 = %d, c1 = %d\n",index1,c1);
//
//    c2 = ++index2;
//    printf("idx2 = %d, c2 = %d\n",index2,c2);
//
//    y1 = x1++;
//    printf("x1 = %.2f, y1 = %.2f\n",x1,y1);
//
//    y2 = ++x2;
//    printf("x2 = %.2f , y2 = %.2f\n", x2, y2);
//
//    return 0;
//
//}

//int main()
//{
//    int a = 0;
//    double b = 0;
//    int c = 0;
//
//    a = 123;
//
//    printf("a = %d\n",a);
//    printf("a = %d\n", a = 456);
//    printf("b = %f\n", b = a + 0.5);
//    printf("c = %d\n", c = printf("ABC\n"));
//
//    return 0;
//}


//5주차 4차시


//int main()
//{
//    int a= 0, b = 0;
//
//    printf("두 개의 정수를 입력하세요: ");
//    scanf("%d %d", &a, &b);
//
//    printf("%d > %d : %d\n",a,b,a>b);
//    printf("%d < %d : %d\n",a,b,a<b);
//    printf("%d >= %d : %d\n",a,b,a>=b);
//    printf("%d <= %d : %d\n",a,b,a<=b);
//    printf("%d == %d : %d\n",a,b,a==b);
//    printf("%d != %d : %d\n",a,b,a!=b);
//
//    return 0;
//}

//int main()
//{
//    int month;
//    printf("월을 입력해 주세요: ");
//    scanf("%d", &month);
//
//    if(month >= 6 && month <= 8)
//        printf("성수기 요금 적용\n");
//
//    if(month < 6 || month > 8)
//        printf("일반 요금\n");
//
//    if(month >= 6 || month<= 8)
//           printf("성수기 요금 적용\n");
//
//    return 0;
//}

//보강

//int main()
//{
//    unsigned short x = 0x12;
//    unsigned short y = 0xF0;
//
//    printf("%#x & %#x = %#x\n",x,y,x & y);
//    printf("%#x | %#x = %#x\n",x,y,x | y);
//    printf("%#x ^ %#x = %#x\n",x,y,x ^ y);
//    printf("~%#x = %#x \n",x,~x);
//
//}

#include <limits.h>
//int main()
//{
//    int p = 0x1;
//    printf("%#08x\n",p);
//
//    int id = 0, job_type = 0, gender = 0;
//    p = (p << CHAR_BIT);
//    printf("%#08x\n",p);
//    p = p | 0x3;
//    printf("%#08x\n",p);
//
//    p = (p << CHAR_BIT) | 0x3;
//    printf("%#08x\n",p);
//
//    id = p & 0xFFFFF;
//    printf("id: %#x\n",id);
//
//    job_type (p>>20) & 0xFF;
//    printf("job_type: %#x\n", job_type);
//
//
//    return 0;
//}

//int main()
//{
//    int a,b;
//    int result, max;
//
//    printf("2개의 정수를 입력하세요: ");
//    scanf("%d %d",&a,&b);
//
//    printf("%d은 ",a);
//    a % 2 != 0 ? printf("홀수\n") : printf("짝수\n");
//
//    result = a > 0 ? a : -a;
//    printf("첫 번째 입력값의 절대값: %d\n",result);
//
//    result = b > 0 ? b : -b;
//    printf("두 번째 입력값의 절대값: %d\n",result);
//
//    max = a > b ? a : b;
//    printf("입력한 값들 중 큰 값: %d\n",max);
//}


//int main()
//{
//    int items = 0;
//    int pages = 0, left = 0;
//    int items_per_page = 0;
//
//    printf("항목수? ");
//    scanf("%d",&items);
//
//    printf("한 페이지 당 항목수?");
//    scanf("%d",&items_per_page);
//
//    pages = items / items_per_page;
//    left items % items_per_page;
//
//    pritnf("필요한 총 페이지수 %d\n",pages);
//    printf("마지막 페이지의 항목수: %d\n",left > 0 ? left : items_per_page);
//    return 0;
//}


//int main()
//{
//    int a=1,b=5,c=3,num=0;
//
//    num = (a++,++b);
//
//    printf("num: %d, a: %d, b: %d\n",num,a,b);
//
//    return 0;
//}

//int main()
//{
//    short a,b,c;
//
//    printf("정수 2개 입력");
//    scanf("%hd %hd",&a,&b);
//
//    printf("%d * %d = %d\n",a,b,a*b);
//    printf("sizeof(a*b) = %d\n",sizeof(a*b));
//
//    c = a*b;
//    printf("c = %d\n",c);
//    printf("sizeof(c) = %d\n",sizeof(c));
//
//}

//int main()
//{
//    int a,b,c;
//    double avg;
//
//    printf("정수 3개 입력");
//    scanf("%d %d %d",&a,&b,&c);
//
//    avg = (double)(a + b + c)/3;
//    pritnf("평균 : %f \n",avg);
//
//    return 0;
//}


int main()
{
    int a= 10,b=20,c=-1;
    int result;
    
    result = a + b *c;
    printf("result = %d\n",result);
    result = (a + b) *c;
    printf("result = %d\n",result);
    result = a < b && c < 0;
    printf("result = %d\n",result);
    
    return 0;
}

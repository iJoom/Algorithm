//
//  프입Ch_01.c
//  StudyAlgo
//
//  Created by IJ . on 2020/07/02.
//  Copyright © 2020 jun. All rights reserved.
//

#include <stdio.h>

//void print_line()
//{
//
//    printf("--------\n");
//}
//
//int add(int a, int b)
//{
//    return a+b;
//}
//int main()
//{
////    printf("첫번째 프로그램입니다. \n");
////    printf("두번째 프로그램. (뉴n없이) ");
//    print_line();
//    print_line();
//    int sum = add(1, 2);
//    printf("%d",sum);
//    return 0;
//}


//int main()
//{
//    int num;
//    float x;
//    char ch;
//
////    num = 123;
////    x= 1.23;
////    ch = 'A';
////
////    printf("%d %x\n",num,num);
////    printf("%f %e\n",x,x);
////    printf("%c\n",ch);
////
////    printf("%x %X\n",num,num);
////     printf("%#x %#X\n",num,num);
//
//    num = 12345;
//    printf("%d\n",num);
//    printf("%d\n",num*10);
//     printf("%d\n",num * 100);
//
//    x = 12.3457;
//    printf("%f\n",x);
//    printf("%.2f\n",x);
//    printf("%8.2f\n",x);
//
//    return 0;
//}

#define CRT_SECURE_NO_WARNIGS
//int main()
//{
//    int num;
//    printf("정수를 입력하세요");
//    scanf("%d",&num);
//
//    printf("입력된 값은 10진수로는 %d, 16진수로는 %x입니다.\n",num,num);
//
//    return 0;
//}

//int main()
//{
//    char name[20];
//    int age;
//    char gender;
//
//    printf("이름, 나이 , 성별(M/F) 순으로 입력하세요.\n");
//    scanf("%s %d %c",name,&age,&gender);
//    printf("이름: %s\n",name);
//    printf("나이: %d\n",age);
//    printf("성별: %c\n",gender);
//
//    return 0;
//}

//int main()
//{
//    int cnt;
//    int a,b,c;
//
//    printf("cnt값을 입력하세요: ");
//    scanf("%d",&cnt);
//
//    if(cnt==0)
//    {
//        a=2;
//        b=3;
//        c=5;
//    }
//    else{
//        a=-1;
//        b=-2;
//        c=-3;
//    }
//
//    printf("%d",a+b+c);
//
//    return 0;
//}


//int main()
//{
//    int i = 1, sum = 0;
//
//    while (i<=5) {
//        printf("i = %d 일때, sum = %d\n",i,sum);
//        sum += i;
//        ++i;
//    }
//
//    printf("sum = %d\n",sum);
//    return 0;
//}

int main(void)
{
    int sum=0,i;
    for (i =1;i<= 5;++i){
        sum+=i;
    }
    printf("sum= %d \n",sum);
    return 0;
}

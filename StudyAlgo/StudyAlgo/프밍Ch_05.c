//
//  프밍Ch_05.c
//  StudyAlgo
//
//  Created by IJ . on 2020/07/02.
//  Copyright © 2020 jun. All rights reserved.
//



//8주차 1차시 - 5장
//#include <stdio.h>
//
//int main()
//{
//    int score = 0;
//
//    printf("퀴즈 점수를 입력하세요: ");
//    scanf("%d", &score);
//
//    if(score < 70)
//    {
//        printf("제시 !!!\n");
//        printf("test\n");
//    }
//    else printf("통과!!!\n");
//    printf("다음 수업은 일주일 후입니다.\n");
//
//    return 0;
//}
#include <stdio.h>

//int main()
//{
//    int age, fee;
//
//    printf("나이를 입력하세요: ");
//    scanf("%d",&age);
//
//    if( age < 8)
//    {
//        fee = 0;
//    }
//    else if(age >= 65)
//    {
//        fee = 5000;
//    }
//    else
//    {
//        fee = 10000;
//    }
//
//
//    printf("입장료: %d원\n",fee);
//
//}
//
//int main()
//{
//    int menu;
//    char filename[32] = "test.avi";
//
//    printf("1. 파일 열기\n");
//    printf("2. 재생\n");
//    printf("3. 재생 옵션\n");
//    printf("선택: \n");
//
//    scanf("%d", &menu);
//
//    if(menu == 1)
//    {
//        printf("재생할 파일 이름을 입력하세요");
//        scanf("%s", filename);
//    }
//    else if(menu == 2)
//    {
//        printf("%s를 재생합니다.\n",filename);
//    }
//    else if (menu == 3)
//    {
//        printf("재생 옵션 선택");
//    }
//    else{
//        printf("잘못선택\n");
//    }
//}



//int main()
//{
//    int menu;
//    char filename[32] = "test.avi";
//
//    printf("1. 파일 열기\n");
//    printf("2. 재생\n");
//    printf("3. 재생 옵션\n");
//    printf("선택: \n");
//
//    scanf("%d", &menu);
//
//    switch (menu) {
//
//        case 1:
//            printf("재생할 파일 이름을 입력하세요");
//            scanf("%s", filename);
//            break;
//
//        case 2:
//
//            printf("%s를 재생합니다.\n",filename);
//            break;
//        case 3:
//            printf("재생 옵션 선택\n");
//            break;
//        default:
//            printf("잘못선택\n");
//            break;
//
//    }
//}

//int main()
//{
////    int i;
////    for(i = 0;i<20;i+=2)
////        printf("%d\n",i);
//    int num = 0, sum = 0, i;
//
//    printf("정수 5개를 입력하세요: ");
//    for(i = 0;i<5;i++)
//    {
//        scanf("%d",&num);
//        sum += num;
//    }
//    printf("합계: %d\n",sum);
//
//    return 0;
//}

//int main()
//{
//    int w,h;
//    char ch;
//    int i,j;
//
//    printf("직사각형의 폭과 높이를 입력하세요: ");
//    scanf("%d %d",&w,&h);
//
//    printf("직사각형 그릴 문자 입력: ");
//    scanf("%c", &ch);
//
//    for(i = 0; i <h;i++)
//    {
//        for(j=0;j<w;j++)
//        {
//            printf("%c",ch);
//        }
//        printf("\n");
//    }
//
//    return 0;
//}

int main()
{
    int num=0,sum=0,i=0;
    printf("정수 5개 입력");
    
    while (i<5) {
        scanf("%d",&num);
        sum += num;
        i++;
    }
    
    printf("합계: %d\n",sum);
    
    return 0;
}

//프로그래머스 2016년 문제

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

char* solution(int a, int b) {
    // 리턴할 값은 메모리를 동적 할당해주세요.
    char * days[7]={"FRI","SAT", "SUN", "MON", "TUE", "WED", "THU"};
    char* answer = (char*)malloc(sizeof(days));
    int  i = 0;  // 반복용 변수
    int total = 0 ; 
                                      
    char array_days[12]={31,29,31,30,31,30,31,31,30,31,30,31};
    //array_days 1~12월달 월별 마지막 날짜를 배열에 순서대로 넣어놨음 
    //days 요일에 대한 문자열 저장
    
    
    for(i = 0 ; i< (a-1) ; i ++){
        
        total += array_days[i];
    }
    
    total += b-1;
    
    answer = days[total%7];
    
    return answer;
}

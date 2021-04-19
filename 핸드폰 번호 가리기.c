#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
char* solution(const char* phone_number) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    char  i = 0 ; // 반복문 사용변수
    /* 전화번호 문자열 사이즈+1 만큼의 공간을 동적할당 */
    char* answer = (char*)malloc(sizeof(char)*strlen(phone_number)+1);
    
    /*할당 받은 문자열 복사*/
    strcpy(answer,phone_number);
    
        
    for(i=0;i<strlen(phone_number)-4; i++){
        answer[i] = '*';
     
    }    
        
    return answer;
}

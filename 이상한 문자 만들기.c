*문제 설명
       -문자열 s는 한 개 이상의 단어로 구성되어 있습니다. 각 단어는 하나 이상의 공백문자로 구분되어 있습니다. 
        각 단어의 짝수번째 알파벳은 대문자로, 홀수번째 알파벳은 소문자로 바꾼 문자열을 리턴하는 함수, solution을 완성하세요.

제한 사항
       -문자열 전체의 짝/홀수 인덱스가 아니라, 단어(공백을 기준)별로 짝/홀수 인덱스를 판단해야합니다.
        첫 번째 글자는 0번째 인덱스로 보아 짝수번째 알파벳으로 처리해야 합니다.


#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
char* solution(const char* s) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    int count = 0, i = 0;
    int index =0;
    
    while(s[i++]){      // 문자열의 길이 구한다.
        count++;
    }
        
    char* answer = (char*)malloc(count+1);   // 문자열을 변환하여 저장할 배열을 할당한다. 
    answer[count] = '\0';                    
    
    for(i=0;i<count;i++)
    {  
           if (s[i] == ' ')                 
           {                                 // 전체문자열의 인덱스가 아니고, 공백문자로 구분된 단어의
                index =0;                    // 인덱스를 기준으로 , 홀/짝 을 구분하기 위해서 
                answer[i]=' ';               // 공백문자를 만나면 index 변수를 초기화 해준다.
                continue;                    
           }
           else if (index % 2 == 0) {        // 짝수 -> 대문자 (0도 짝수처리)

                    if (((s[i] >= 'a') && (s[i] <= 'z'))) { 
                        answer[i] = s[i] - 0x20;
                    }
                    else if ((s[i] >= 'A') && (s[i] <= 'Z')) {
                        answer[i] = s[i];
                    }
           
            }
            else{

                    if ((s[i] >= 'A') && (s[i] <= 'Z')) {
                        answer[i] = s[i] + 0x20;
                    }
                    else if (((s[i] >= 'a') && (s[i] <= 'z'))) {
                        answer[i] = s[i];
                    }
            }
            index++;
    }
    
    
    
    return answer;
}

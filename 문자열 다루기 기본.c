프로그래머스 코딩 테스트 연습문제
레벨1 "문자열 다루기 기본"

문제설명 : 문자열 s의 길이가 4 혹은 6이고, 숫자로만 구성돼있는지 확인해주는 함수, solution을 완성하세요. 
           예를 들어 s가 "a234"이면 False를 리턴하고 "1234"라면 True를 리턴하면 됩니다. 

제한사항 :s는 길이 1 이상, 길이 8 이하인 문자열입니다.





#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
bool solution(const char* s) {
    bool answer = true;
    int lens = strlen(s);
    int  i,count = 0;
    
    if( lens == 4 || lens == 6){
        
        for(i=0;i<lens;i++){
            if(s[i] >=0x30 && s[i]<=0x39 ){
               // count++;
                answer = true;         
            }
            else{
                answer =false;
                break;
            }    
        }      
    }else{                                          
        answer =false;
    } 
    return answer;
}



#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <ctype.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
bool solution(const char* s) {
    bool answer = true;
    int lens = strlen(s);
    int  i,count = 0;
    
    /*문자열의 길이가 4 혹은 6 이외에는 쳐낸다 */
    if( lens != 4 && lens != 6){
            return false ;
    }else{
        for(i = 0 ; 0<isdigit(s[i]); i++);   
    } 
    /*isdigit 에 전달된 문자가 가 참이면 계속 반복 할것이고,끝에 다다르거나, 문자가아니면 반복이 종료되어
      반복변수로 카운트된 i값으로 최종판단 */  
  
  
    if (i >= 4 && i <= 6) {
        answer = true;
    }
    else
    {
        answer = false;
    }
    
    
    return answer;
}

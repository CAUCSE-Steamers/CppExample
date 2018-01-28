# CppExample
Coding Example for C++ Study

과제 1 : Json Checker
읽어들인 파일의 내용물이 Json 문법에 맞는지 아닌지 확인을 해주는 코드를 작성하십시오

과제 2 : Json Library 제작

과제 목표

Json 파일을 읽고, 그 내용을 정형화 된 자료구조에 담는 코드 개발.

Json에서 제공하는 문법 중 아래 사항이 만족해야 함.

1. 객체
2. 변수
3. 배열

자세한 문법은 아래 링크 참조

https://www.json.org/json-ko.html

요구 사항
1. Json 파일 문법 체크. 
   문법에 맞지 않을 경우 오류 출력.
   문법은 앞에서부터 처음 발생한 오류 하나만 출력.
2. 정형화 된 자료구조 제시
   어떤 파일을 읽더라도 항상 같은 객체(혹은 인터페이스) 타입이 되어야 한다.
3. 소켓 통신에 알맞는 구조로의 변환 함수 제공
   Json의 활용도를 고려하여 제시하였으며, 문법적 탐구를 추구해보시길.

추가 기능
1. 정수/실수 값이 자료형의 크기보다 클 경우 근사 값으로 제공. 
   혹은 새로운 정수/실수 타입을 정의하여 자리수에 관계 없는 연산을 제공

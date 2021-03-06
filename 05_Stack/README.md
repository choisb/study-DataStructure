﻿# Stack
## 📝 목차
- [스택의 이해와 ADT 정의](https://github.com/choisb/Study-DataStructure/tree/master/05_Stack#-스택의-이해와-ADT-정의)
- [스택의 구현](https://github.com/choisb/Study-DataStructure/tree/master/05_Stack#-스택의-구현)
- [계산기 프로그램 구현](https://github.com/choisb/Study-DataStructure/tree/master/05_Stack#-계산기-프로그램-구현)
___

## ✔ 스택의 이해와 ADT 정의
##### 📍 스택의 이해
- 스택은 나중에 들어간 것이 먼저 나오는 후입선출 방식의 자료구조이다. 혹은 LIFO(Last-In, First-Out)이라고도 불린다.

##### 📍 스택 ADT의 정의
> 스택 자료구조의 ADT
```c
void StackInit(Stack * pstack);
// 스택의 초기화를 진행한다.
// 스택 생성 후 제일 먼저 호출되어야 하는 함수이다.

int SIsEmpty(Stack * pstack);
// 스택이 빈 경우 TRUE(1)을, 그렇지 않은 경우에 FALSE(0)를 반환한다.

void SPush(Stack * pstack, Data data);
// 스택에 데이터를 저장한다. 매개변수 data로 전달된 값을 저장한다.

Data SPop(Stack * pstack);
// 마지막에 저장된 요소를 삭제한다.
// 삭제된 데이터는 반환이 된다.
// 본 함수의 호출을 위해서는 데이터가 하나 이상 존재함이 보장되어야 한다.

Data SPeek(Stack * pstack);
// 마지막에 저장된 요소를 반환하되 삭제하지 않는다.
// 본 함수의 호출을 위해서는 데이터가 하나 이상 존재함이 보장되어야 한다.
```

[
[위로](https://github.com/choisb/Study-DataStructure/tree/master/05_Stack#stack) 
/ 
[처음으로](https://github.com/choisb/Study-DataStructure/blob/master/README.md#data-structure)
]
___

## ✔ 스택의 구현
- 스택은 배열을 기반으로도 구현할 수 있고 리스트를 기반으로도 구현할 수 있다. 
그리고 두가지 모두 동일한 ADT를 적용할 수 있다.
- 배열도 자료구조고 리스트도 자료구조고 스택도 자료구조이다. 
이렇게 하나의 자료구조는 다른 자료구조의 구현에 사용될 수도 있다.

##### 📍 스택의 구현
- 스택 구현의 상세 내용에 대해서는 소스코드의 주석으로 대체.
- 배열 기반 스택 소스: [`ArrayBaseStack`](https://github.com/choisb/Study-DataStructure/tree/master/05_Stack/ArrayBaseStack)
- 리스트 기반 스택 소스: [`ListBaseStack`](https://github.com/choisb/Study-DataStructure/tree/master/05_Stack/ListBaseStack)

[
[위로](https://github.com/choisb/Study-DataStructure/tree/master/05_Stack#stack) 
/ 
[처음으로](https://github.com/choisb/Study-DataStructure/blob/master/README.md#data-structure)
]
___

## ✔ 계산기 프로그램 구현
- 스택을 활용해서 아래와 같은 수식을 계산할 수 있는 계산기를 구현한다.
```
( 3 + 4 ) * ( 5 / 2 ) + ( 7 + ( 9 - 5 ))
```
- 연산은 다음 두 가지를 고려해서 진행해야 한다.
  - 소괄호를 파악하여 그 부분을 먼저 연산
  - 연산자의 우선순위를 근거로 연산의 순위를 결정
  - 숫자는 0 ~ 9 사이의 한 자리 수 만 취급한다.

- 계산기 구현에 대한 내용은 분량상 서적을 참고할것.
- 스택을 활용한 계산기 구현 소스: [`InfixCalculator`](https://github.com/choisb/Study-DataStructure/tree/master/05_Stack/InfixCalculator)  

[
[위로](https://github.com/choisb/Study-DataStructure/tree/master/05_Stack#stack) 
/ 
[처음으로](https://github.com/choisb/Study-DataStructure/blob/master/README.md#data-structure)
]
___
[subject](https://github.com/tozggg/cpp_module/blob/master/cpp_module_01/subject.pdf)
<br>
### ex00

- ! 클래스 할당
    - 동적할당 ⇒ Class *변수명 = new Class(생성자);
        - 포인터 변수 라는점
        - 동적할당해제 ⇒ delete 변수명
    - 정적할당 ⇒ Class 변수명(생성자);

### ex01

- 클래스 배열 동적 할당
    - Class *변수명 = new Class[n];
    - 기본생성자로 초기화됨 ( ? 다른 생성자 사용 불가 )
    - 할당하고 하나씩 입맛대로 초기화 해주기
    - 동적할당된 배열 해제 ⇒  delete[] 변수명

### ex02

- 참조
    - 참조는 Class &변수명
    - 참조는 그자체 , 선언과 동시에 초기화가 이루어져야 함

### ex03

- 기본 생성자는 사용하지 않는다면 정의하지 않아도 됨
- 클래스 내부의 멤버가 외부에서 변경된다면 내부에도 영향을 미치게 하려면
    - 클래스 내부에 참조로 선언하기 ( 참조로 가져오기 )
    - 클래스 내부에 포인터로 선언하기 ( 참조로 가져와서 주소 넣기 )
- 클래스 내부에 참조로 선언된 변수는 선언후 바로 초기화 해줘야 되므로
    
    ⇒ 생성자(인자): 멤버변수명(인자) 로 바로 초기화 해주기
    
    ( 생성자(인자) {} 구문은 선언후 초기화 느낌 )
    

### ex04

- 파일 관련 함수
    - std::ifstream fin(파일명) ⇒ input 파일 열기
    - std::ofstream fout(파일명) ⇒ output 파일 열기
        - 그냥 열면 trunc (덮어쓰기)
    - fin.is_open() ⇒ 열렸나
    - fin.close ⇒ 닫기
- 스트링 관련 함수
    - str.empty()
    - string(char *)
        - 문자열 string화, ! 대입시키면 자동 형변환 가능
    - str.find(찾을문자열)
        - 문자열 찾기 ⇒ 해당 주소(size_t) 리턴
        - 못찾았으면 string::npos 리턴
    - str.erase(주소, len) ⇒ 주소에서 len 만큼 문자열 삭제 (후 이어붙임)
    - str.insert(주소, 문자열) ⇒ 주소에 문자열 끼워넣기

### ex05

- 함수 포인터

```cpp
// 함수 포인터 선언
함수타입 (*함수포인터명)(매개변수...);

// 함수 포인터 할당
함수포인터명 = 함수이름;
함수포인터명 = &함수이름; //위와 동일

// 함수 포인터 호출
함수포인터(매개변수...);    // 암시적 역참조
(*함수포인터)(매개변수...); // 명시적 역참조 //위와 동일
```

- 멤버 함수 포인터

```cpp
// 선언
함수타입 (클래스명::*함수포인터명)(매개변수...);

// 할당
함수포인터명 = &클래스명::함수이름;

// 호출
// 클래스 내부
(this->*함수포인터명)(매개변수..);
// 클래스 외부
클래스명 인스턴스명 = 생성자;
(인스턴스명.*함수포인터명)(매개변수...);

// 짚고 넘어갈점
멤버함수포인터는 암시적불가 => 함수의 주소를 넣어서 할당해야 하고 호출할때는 그 변수명의 값으로 호출해야함
선언과 할당할때 클래스명:: 가 필수 / 호출할때 어디서 온 함수포인터변수의 값인지 명명
```

### ex06

- switch - case 문
    - break 까지 내려간다
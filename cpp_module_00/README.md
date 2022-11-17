[subject](https://github.com/tozggg/cpp_module/blob/master/cpp_module_00/subject.pdf)
<br>
### ex00 - megaphone

- 기본출력 std::cout << 문자열 , 문자도 가능
- 개행출력 std::cout << std::endl
- <string> 헤더의 toupper 함수
- ! cout 과 cin은 <iostream> 헤더에 들어있는 std 네임스페이스의 객체(class)!
    - operator(연산자) 오버로딩이 되있으므로 여러 타입에 대해 출력할 수 있는것.

### ex01 - phonebook

- using std::cout 선언으로 앞으로 나오는 cout에 std:: 생략하기
    - using namespace - 와는 다른 의미 (이건 못찾을시 해당 네임스페이스에서 찾기 [금지!])
    - ? using std::string 사용할 수 있나
- class 와 그 기본 멤버함수들은 hpp 파일에 선언, cpp 파일에서 정의하자
    - 클래스명과 클래스 hpp,cpp 파일은 대문자로 시작
- std::getline(std::cin, 스트링) ⇒ 스트링에 입력 저장
- #include <iomanip>
    - 입출력 조작 라이브러리
    - setw(n) ⇒ 출력 문자열 공간 확보
- #include <sstream>
    - std::stringstream 변수명(스트링) 해서 stream 생성
    - stream변수 >> type변수 로 stream 을 type 변수로 변환가능
    - 변환실패하면 0이 저장됨
- #include <cstdlib>
    - 게산관련(abs, rand..), 메모리관련(malloc..), 자료형변환관련 표준 라이브러리
    
    스트링.substr()⇒ 문자열 자르기
    

### ex02 - account

- vector
    - 자동으로 메모리가 할당되는 배열
    - std::vector<타입> 변수명 ⇒ 타입을 저장하는 빈 벡터만들기
    - std::vector<타입> 변수명(n) ⇒ n이라는 len을 가진 벡터 만들기
    - std::vector<타입> 변수명(n1, n2) ⇒ n1 길이를 가진 벡터만들고 n2로 초기화
    - ! std::vector<타입> 변수명(arr, arr + len) ⇒ len만큼 arr의 요소로 벡터 생성
    - iterator = 반복자
        - vector(,list ,deque)의 요소를 가르킴
        - 벡터변수명.begin ⇒ 처음 요소
        - 벡터변수명.end ⇒ 마지막 요소
    - for_each 문
        - for_each(시작요소, 마지막요소, f(x)) ⇒ 함수 f(x)에 벡터의 요소를 넣어가며 반복
        - mem_fun_ref(&f) ⇒ 함수 f(x) 대신 벡터의 요소의 멤버함수를 사용
- 정적 멤버 함수/변수
    - 선언후 정의할때는 여타 구문처럼 (static빼고) 클래스명::함수명 으로 정의하자
    - static 멤버 변수는 모든 객체들이 공유하는 변수 → 객체가 생성되기 전에 초기화 해주어야 함
    - static 멤버 함수도 가능 → 객체 생성안하고 클래스 명으로만으로 호출 가능
- time.h
    - time_t 변수명 = time(NULL);
    - tm 변수명 = localtime(&time_t변수명);
    - strftime(str, 18, "[%G%m%d-%H%M%S]", tm);
- 소멸자는 OS에 따라 순서가 다르다

[https://wepplication.github.io/tools/compareDoc/](https://wepplication.github.io/tools/compareDoc/) 텍스트 비교기

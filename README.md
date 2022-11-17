# cpp_module
c++ 기본문법과 심화문법에 대해서 배워보는 과제  
  
[cpp_module_00](https://github.com/tozggg/cpp_module/tree/master/cpp_module_00)  
[cpp_module_01](https://github.com/tozggg/cpp_module/tree/master/cpp_module_01)  
[cpp_module_02](https://github.com/tozggg/cpp_module/tree/master/cpp_module_02)  
[cpp_module_03](https://github.com/tozggg/cpp_module/tree/master/cpp_module_03)  
[cpp_module_04](https://github.com/tozggg/cpp_module/tree/master/cpp_module_04)  
[cpp_module_05](https://github.com/tozggg/cpp_module/tree/master/cpp_module_05)  
[cpp_module_06](https://github.com/tozggg/cpp_module/tree/master/cpp_module_06)  
[cpp_module_07](https://github.com/tozggg/cpp_module/tree/master/cpp_module_07)  
[cpp_module_08](https://github.com/tozggg/cpp_module/tree/master/cpp_module_08)
<br>
<br>
## Details
```cpp
// cpp에서는 .h 안붙이고 사용 가능
#include <iostream>

// 출력연산자는 <<
std::cout << "string";
// 같은행에서 출력연산자 두개 이상 사용가능
std::cout << "hello" << " world";
// 줄 바꿈
std::endl        // ! std::cout에 출력연산자와 사용, \n과의 차이는 출력 버퍼를 비운다?
// 입력연산자는 >>
std::cin >> x;   // x라는 변수에 입력값 넣기

// cpp 의 변수 초기화 방법
1. int num = 5;  // copy init
2. int num(5);   // direct init
3. int num{5};   // uniform init
// 유니폼 초기화는 정해져있지않은 type도 바로 초기화 가능, 자동형변환은 안됨

bool 타입 존재 // cin >> 로 true나 false 받을수도 있다
void 는 변수type으로 사용 x , 함수의 type이나 함수의 인자에 넣기
sizeof 연산자 사용 가능
unsigned 정수형 존재
static_cast<type> 으로 형변환 가능

=============================================================

!! 네임스페이스
namespace 네임스페이스명
{
	...
}
로 네임스페이스 설정 가능
여러개의 네임스페이스에서 중복되는 식별자를 표현할때 => 네임스페이스명::식별자
// ::식별자 로 전역네임스페이스의 식별자 사용가능 (전역변수같이)
네임스페이스 중첩가능, 중첩된 네임스페이스를 별칭으로 사용가능

표준 라이브러리 기능은 std 네임스페이스에 존재

// using 선언문
using 네임스페이스명::식별자명 => 앞으로 해당 식별자는 해당 네임스페이스의 것으로 씀(생략)
// using 지시문
using namespace 네임스페이스명 => 앞으로 인식하지 못하는 식별자는 해당 네임스페이스에서 찾는다
// ㄴ using지시문을 사용했는데 사용하는 식별자가 두개 이상 존재하는 경우 주의(컴파일오류)

=============================================================

#include <string>
std::string 타입형 변수 선언 가능

// std::cin >> 변수명 시 공백까지만 추출!
std::getline(std::cin, 스트링타입변수명);
// ! std::cin >> 과 getline 같이 사용시 \n 버퍼에 남아 넘어가는 상황 주의
// ㄴ 해결방법 std::cin.ignore();

> std::string 타입
+ 연산자로 문자열 합치기 가능
변수명.length()로 문자열 길이 추출 가능

=============================================================

enum 과 enum class
// enum class는 클래스명 변수명 = 클래스명::식별자; 로 선언
// enum은 정수형으로 식별자끼리 비교연산해서 오류가 발생할 수 있지만
// enum class 는 고유한 자료형으로 인식해서 식별자끼리 비교연산 할 수 없다
// ㄴ 식별자와 변수명끼리의 비교연산은 가능

typedef 와 struct(구조체)
// typedef 로 자료형 별칭 가능
// using 식별자 = type 으로 typedef 처럼 사용 가능 (네임스페이스와 관련x)
// 구조체는 선언후 개별초기화나 변수명 = {...} 을 사용하자

=============================================================

int *num = new int(5); 로 동적할당 가능
사용후 delete num 으로 메모리 해제 시켜줘야됨 //누수 때문
// new int 만 해서 메모리만 잡아놓고 실제 값 나중에 넣기 가능
// num = 0 으로 댕글링포인터 해결

배열 동적할당
int *arr = new int[5];
// 배열 동적할당 해제시 delete[] 변수명하면 자동으로 배열의 개수만큼 해제

? 문자열 동적할당은 string 클래스를 사용?

=============================================================

const 와 const포인터 주의
// const 포인터는 const 타입의 주소를 가지고있는것
// const타입의 주소만 넣을수있다
// 주소의 값 변경 불가능하지만 주소자체는 변경 가능
// 포인터 자체를 상수로 만드려면  const int* n (x)  int* const n (o)

참조형변수 int& ref = n;
// ref는 n과 동일 (값 변경도 가능)
// 반드시 선언후 바로 초기화 (참조 변경불가)
// const 참조로 참조형변수 상수화 가능 (이때는 리터럴을 참조 가능)
// ㄴ 보통 const 넣어서 함수의 파라미터로 많이 씀

=============================================================

#include <array>
std::array<타입, 길이(생략가능)> 변수명; => 고정 배열
// { ... } 로 초기화
// 변수명[index] 로 접근 가능
// 변수명.at(index)로 접근가능
// 변수명.size()로 배열의 길이 추출

#include <vector>
std::vector<타입> 변수명; => 동적 배열
// 접근은 []나 .at() 으로
// 초기화시 배열의 길이 설정 ( .size()로 추출 )
// resize()로 배열의 길이 재설정 가능

=============================================================

함수 오버로딩 가능
// 같은 이름의 함수사용 가능 (인자의 type에 따라 그에 걸맞는 함수 호출)
매개변수에 default값 초기화 가능
함수형 변수 선언가능

=============================================================

!! 객체지향

class
// 객체는 변수와 함수도 멤버로 가질수 있다

:public :private
// 객체의 멤버의 defalut 는 private (클래스의 다른 멤버만 접근 가능(클래스 내에서만))

클래스에 클래스명과 같은 함수들(생성자)를 오버로딩해서 선언시 필요한 값만을 초기화 할수있다.
// 기본 생성자의 인자에 default 값 넣어서 인수의 개수만큼 필요한만큼 초기화 가능

초기화 리스트 사용해서 Class명():멤버명1(), 멤버명2().... 가능
class의 멤버에 직접 = 넣어서 초기화 가능
인자를 가지는 생성자 내에서 기본생성자 호출 가능(코드구문 줄이기)

소멸자 : ~클래스명()
// 객체가 소멸하는 타이밍에 자동으로 호출되는 함수

클래스의 내부에서 자신의 클래스 주소를 this로 사용가능
// *this를 반환해서 함수 체이닝 가능

클래스 정의시 내부 함수들을 선언만하고 추후에 정의 가능
// .hpp 파일에 클래스 선언하고 .cpp 파일에서 정의해도 됨 

? const class 객체
```

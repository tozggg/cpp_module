[subject](https://github.com/tozggg/cpp_module/blob/master/cpp_module_02/subject.pdf)
<br>
! nullptr 사용금지 ( c++11 문법 )

### ex00

- 고정소수점
    - 부호비트 + 정수비트 + 소수비트 가 고정
- 부동소수점
    - 소수점을 이동
    - 부호비트 + 지수부 + 가수부
    - 정수비트.소수비트 를 구해서 .을 왼쪽으로 이동(1.xxxx)한 횟수가 지수부 ( 2^n )
        - 소수비트 구하는법 = 소수에 딱떨어질때까지 x2 해가면서 0 1 0 1 체크
    - . 오른쪽 위치한 비트가 가수부 ( 0을 붙임 )
- 클래스의 멤버함수에서 인자로 들어오는 것의 값을 변경할일 없을때 왠만하면 참조로
- 연산자 오버로딩
    
    ```cpp
    > 할당연산자 =
    Class& Class::operator=(const Class &other);
    // 상수참조를 받아와서 자기자신(*this)을 참조로 반환
    // 자기할당주의 if(this != &other)
    
    > 복합할당연산자 += -= ...
    Class& Class::operator+=(const Class &other)
    // 위와 동일
    
    > 이진산술연산자 + - * ...
    const Class Class::operator+(const Class &other) const;
    // 두개의 상수참조를 받아와서 새로운 값을 반환
    // return MyClass(*this) += other;
    // ㄴ 오버로딩생성자와 복합할당연산자를 사용해 쉽게 생성할수도 있다
    
    > 비교연산자 == != ..
    bool Class::operator==(const Class &other) const;
    ```
    

### ex02

- 출력 연산자 오버로딩
    
    ```cpp
    #include <iostream>
    
    ostream& operator <<(ostream& ost, const Class& 클래스명)
    {
    	//출력
    	return ost;
    }
    // 클래스 외부에 선언!
    ```
    
- 함수뒤에 const
    - 함수 내에서 객체의 값 변경불가
    - const 함수만 호출 가능
- 기본타입 형변환
    - static_cast<변환할타입>(변수명)
- roundf 함수
    - include <cmath>
    - float 반올림 함수
- !!!! 부동소수점 에 (1 << 8) 곱하는 구문 15 예를 들어서 설명하기

### ex03

- 전위, 후위 연산자 오버로딩
    
    ```cpp
    // 전위연산자
    Class& operator++()
    {
    	//값 변경
    	return *this;
    }
    
    // 후위연산자
    Class operator++(int)
    {
    	Class tmp = *this;
    	//값 변경
    	return tmp;
    }
    ```
    
- 클래스의 함수를 인스턴스없이 쓰려면 static 선언

### ex04

- 점이 선분의 왼쪽 / 오른쪽에 위치하나 공식
    
    ```cpp
    bool isLeft(Point p, Point a, Point b)
    {
    	return ((a.X - p.X)*(b.Y - p.Y) - (a.Y - p.Y)*(b.X - p.X)) > 0;
    }
    ```
    
    - 정수형 이라면 점으로 만들어지는 3개의 삼각형의 넓이 합으로 구할수도 있다

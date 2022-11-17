[subject](https://github.com/tozggg/cpp_module/blob/master/cpp_module_06/subject.pdf)
<br>
- 형변환
    
    ```cpp
    
    static_cast<바꿀type>(바꿀변수)
    
    -------------------------------
    
    #include <cstdlib>
    double strtod(const char *nptr, char **endptr)
    // nptr에 들어오는 문자열을 double 형태로 변환
    // 숫자가 아닌걸로 시작하면 return(0) (+,- 는 제외)
    // 숫자까지 읽고 숫자가 아닌곳부터의 주소를 endptr에 넣음
    // inf, -inf, nan에 대해서도 읽어서 반환
    
    #include <cmath>
    isnan() isinf()
    
    #include <cctype>
    isprint()
    
    #include <limits>
    std::numeric_limits<타입>::max()
    // 해당 타입의 최대값
    
    #include <iomanip>
    std::setprecision(std::numeric_limits<float>::digits10)
    // 다음 소수 출력할때 소수점 몇자리까지 출력
    ```
    

- 직렬화
    
    ```cpp
    #include <cstdint>
    
    uintptr_t 
    //= unsigned long
    //주소를 숫자로 저장 (intptr_t + unsigned)
    
    reinterpret_cast<변환할주소>(주소)
    //임의의 주소끼리 변환 가능 
    ```
    

- 다운캐스팅
    
    ```cpp
    자식 -> 부모 -> 자식 (가능)
    부모 -> 자식        (불가능)
    
    dynamic_cast<변환할타입(주소,참조)>(변환할객체(주참))
    //= 런타임 변환
    //!= static_cast<> //컴파일변환 //생으로 바꿔버림
    //주로 다운캐스팅 용도
    //주소는 NULL(0) return , 참조는 exception(throw) 발생
    ```

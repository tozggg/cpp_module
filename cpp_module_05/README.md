[subject](https://github.com/tozggg/cpp_module/blob/master/cpp_module_05/subject.pdf)
<br>
- Exception
    
    ```cpp
    #include <exception>
    
    throw(std::exception()); // exception 발생
    
    ---------------------------------------------------------------------
    
    // std::exception 을 상속하는 클래스를 만들어서 what 함수를 오버라이딩해 사용가능
    class CustomException : public std::exception
    {
    	const char* what(void) const throw()
    		{
    			return ("CustomException");
    		}
    };
    // 리턴형은 string이 아닌 char* 형 => 왠만하면 리터럴로 리턴하자
    // throw() 는 하나의 구문 => 컴파일 타임에 인식하는 키워드 => throw(void) (x)
    // c++11 에서는 noexcept 키워드?
    // 어떤 종류의 오류인지 문자열을 리턴한다고 생각
    
    ---------------------------------------------------------------------
    
    // try-catch 문은 예외 발생시 프로그램 종료하는게 아닌 catch구문으로 가서 후속작업을 정의
    try
    {
    	// 실행구문
    	예외시 throw(발생시킬 exception 상속클래스의 생성자);
    }
    catch (std::exception& e)
    {
    	// 발생한 exception이 다형성으로 넘어와서
    	std::cout << e.what() << std::endl; // 해당 오류 문구 출력가능
    }
    
    > int나 double등을 throw(1)로 넘겨서 catch (int &n) 으로 받기 가능
    > catch(...)으로 정의되지 않은 catch형식의 throw를 넘겨받기 가능
    
    ! throw시 try밑의 구문 실행x
    ! throw시 정적할당은 해제하지만 동적할당은 해제하지않는다 -> 누수주의
    // ㄴ 스마트포인터로 해결 가능 (c++11)
    ```
    
- 오도독스
    
    ```cpp
    Orthodox Canonical Class Form = OCCF
    
    class A
    {
      A();
      ~A();
      A(const A &a);
      A &operator= (const A &a);
    };
    
    > 기본 생성자
    > 기본 소멸자
    > 복사 생성자
    > 할당 연산자 오버로딩
    
    -----------------------------------------------------
    
    const_cast로 const 변수의 값 바꾸기
    ( 잠깐 const 풀기 )
    
    const std::string str;
    => *(const_cast<std::string *>(&str)) = "string";
    ```

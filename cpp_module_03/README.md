[subject](https://github.com/tozggg/cpp_module/blob/master/cpp_module_03/subject.pdf)
<br>
- 접근제한자와 상속
    
    ```cpp
    //접근제한자
    public - 모두 접근 가능
    protected - 상속한 클래스(객체)까지 접근 가능
    private - 자신의 클래스(객체)에서만 접근 가능
    
    class Human
    {
    private:
    	std::string name;
    	int age;
    };
    
    class Studnet : public Human // 모든 Human 클래스의 값을 가진다(접근제한자로 범위 좁혀서)
    {
    private:
    	int stu_num;
    };
    
    ```
    

- 상속한 클래스의 생성자에 멤버 이니셜라이저로 부모클래스 생성자 사용 가능
- 자식클래스 객체 생성시 생성자 순서는 부모→자식 소멸자 순서는 역순

- 가상 상속
    
    ```cpp
            B
    A ->         -> D
            C
    
    순으로 상속이 되고있을때 실제 상속되고 있는 구조는
    
    A ->    B    -> D
    A ->    C    -> D
    
    이다 그래서 D클래스에서 A의 함수를 사용하려고하면 두개중 어느걸 써야할지 몰라 오류가 발생
    
    이때 해결법)
    class B: virtual public A ......
    A클래스를 가상으로 상속하여서 D클래스에서 A의 개수가 몇개인지 구분하지 못하게 하기(?)
    ```
    
    ..
    
    복사생성자, operator= 만들어야 하나?
    
    부모생성자 호출될때 기본생성자(unknown) 말고 인자가 있는 생성자로 호출되야 하나??

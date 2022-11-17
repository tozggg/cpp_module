[subject](https://github.com/tozggg/cpp_module/blob/master/cpp_module_07/subject.pdf)
<br>
- 템플릿
    
    ```cpp
    //=제네릭
    
    //함수 템플릿
    template<typename T>
    T sum(T a, T b)
    {
    	return (a + b);
    }
    //오버라이딩 하지않아도 한개의 함수로 여러 타입에 대해 취급 가능
    //typename 대신 class를 받을 수도 있다
    
    //템플릿 특수화
    template<>
    int sum<int>(int a, int b)
    ...
    //어떠한 타입에 대해서만 특수하게 취급하기
    
    ------------------------------------------------------------
    
    //클래스 템플릿
    template<class T>
    class Class
    {
    private:
    	string name;
    	T      age; 
    };
    => Class<int> c("kim", 15);
    => Class<string> c("kim", "15살");
    //typename과 class의 기능상 차이는 없다고 한다
    //클래스 선언할때 무슨 제너릭을 사용할지 표기
    //클래스 외부에서 멤버함수 정의시 템플릿 문구 반복적으로 표기
    template<class T>
    string Class<T>::getname(void)...
    ```

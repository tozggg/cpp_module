[subject](https://github.com/tozggg/cpp_module/blob/master/cpp_module_08/subject.pdf)
<br>
- STL
    
    ```cpp
    =Standard Template Libraray
    //임의의 타입(템플릿)에 대해 Container, Iterator, Algorithm 지원
    
    -----------------------------------------------------------
    > 컨테이너
    //임의의 타입에 대한 자료구조
    
    #include <vector>
    //배열과 같이 연속적인 메모리에 저장
    //인덱스순회빠름, 끝에삽입빠름
    
    #include <deque>
    //벡터와 비슷하지만 끝 뿐만이 아니라 앞에삽입도 빠름
    
    #include <list>
    //더블 링크드 리스트
    //어느위치에서도 인덱스 삽입 빠름
    
    -----------------------------------------------------------
    > 이터레이터
    //=반복자
    //컨테이너의 요소
    
    컨테이너명::iterator 로 사용
    
    -----------------------------------------------------------
    
    #include <algorithm>
    
    컨테이너.begin() //컨테이너의 첫번째 이터레이터 ( 값의 반환은 front() )
    컨테이너.end()   //컨테이너의 마지막 이터레이터 ( 값의 반환은 back() )
    
    std::find(begin, end, value) //value를 가진 이터레이터를 반환
    
    컨테이너.size()      //컨테이너의 요소 수
    컨테이너.capacity()  //컨테이너의 할당된 공간의 크기
    컨테이너.reserve()   //컨테이너 공간을 미리 예약(동적할당)
    컨테이너.clear()     //컨테이너의 요소삭제 !capacity는 변하지않음
    
    컨테이너.push_back() //컨테이너의 마지막에 요소 삽입
    //! 벡터는 pushback 할때 공간이없으면 현재공간x2 만큼 늘린다고 한다
    
    copy(src_begin, src_end, dst_begin) //dst에 src 복사
    ㄴ back_inserter(컨테이너)   //copy의 dst_begin에 이거넣기
    max_element(begin, end) //최대
    min_element(begin, end) //최소
    sort(begin, end)        //정렬
    
    ------------------------------------------------------------
    
    스택
    //=Adaptor Container
    //!=Sequential Container  ex) vector, deque, list
    // iterator를 지원하지 않는다
    
    스택은 deque 컨테이너로 구성됬다고 한다
    그래서 스택 내에서
    std::stack<T>::container-type
    this->c
    로 deque의 iterator와 함수 사용가능
    ```

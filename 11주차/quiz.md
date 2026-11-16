# 11주차 퀴즈 — 구조체와 함수 (ex1.c / ex2.c)

아래 두 소스 코드를 참고하여 문제를 푸세요.

### ex1.c

```c
#include <stdio.h>
#include <string.h>

struct Person {
    char name[50];
    int age;
};

void printPerson(struct Person p) {
    printf("Name : %s, Age : %d\n", p.name, p.age);
}

void updateAge(struct Person p) {
    strcpy(p.name, "Yun");
    p.age = 22;
}

int main(void) {
    struct Person p1 = {"Moon", 25};

    printPerson(p1);
    updateAge(p1);
    printPerson(p1);
    return 0;
}
```

### ex2.c

```c
#include <stdio.h>
#include <string.h>

struct Person {
    char name[50];
    int age;
};

void printPerson(struct Person* p) {
    printf("Name : %s, Age : %d\n", p->name, p->age);
}

void updateAge(struct Person* p) {
    strcpy(p->name, "Yun");
    p->age = 22;
}

int main(void) {
    struct Person p1 = {"Moon", 25};

    printPerson(&p1);
    updateAge(&p1);
    printPerson(&p1);
    return 0;
}
```

---

## 문제 1

`ex1.c`를 실행했을 때 출력 결과로 알맞은 것은?

```
① Name : Moon, Age : 25
   Name : Yun, Age : 22

② Name : Moon, Age : 25
   Name : Moon, Age : 25

③ Name : Yun, Age : 22
   Name : Yun, Age : 22

④ Name : Moon, Age : 25
   Name : Moon, Age : 22
```

---

## 문제 2

`ex1.c`의 `updateAge()` 함수가 `main()`의 `p1` 값을 바꾸지 못하는 이유로 가장 알맞은 것은?

```
① 구조체는 한 번 초기화하면 값을 변경할 수 없기 때문이다.

② 매개변수로 구조체 변수의 복사본이 전달되어, 함수 안에서는 복사본만 수정되기 때문이다.

③ strcpy() 함수가 구조체 멤버에는 적용되지 않기 때문이다.

④ updateAge() 함수의 반환형이 void이면 매개변수 수정이 금지되기 때문이다.
```

---

## 문제 3

`ex2.c`를 실행했을 때 출력 결과로 알맞은 것은?

```
① Name : Moon, Age : 25
   Name : Moon, Age : 25

② Name : Yun, Age : 22
   Name : Yun, Age : 22

③ Name : Moon, Age : 25
   Name : Yun, Age : 22

④ Name : Yun, Age : 22
   Name : Moon, Age : 25
```

---

## 문제 4

`ex2.c`의 `printPerson()` 안에 있는 `p->age`와 의미가 **같은** 표현은?

```
① *p.age

② (*p).age

③ &p.age

④ p.*age
```

---

## 문제 5

`ex1.c`와 `ex2.c`의 차이에 대한 설명으로 **옳지 않은** 것은?

```
① ex1.c는 구조체 전체(이름 배열 50바이트 + 정수)를 복사해서 전달하고,
   ex2.c는 구조체의 주소(포인터)만 전달한다.

② ex2.c처럼 포인터로 전달하면 함수 안에서의 변경이 호출한 쪽 변수에 그대로 반영된다.

③ ex2.c의 updateAge() 안에서 `p->age = 22;`를 `p.age = 22;`로 바꿔도
   p가 구조체를 가리키므로 똑같이 정상 동작한다.

④ 구조체 크기가 큰 경우, 복사 비용이 없는 ex2.c 방식이 메모리와 속도 면에서 더 효율적이다.
```

---

# 정답 및 해설

| 문제 | 정답 |
| :--: | :--: |
|  1   |  ②   |
|  2   |  ②   |
|  3   |  ③   |
|  4   |  ②   |
|  5   |  ③   |

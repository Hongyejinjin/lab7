#include <iostream>
#include <cstdlib>




//1. 열거형 studentsName 정의: kim, lee, park, numOfStudents
    
enum studentsName
{
    kim,
    lee,
    park,
    numOfStudents,
};
    //printStudentName 함수 정의: 리턴은 없고, 매개변수는 studentsName형 1개
    //매개변수에 따라
    //kim은 KIM, 을 출력
    //lee는 LEE, 를 출력
    //park은 PARK, 를 출력
    //kim, lee, park이 아니면 NO NAME, 을 출력
void printStudentName(studentsName s1)
{
    switch (s1) {
        case kim:
            std::cout << "KIM"; break;
        case lee:
            std::cout << "LEE"; break;
        case park:
            std::cout << "PARK"; break;
        default:
            std::cout << "No Name"; break;
    }
}
    
    
    //2. 구조체 student 정의 
    //student 구조체는 studentsName형 name, int형 id, int형 score, char형 grade를 멤버로 갖습니다. 
    //name은 kim, id는 3741200, score는 0, grade는 'F'로 디폴트값을 지정합니다.

struct student
{
    studentsName name { kim };
    int id{ 3741200 };
    int score{ 0 };
    char grade{ 'F' }; 
};
    
    //3. 함수 정의 
    //score2grade: 리턴 없음, 매개변수는 const int형 참조, char형 참조 (총 2개),
    //int형 매개변수 값 (90이상,80이상,70이상,60이상,그외)에 따라 char형에 ('A','B','C','D','F')값을 할당
    
void score2grade(const int& score, char& grade)
{
    if (score >= 90) {
        grade = 'A';
    }
    else if (score >= 80) {
        grade = 'B';
    }
    else if (score >= 70) {
        grade = 'C';
    }
    else if (score >= 60) {
        grade = 'D';
    }
    else {
        grade = 'F';
    }
}
    
    //inputStudent: 리턴은 없고, 매개변수는 student형 참조,
    //student의 name은 rand()함수로 값을 넣고, student의 id, score를 입력받고, student의 grade는 3-1함수를 사용
void inputStudent(student& s2)
{
    s2.name = (studentsName)(rand() % numOfStudents);
    std::cout << "Enter id: ";
    std::cin >> s2.id;
    std::cout << "Enter score: ";
    std::cin >> s2.score;
    score2grade(s2.score, s2.grade);
}
    
    
    //printStudent: 리턴은 없고, 매개변수는 const student형 참조,
    //name, id: score(grade) 형식으로 출력, name은 printStudentName 함수이용

void printStudent(const student& s3)
{
    printStudentName(s3.name);
    std::cout << ", " << s3.id << ": " << s3.score << "(" << s3.grade << ")" << std::endl;
}

    //4. main 구현
    //첫번째 student를 선언하고 이를 inputStudent에 인자로 넣어 호출, printStudent에 인자로 넣어 호출합니다. 
    //두번째 student를 선언하고 이를 printStudent에 인자로 넣어 호출합니다. //이때 출력되는 값은 무엇인가요?
    //세번째 student를 원하는 값을  초기화리스트로 넣어 선언하고 이를 printStudent에 인자로 넣어 호출합니다. 

int main()
{
    student s4;
    inputStudent(s4);
    printStudent(s4);
    
    student s5;
    printStudent(s5);

    student s6{ park, 3741299, 98, 'A'};
    printStudent(s6);
    return 0;
}
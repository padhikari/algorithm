#include<iostream>
#include<string>
/* Create a struct that holds a student’s name and grade (on a scale of 0-100).
Ask the user how many students they want to enter. Dynamically allocate an array to hold all of the students.
Then prompt the user for each name and grade. Once the user has entered all the names and grades, sort the list
by grade (highest first). Then print all the names and grades in sorted order. */
#include<algorithm>
struct Student{
    std::string name;
    int grade;
};
void sortNames(Student *students, int totalNumStud ){
    for(int i = 0; i<totalNumStud; i++){
        for(int j =i+1; j<totalNumStud; j++){
            if(students[i].grade<students[j].grade){
                std::swap(students[i],students[j]);
            }
        }
    }
}
int main(){
    int totalNumStud;
    std::cout<<"Enter how many strudents do you want to enter"<<"\n";
    std::cin>>totalNumStud;
    Student *students = new Student[totalNumStud];
    for(int i = 0; i<totalNumStud; i++){
        std::cout<<"Enter name for "<<i+1<<"\n";
        std::cin>>students[i].name;
        std::cout<<"Enter grade for "<<i+1<<"\n";
        std::cin>>students[i].grade;
    }
    sortNames(students,totalNumStud);
    for(int i =0; i<totalNumStud; i++){
        std::cout<<"Name "<<students[i].name<<" ";
        std::cout<<" Grade "<<students[i].grade<<"\n";
    }

    return 0;
}
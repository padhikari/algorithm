#include<iostream>
#include<string>
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
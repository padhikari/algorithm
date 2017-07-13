#include<iostream>
#include<string>
#include<algorithm>
void sort(std::string *name, int length){
    for(int i =0; i<length; i++){
        for(int j=i+1; j<length; j++){
            if(name[i]>name[j])
                std::swap(name[i],name[j]);
        }   
    }
    std::cout<<"The name after sorting are:\n";
    for(int i =0; i<length; i++)
        std::cout<<name[i]<<std::endl;

}
int main(){
    int length;
    std::cout<<"How many name you want to enter"<<"\n";
    std::cin>>length;
   std::string *name = new std::string[length];
    for(int i =0; i<length; i++){
        std::cout<<"Enter "<<i+1<<" name\n";
        std::cin>>name[i];
    }
    std::cout<<"The name are:\n";
    for(int i =0; i<length; i++)
        std::cout<<name[i]<<std::endl;
    sort(name,length);
    return 0;
}
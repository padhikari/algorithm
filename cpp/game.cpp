
/*Pretend you’re writing a game where the player can hold 3 types of items: health potions, torches, and arrows.
Create an enum to identify the different types of items, and a fixed array to store the number of each item the
player is carrying (use built-in fixed arrays, not std::array). The player should start with 2 health potions,
 5 torches, and 10 arrows. Write a function called countTotalItems() that returns how many items the player has
  in total. Have your main() function print the output of countTotalItems().*/

#include<iostream>

enum ItemTypes{
        HEALTH_POTIONS,
        TORCHES,
        ARROWS,
        MAX_ITEMS
};
int countTotalItems(int * items){
    int totalCount = 0;
    for(int i = 0; i<MAX_ITEMS; i++){
        totalCount = totalCount+items[i];
    }
    return totalCount;
}
int main(){
    int numOfItems[3]={2,5,10};
    int totalCount = countTotalItems(numOfItems);
    std::cout<<"The player has "<<totalCount<<" items";
    return 0;
}
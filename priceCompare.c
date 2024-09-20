#include <stdio.h>
#include <string.h>

#define MAX_ITEMS 100

typedef struct {
    char name[50];
    float price;
    float units;
    float costPerUnit;
} Item;

int main(){
    int numItems, i, bestValueIndex = 0;
    Item items[MAX_ITEMS];

//user input fields
    printf("Enter the number of items to compare: ");
    scanf("%d", &numItems);

    for(i=0; i < numItems; i++){
      
        printf("Enter the name of the item %d: ", i+1);
        scanf("%s", items[i].name);
       
        printf("Enter the price of %s: ", items[i].name);
        scanf("%f", &items[i].price);
       
        printf("Enter the number of units of %s: ", items[i].name);
        scanf("%f", &items[i].units);

//cost per unit calculation
        if (items[i].units !=0){
                items[i].costPerUnit = items[i].price / items[i].units; 
        }else{
            items[i].costPerUnit = 0;
            printf("Warning: Number of units for %s is zero. Cost per unit set to 0.\n", items[i].name);
        }
        
    }

//item with lowest cost per unit calculation  
        for(i=1; i < numItems; i++){
            if(items[i].costPerUnit < items[bestValueIndex].costPerUnit){
                bestValueIndex = i;
            }
        }

//display cost per unit for each item
    printf("\n Cost per unit for each item: \n");
    for (i=0; i <numItems; i++){
        printf("%s: $%.2f per unit \n", items[i].name, items[i].costPerUnit);
    }
//display item with best value
    if(numItems > 0){
        printf("\n The item with the best value is %s with a cost of $%.2f per unit. \n", items[bestValueIndex].name, items[bestValueIndex].costPerUnit);
    }else{
        printf("\nNo items to compare.\n");
    }
    

    return 0;
}

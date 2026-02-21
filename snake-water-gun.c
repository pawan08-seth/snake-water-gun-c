    #include<stdio.h>
    #include<stdlib.h>
    #include<time.h>

    int snakewatergun(char you , char comp){
        //return 0 if drow and return 1 if you win and return -1 if you loss
        //s= snake 
        //w =water
        //g== gun
        if(you==comp){
            return 0;
        }
        else if ( you == 's' && comp == 'w' || you == 'w' && comp == 'g' || you == 'g' && comp == 's'){
            return 1;
        }
        else{
            return -1;
        }
    }
    int main(){
        char you,comp;
        printf("enter s for snake and w for water and g for gun\n");
    scanf(" %c", &you);
    if(you != 's' && you != 'w' && you != 'g'){
    printf("Invalid input!\n");
    return 0;
}
    srand(time(0));
int random = rand() % 3;

if(random == 0) comp = 's';
else if(random == 1) comp = 'w';
else comp = 'g';
  printf("Computer chose: %c\n", comp);
  int result = snakewatergun(you,comp);
  if(result == 0){
    printf("It's a draw!\n");
  }else if(result == 1){
    printf("You win!\n");
  }else{
    printf("You lose!\n");
  }
  return 0;
    }
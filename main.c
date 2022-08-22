#include<stdio.h>

char square[9] = {'1','2','3','4','5','6','7','8','9'};
void board(){
    printf("\n\t\t|\t\t|\t\t");
    printf("\n\t%c\t|\t%c\t|\t%c",square[0],square[1],square[2]);
    printf("\n\t\t|\t\t|\t\t");
    printf("\n---------------------------------------------------");
    printf("\n\t\t|\t\t|\t\t");
    printf("\n\t%c\t|\t%c\t|\t%c",square[3],square[4],square[5]);
    printf("\n\t\t|\t\t|\t\t");
    printf("\n---------------------------------------------------");
    printf("\n\t\t|\t\t|\t\t");
    printf("\n\t%c\t|\t%c\t|\t%c",square[6],square[7],square[8]);
    printf("\n\t\t|\t\t|\t\t");
}
int checkWin(){
    if(square[0]==square[1]&&square[1]==square[2]){
        return 0;
    }
    else if(square[3]==square[4]&&square[4]==square[5]){
        return 0;
    }
    else if(square[6]==square[7]&&square[7]==square[8]){
        return 0;
    }
    else if(square[0]==square[3]&&square[3]==square[6]){
        return 0;
    }
    else if(square[1]==square[4]&&square[4]==square[7]){
        return 0;
    }
    else if(square[2]==square[5]&&square[5]==square[8]){
        return 0;
    }
    else if(square[0]==square[4]&&square[4]==square[8]){
        return 0;
    }
    else if(square[2]==square[4]&&square[4]==square[6]){
        return 0;
    }
    else if(square[0]!='1'&&square[1]!='2'&&square[2]!='3'&&square[3]!='4'&&square[4]!='5'&&square[5]!='6'&&square[6]!='7'&&square[7]!='8'&&square[8]!='9'){
        return 1;
    }
    else{
        return -1;
    }
}
int main(){
    int player = 1,i,choice;
    char symbol;
    do
    {
        board();
        if(player%2==1){
            player = 1;
        }
        else{
            player = 2;
        }
        if(player == 1){
            symbol = 'X';
        }
        else{
            symbol = 'O';
        }
        printf("\nplayer %d enter a number: ",player);
        scanf("%d",&choice);
        if(choice == 1 && square[0]=='1'){
            square[0] = symbol;
            player++;
        }
        else if(choice == 2 && square[1]=='2'){
            square[1] = symbol;
            player++;
        }
        else if(choice == 3 && square[2]=='3'){
            square[2] = symbol;
            player++;
        }
        else if(choice == 4 && square[3]=='4'){
            square[3] = symbol;
            player++;
        }
        else if(choice == 5 && square[4]=='5'){
            square[4] = symbol;
            player++;
        }
        else if(choice == 6 && square[5]=='6'){
            square[5] = symbol;
            player++;
        }
        else if(choice == 7 && square[6]=='7'){
            square[6] = symbol;
            player++;
        }
        else if(choice == 8 && square[7]=='8'){
            square[7] = symbol;
            player++;
        }
        else if(choice == 9 && square[8]=='9'){
            square[8] = symbol;
            player++;
        }
        else{
            printf("\nInvalid Decision");
            player--;
        }
        i = checkWin();
    } while (i == -1);
    board();
    if(i==0){
        printf("\nplayer %d Wins",player-1);
    }
    else{
        printf("\nIts a draw");
    }


    return 0;
}

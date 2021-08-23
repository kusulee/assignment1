#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int listGAME_1(int n);
int listGAME_2(int n);
int listGAME_3(int n);

int listGAME_1(int n){
    char A[] = "Naruto Shippuden Ultimate Ninja Storm 4";
    char B[] = "Dead Bt Daylight";
    char C[] = "Cities Skylines";
    char D[] = "Sekiro : Shadows Die Twice";
    char E[] = "Resident Evil Village";
    printf ("< Page 1 / 3 >\n");
    printf ("[A] %s - 390 Baht\n",A);
    printf ("[B] %s - 349 Baht\n",B);
    printf ("[C] %s - 299 Baht\n",C);
    printf ("[D] %s - 1390 Baht\n",D);
    printf ("[E] %s - 1199 Baht\n",E);
    printf ("Page < [1] 2 3 >\n");
}
int listGAME_2(int n){
    char F[] = "Jump Force";
    char G[] = "The Evil Whthin 2";
    char H[] = "Planet Zoo Deluxe Edition";
    char I[] = "Monster Hunter World";
    char J[] = "Final Fantasy XV Windows Edition";
    printf ("< Page 2 / 3 >\n");
    printf ("[F] %s - 490 Baht\n",F);
    printf ("[G] %s - 399 Baht\n",G);
    printf ("[H] %s - 800 Baht\n",H);
    printf ("[I] %s - 699 Baht\n",I);
    printf ("[J] %s - 790 Baht\n",J);
    printf ("Page < 1 [2] 3 >\n");
}
int listGAME_3(int n){
    char K[] = "Human : Fall Flat";
    char L[] = "Planet Coaster";
    char M[] = "Darksoul III";
    char N[] = "Mad Max";
    char O[] = "No Man's Sky";
    printf ("< Page 3 / 3 >\n");
    printf ("[K] %s - 290 Baht\n",K);
    printf ("[L] %s - 499 Baht\n",L);
    printf ("[M] %s - 990 Baht\n",M);
    printf ("[N] %s - 290 Baht\n",N);
    printf ("[O] %s - 790 Baht\n",O);
    printf ("Page < 1 2 [3] >\n");
}

int main(){
    int n = 0, total = 0, i = 0, discount;
    char c, card[14] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0};
    printf ("---------- WELCOME TO NEKO GAME SHOP ----------\n");
    printf ("        /\\_______/\\      /\\_______/\\\n");
    printf ("      ~( > o. o < )      ( > o .o < )~\n");
    printf ("-----------------------------------------------\n");
    printf ("            < Promotion in August >            \n");
    printf ("10%c discount when purchasing 1500 baht or more.\n",'%');
    printf ("20%c discount when purchasing 2500 baht or more.\n",'%');
    printf ("30%c discount when purchasing 4000 baht or more.\n",'%');
    printf ("40%c discount when purchasing 5000 baht or more.\n",'%');
    printf ("-----------------------------------------------\n");
    printf ("            Type 'ONLY' uppercase.          \n");
    printf ("-----------------------------------------------\n");
    printf ("    Type S to enter the payment process.    \n");
    printf ("-----------------------------------------------\n");
    printf ("              < List of games >               \n");
    printf ("-----------------------------------------------\n");
    
    listGAME_1(n);
    do
    {
        if (n >= 0){
        printf ("Enter character : ");
        scanf ("%s",&c);
        }
        if (c == 'S'){
            break;
        }
        else if (c == 'A'){
            printf ("Add Naruto Shippuden Ultimate Ninja Storm 4 in your card\n");
            card[0] = 1;
            total += 390;
        }
        else if (c == 'B'){
            printf ("Add Dead Bt Daylight in your card\n");
            card[1] = 1;
            total += 349;
        }
        else if (c == 'C'){
            printf ("Add Cities Skylines in your card\n");
            card[2] = 1;
            total += 299;
        }
        else if (c == 'D'){
            printf ("Add Sekiro : Shadows Die Twice in your card\n");
            card[3] = 1;
            total += 1390;
        }
        else if (c == 'E'){
            printf ("Add Resident Evil Village in your card\n");
            card[4] = 1;
            total += 1199;
        }
        else if (c == 'F'){
            printf ("Add Jump Force in your card\n");
            card[5] = 1;
            total += 490;
        }
        else if (c == 'G'){
            printf ("Add The Evil Whthin 2 in your card\n");
            card[6] = 1;
            total += 399;
        }
        else if (c == 'H'){
            printf ("Add Planet Zoo Deluxe Edition in your card\n");
            card[7] = 1;
            total += 800;
        }
        else if (c == 'I'){
            printf ("Add Monster Hunter World in your card\n");
            card[8] = 1;
            total += 699;
        }
        else if (c == 'J'){
            printf ("Add Final Fantasy XV Windows Edition in your card\n");
            card[9] = 1;
            total += 790;
        }
        else if (c == 'K'){
            printf ("Add Human : Fall Flat in your card\n");
            card[10] = 1;
            total += 290;
        }
        else if (c == 'L'){
            printf ("Add Planet Coaster in your card\n");
            card[11] = 1;
            total += 499;
        }
        else if (c == 'M'){
            printf ("Add Planet Zoo Deluxe Edition in your card\n");
            card[12] = 1;
            total += 800;
        }
        else if (c == 'N'){
            printf ("Add Darksoul III in your card\n");
            card[13] = 1;
            total += 990;
        }
        else if (c == 'O'){
            printf ("Add No Man's Sky in your card\n");
            card[14] = 1;
            total += 790;
        }
        else if (c == '1'){
            listGAME_1(n);
        }
        else if (c == '2'){
            listGAME_2(n);
        }
        else if (c == '3'){
            listGAME_3(n);
        }
        else {
            printf ("Please try again\n");
        }
    
    } while (1);
    printf ("-----------------------------------------------\n");
    printf ("            < payment process > \n");
    printf ("-----------------------------------------------\n");
    printf ("                /\\_______/\\\n");
    printf ("            $$~( > o . o < )~\n");
    printf ("-----------------------------------------------\n");
    printf ("< My card >\n");
    for (i = 0; i <= 14; i++){
        if (card[i] == 1){
            if (i == 0) {
                printf ("Naruto Shippuden Ultimate Ninja Storm 4  390 Baht\n");
            }
            else if (i == 1) {
                printf ("Dead Bt Daylight %27d Baht\n",349);
            }
            else if (i == 2) {
                printf ("Cities Skylines %28d Baht\n",299);
            }
            else if (i == 3) {
                printf ("Sekiro : Shadows Die Twice %17d Baht\n",1390);
            }
            else if (i == 4) {
                printf ("Resident Evil Village %22d Baht\n",1199);
            }
            else if (i == 5) {
                printf ("Jump Force %33d Baht\n",490);
            }
            else if (i == 6) {
                printf ("The Evil Whthin 2 %26d Baht\n",399);
            }
            else if (i == 7) {
                printf ("Planet Zoo Deluxe Edition %18d Baht\n",800);
            }
            else if (i == 8) {
                printf ("Monster Hunter World %23d Baht\n",699);
            }
            else if (i == 9) {
                printf ("Human : Fall Flat %26d Baht\n",290);
            }
            else if (i == 10) {
                printf ("Planet Coaster %29d Baht\n",499);
            }
            else if (i == 11) {
                printf ("Darksoul III %31d Baht\n",990);
            }
            else if (i == 12) {
                printf ("Mad Max %36d Baht\n",290);
            }
            else if (i == 13) {
                printf ("No Man's Sky %31d Baht\n",790);
            }
        }
    }
    if (total >= 0 && total < 1500){
        discount = 0;
    }
    else if (total >= 1500 && total < 2500){
        discount = (total * 10)/100;
    }
    else if (total >= 2500 && total < 4000){
        discount = (total * 20)/100;
    }
    else if (total >= 4000 && total < 5000){
        discount = (total * 30)/100;
    }
    else if (total >= 5000){
        discount = (total * 40)/100;
    }
    printf ("-----------------------------------------------\n");
    printf ("You get all discounts %22d Baht\n",discount);
    printf ("Total Price : %30d Baht\n",total-discount);
    printf ("-----------------------------------------------\n");
}
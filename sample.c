#include<stdio.h>
// int main(){
//     int i;
//     for(i = 1; i <= 10; i++) {
//         if(i == 5)
//             break;
//         printf("%d ", i);  
//     }
//     printf("\nout\n");
//     printf("%d",i);//5
// }

// int main(){
//     int i;
//     for(i = 1; i <= 6; i++) {
//         if(i == 3){
//             continue;
//         }
//         printf("%d\n", i);  
//     }
//     printf("\nout\n");
//     printf("%d",i);
// }

int main(){
    int i=0;
    IN:
    printf("GOTO");
    while(i<=5){
        if(i==2){
            goto IN;
        }
        printf("%d",i);//0 1
        i++;
    }
}
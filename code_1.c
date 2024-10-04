
#include <stdio.h>
int main(){

    int score;

    while (score > 1){
        printf("Enter 0 or 1 to STOP. \nEnter NFL score: ");
        scanf("%d", &score);

        if (score < 1){
            break;
        }

        for (int td_2 = 0; td_2 * 8 <= score; td_2++){
            for (int td_3 = 0; td_3 * 7 + td_2 * 8 <= score; td_3++){
                for (int td = 0; td * 6 + td_3 * 7 + td_2 * 8 <= score; td++){
                    for (int fg = 0; fg*3 + td * 6 + td_3 * 7 + td_2 * 8 <= score; fg++){
                        for (int s = 0; s*2 + fg*3 + td * 6 + td_3 * 7 + td_2 * 8 <= score; s++){
                            int total = td_2*8 + td_3*7 + td*6 + fg*3 + s*2;

                            if (total == score){
                                printf("%d TD + 2pt, %d TD + FG, %d TD, %d 3pt FG, %d Safety\n", td_2, td_3, td, fg, s);
                            }
                        }
                    }
                }
            }
        }

        
    }
    return 0;

}
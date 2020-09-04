#include <unistd.h>

void ft_print_comb(){
    int i,j,k;

    char s[3] = "012";

    for(i=0; i<8; i++){
        for(j=i+1; j<9; j++){
            for(k=j+1; k<10; k++){
                if(i != j && j!= k && i != k){
                    s[0] = i + '0';
                    s[1] = j + '0';
                    s[2] = k + '0';

                    write(1, s, 3);

                    if(i==7)
                        write(1, "\n", 1);
                    else
                        write(1, ", ", 2);
                }
            }
        }
    }
}
#include<stdio.h>                                           //This is here cuz
#include<math.h>                                          //imports & consts
#define F_LEN 46                                        //must have newlin
#define L_P_W 16                                      //it is wat it  is
int main(int argc                                   ,char *argv[]){int
lft_part_len=ceil                                 (F_LEN / 1.33);int
rght_part_wd=ceil                               (1.1*L_P_W);int gap
=ceil(L_P_W*2.65                              );int hlf_len_lft=
ceil(lft_part_len                         /2);char hlf_flg=0
;int c = 0; char                        eof_flag = 0; FILE
*file =  fopen (                      "seeders.txt","r")
;for(int i =0;i<                    F_LEN; i++){/*Left
block of K*/ for                  (int j =0;j<L_P_W;
j++){if ((j == 0                ||j==(L_P_W- 1))&&
i< lft_part_len)              printf ("|"); else
if(i ==0)printf(            "-");else if( i ==
(lft_part_len-1)          )printf("_"); else
if(i >= 0 && i <        lft_part_len){if (
(c = fgetc(file)        ) == EOF){ printf(
" ") ; } else if          (c =='\n') printf(
" ");else printf            ("%c", c) ; } else
printf (" ") ; }              /*Gap*/ for (int j
= 0;j<gap;j++) {                printf(" ");}if(i<
hlf_len_lft){gap                  -= ceil(0.1*L_P_W)
; }else if (i ==                     hlf_len_lft &&  !
hlf_flg){hlf_flg                      =1;}else{gap+=ceil
(0.1 * L_P_W); }                        for(int j = 0; j <
rght_part_wd;j++                          ){if (j == 0 ||j== 
(rght_part_wd-1)                            ){if(i<hlf_len_lft
)printf("/");else                             if(i>=hlf_len_lft)
printf ("\\") ;}                                else if(i==0)printf
("-");else if (i                                  == F_LEN -1)printf
("_");else{if ((                                    c = fgetc(file))==
EOF){printf(" ")                                      ;}else if (c=='\n'
)printf(" ");else                                       printf("%c", c);}}
                                                          printf ( "\n") ; }
                                                            return 0;}/*And no
                                                              w I have to announ
                                                                ce that I have run
                                                                  out of code to fi
                                                                    ll in the K,maybe
                                                                      it's a good  thing
                                                                        since we can  fill
                                                                          this part with som
                                                                            e kind of a messag
                                                                              e, viva la kodius*/
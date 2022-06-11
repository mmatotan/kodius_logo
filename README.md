# kodius_logo

## Pokretanje
Znam fali mi malo koda 
na kraju, al nemrem vise, good enough(ak je dobra ideja mogu popraviti). Tekst unutar K se da promijeniti u seeders.txt, zasad su 
kolege(pucal sam iz glave tak da ak sam nekoga zaboravil
LMK), projekti i oni values sa weba.


Pisano u Cu(puno koda, a komajler podrzava ovakvo bogohuljenje, ajde Cabraja da te vidim u kak bi ovo u Pythonu napiso :P), nadam se
da svi imate GCC kompajler(mislim da dolazi preinstalled na unixu). 
Zabunom sam pushal kodi, to je kompajlirani kod. Da si sami kompajlirate i pokrenete:

```
gcc kodius_logo.c -o kodi
./kodi
```

## Kod
```C
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
```

## Output
```
|--------------|                                           /----------------/
|Tomislav Culig|                                         / Martina Karnas /
|Jelena Vignjev|                                       /ic Maija Munjako/
|vic Kresimir B|                                     /ojcic Ante Brali/
|c Zvonimir Iva|                                   /skovic Ivan Mari/
|c Ana-Marija G|                                 /usa Marko Razum /
|Dino Danic Mat|                               /ija Sporis Katar/
|ina Sporis Dia|                             /na Rendulic Andr/
|ej Karamatic T|                           /in Ilijas Darko /
|Dujmic Mateo V|                         /ukusic Sanja Zla/
|tar Bruno Papi|                       /sta Marko Maric /
|Kresimir Cabra|                     /ja Marko Matotan/
| Kristina Culi|                   /g Ivan Delas Mar/
|ino Malenica E|                 /la Primzic Ivona/
| Orecic Andro |               /Racic Dino Stanc/
|ic Even financ|             /ial Optilogic Di/
|scovery Adrius|           / Takamol Poplin /
|Music Supervis|         \or Flex Careers \
|Forfend Health|         \ Sunnyside Day T\
|rading K-Knowl|           \edge-Our most va\
|luable resourc|             \e is our people'\
|s knowledge. I|               \n order to gain \
|access to valu|                 \able information\
| and deliver b|                   \etter results, w\
|e love to shar|                     \e our knowledge \
|and experience|                       \! O-Objective-De\
|fine the goal,|                         \ communicate it \
|out and track |                           \it. We strive to\
| get everyone |                             \rowing in the sa\
|me direction, |                               \something we con\
|sider to be es|                                 \sential for gett\
|ing high perfo|                                   \rmance! D-Divers\
|ity-You are we|                                     \lcome, no matter\
| your age, gen|                                       \der, nationality\
|______________|                                         \ or language. We\
                                                           \ want you to fee\
                                                             \l respected and \
                                                               \valued so that t\
                                                                 \ogether we can b\
                                                                   \uild strong rela\
                                                                     \tionships and be\
                                                                       \ more productive\
                                                                         \ in what we do! \
                                                                           \I-Intelligence-T\
                                                                             \wo people are al\
                                                                               \________________\
```
Inspiracije:

https://github.com/mame/quine-relay

https://en.wikipedia.org/wiki/Voyager_Golden_Record

https://www.youtube.com/watch?v=6avJHaC3C2U&ab_channel=NDCConferences

## Marko, ali zakaj?

Pokupil sam neku prehladu(negativan sam na kovid), i kurim od petka navecer 39(ispricavam se unaprijed ako nekoga pocne peckati grlo).
Nisam bil u stanju citati, 
nisam mogel zaspati jer me jako drzala temperatura
nije mi se dalo pisati dokumentaciju za Poplin u takvom stanju, pogledal sam 4. ep Kenobija i ispada 
da je serija cisto smece(a ja ocekival Mandalorian
level quality) i neki fever dream me ulovil, pa reko idem se igrati s ovime. Na pitanje koliko mi je vremena trebalo ne zelim odgovoriti.

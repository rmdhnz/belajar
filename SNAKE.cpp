#include <bits/stdc++.h>
#include <windows.h>
#include <conio.h>
#include <dos.h>
#include <unistd.h>
#include <time.h>
using namespace std;
#define go cout<<'\n'
void gotoXY(int x, int y){
    COORD crd;
    crd.X = x;
    crd.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),crd);
}
int main(){
    int i,lakonx,lakony,musuhx, musuhy,buahx,buahy,skorlakon = 0,skormusuh=0;
    srand(time(NULL));
    char ch;
    for(i = 0; i <=79; ++i){
        gotoXY(i,0); cout << '#';
        gotoXY(i,40); cout << '#';
        if(i<40){
            gotoXY(0,i); cout << '#';
            gotoXY(79,i); cout << '#';
        }
    }
    lakonx = rand()%40 + 20;
    lakony = rand()%20 + 10;
    gotoXY(lakonx, lakony); cout << '\2';

    musuhx = rand()%40 + 20;
    musuhy = rand()%20 + 10;
    gotoXY(musuhx, musuhy); cout << '\1';

    buahx = rand()%74 + 2;
    buahy = rand()%35 + 2;
    gotoXY(buahx, buahy); cout << '\@';

    int arah = 0,delay = 0;

    while(true){
        delay++;
        if(delay>5000){
            gotoXY(0,0); cout << "You : " << skorlakon << "  Enemy : " << skormusuh <<"  ";

                delay = 0;
            gotoXY(lakonx, lakony); cout << ' ';
            gotoXY(musuhx, musuhy); cout << ' ';
            switch(arah){
                case 72 : lakony--;break;
                case 75 : lakonx--;break;
                case 80 : lakony++;break;
                case 77 : lakonx++;break;
            }

            if(arah){
                if(buahx==musuhx){
                    if(buahy>musuhy) musuhy++;
                    else if(buahy < musuhy) musuhy--;
                }
                if(buahx>musuhx) musuhx++;
                else if(buahx < musuhx) musuhx--;

            }
            gotoXY(lakonx, lakony); cout << '\2';
            gotoXY(musuhx, musuhy); cout << '\1';

            if(musuhx==buahx&&musuhy==buahy){
                buahx = rand()%74 + 2;
                buahy = rand()%35 + 2;
                gotoXY(buahx, buahy); cout << '\@';
                skormusuh++;
            }

            if(lakonx==buahx&&lakony==buahy){
                buahx = rand()%74 + 2;
                buahy = rand()%35 + 2;
                gotoXY(buahx, buahy); cout << '\@';
                skorlakon++;
            }

        }
        if(lakonx>=79||lakonx<1||lakony>39||lakony<1) break;
        if(kbhit()){
            if(ch==32){
                    gotoXY(lakonx, lakony); cout << ' ';
                switch(arah){
                    case 72 : lakony-=5;break;
                    case 75 : lakonx-=5;break;
                    case 80 : lakony+=5;break;
                    case 77 : lakonx+=5;break;
                }
            }
            ch = getch();
            if(ch<0){
                ch = getch();
                if(ch==72||ch==80||ch==77||ch==75){
                    arah = ch;
                }
            }
        }
    }

    return EXIT_SUCCESS;
}

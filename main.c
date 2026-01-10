#include <stdio.h>
#include <stdlib.h>

int main()
{
    int ax,bx,cx,dx,ex,ay,by,cy,dy,ey,yol1,yol2,yol3,yol4,yol5,yol6,yol7,yol8,yol9,yol10,yol11,yol12,yol13,yol14,yol15,yol16,yol17,yol18,kisayol;

    ax=300,ay=200;
    bx=10,by=10;
    cx=20,cy=30;
    dx=100,dy=150;
    ex=50,ey=20;

    yol1=(ax-bx)+(ay-by)+(cx-bx)+(cy-by)+(ex-cx)+(cy-ey)+(dx-ex)+(dy-ey)+(ax-dx)+(ay-dy);
    yol2=(ax-bx)+(ay-by)+(dx-bx)+(dy-by)+(dx-cx)+(dy-cy)+(ex-cx)+(cy-ey)+(ax-ex)+(ay-ey);
    yol3=(ax-bx)+(ay-by)+(ex-bx)+(ey-by)+(ex-cx)+(cy-ey)+(dx-cx)+(dy-cy)+(ax-dx)+(ay-dy);
    yol4=(ax-bx)+(ay-by)+(ex-bx)+(ey-by)+(dx-ex)+(dy-ey)+(dx-cx)+(dy-cy)+(ax-cx)+(ay-cy);
    yol5=(ax-cx)+(ay-cy)+(cx-bx)+(cy-by)+(ex-bx)+(ey-by)+(dx-ex)+(dy-ey)+(ax-dx)+(ay-dy);
    yol6=(ax-cx)+(ay-cy)+(dx-cx)+(dy-cy)+(dx-bx)+(dy-by)+(ex-bx)+(ey-by)+(ax-ex)+(ay-ey);
    yol7=(ax-cx)+(ay-cy)+(ex-cx)+(cy-ey)+(ex-bx)+(ey-by)+(dx-bx)+(dy-by)+(ax-dx)+(ay-dy);
    yol8=(ax-cx)+(ay-cy)+(ex-cx)+(cy-ey)+(dx-ex)+(dy-ey)+(dx-bx)+(dy-by)+(ax-bx)+(ay-by);
    yol9=(ax-dx)+(ay-dy)+(dx-bx)+(dy-by)+(cx-bx)+(cy-by)+(ex-cx)+(cy-ey)+(ax-ex)+(ay-ey);
    yol10=(ax-dx)+(ay-dy)+(dx-bx)+(dy-by)+(ex-bx)+(ey-by)+(ex-cx)+(cy-ey)+(ax-cx)+(ay-cy);
    yol11=(ax-dx)+(ay-dy)+(dx-cx)+(dy-cy)+(cx-bx)+(cy-by)+(ex-bx)+(ey-by)+(ax-ex)+(ay-ey);
    yol12=(ax-dx)+(ay-dy)+(dx-cx)+(dy-cy)+(ex-cx)+(cy-ey)+(ex-bx)+(ey-by)+(ax-bx)+(ay-by);
    yol13=(ax-ex)+(ay-ey)+(ex-bx)+(ey-by)+(cx-bx)+(cy-by)+(dx-cx)+(dy-cy)+(ax-dx)+(ay-dy);
    yol14=(ax-ex)+(ay-ey)+(ex-bx)+(ey-by)+(dx-bx)+(dy-by)+(dx-cx)+(dy-cy)+(ax-cx)+(ay-cy);
    yol15=(ax-ex)+(ay-ey)+(ex-cx)+(cy-ey)+(cx-bx)+(cy-by)+(dx-bx)+(dy-by)+(ax-dx)+(ay-dy);
    yol16=(ax-ex)+(ay-ey)+(ex-cx)+(cy-ey)+(dx-cx)+(dy-cy)+(dx-bx)+(dy-by)+(ax-bx)+(ay-by);
    yol17=(ax-ex)+(ay-ey)+(dx-ex)+(dy-ey)+(dx-bx)+(dy-by)+(cx-bx)+(cy-by)+(ax-cx)+(ay-cy);
    yol18=(ax-ex)+(ay-ey)+(dx-ex)+(dy-ey)+(dx-cx)+(dy-cy)+(cx-bx)+(cy-by)+(ax-bx)+(ay-by);

    printf("A-B-C-E-D-A yolunun mesafesi ==> %d\n",yol1);
    printf("A-B-D-C-E-A yolunun mesafesi ==> %d\n",yol2);
    printf("A-B-E-C-D-A yolunun mesafesi ==> %d\n",yol3);
    printf("A-B-E-D-C-A yolunun mesafesi ==> %d\n",yol4);
    printf("A-C-B-E-D-A yolunun mesafesi ==> %d\n",yol5);
    printf("A-C-D-B-E-A yolunun mesafesi ==> %d\n",yol6);
    printf("A-C-E-B-D-A yolunun mesafesi ==> %d\n",yol7);
    printf("A-C-E-D-B-A yolunun mesafesi ==> %d\n",yol8);
    printf("A-D-B-C-E-A yolunun mesafesi ==> %d\n",yol9);
    printf("A-D-B-E-C-A yolunun mesafesi ==> %d\n",yol10);
    printf("A-D-C-B-E-A yolunun mesafesi ==> %d\n",yol11);
    printf("A-D-C-E-B-A yolunun mesafesi ==> %d\n",yol12);
    printf("A-E-B-C-D-A yolunun mesafesi ==> %d\n",yol13);
    printf("A-E-B-D-C-A yolunun mesafesi ==> %d\n",yol14);
    printf("A-E-C-B-D-A yolunun mesafesi ==> %d\n",yol15);
    printf("A-E-C-D-B-A yolunun mesafesi ==> %d\n",yol16);
    printf("A-E-D-B-C-A yolunun mesafesi ==> %d\n",yol17);
    printf("A-E-D-C-B-A yolunun mesafesi ==> %d\n\n",yol18);

    kisayol=yol1;

    if(yol2<kisayol){
        kisayol=yol2;
    }
    if(yol3<kisayol){
        kisayol=yol3;
    }
    if(yol4<kisayol){
        kisayol=yol4;
    }
    if(yol5<kisayol){
        kisayol=yol5;
    }
    if(yol6<kisayol){
        kisayol=yol6;
    }
    if(yol7<kisayol){
        kisayol=yol7;
    }
    if(yol8<kisayol){
        kisayol=yol8;
    }
    if(yol9<kisayol){
        kisayol=yol9;
    }
    if(yol10<kisayol){
        kisayol=yol10;
    }
    if(yol11<kisayol){
        kisayol=yol11;
    }
    if(yol12<kisayol){
        kisayol=yol12;
    }
    if(yol13<kisayol){
        kisayol=yol13;
    }
    if(yol14<kisayol){
        kisayol=yol14;
    }
    if(yol15<kisayol){
        kisayol=yol15;
    }
    if(yol16<kisayol){
        kisayol=yol16;
    }
    if(yol17<kisayol){
        kisayol=yol17;
    }
    if(yol18<kisayol){
        kisayol=yol18;
    }

    if(kisayol>=yol2){
        printf("En kisa yol:A-B-D-C-E-A Mesafesi:%d\n",yol2);
        kisayol=yol2;
    }
    if(kisayol>=yol3){
        printf("En kisa yol:A-B-E-C-D-A Mesafesi:%d\n",yol3);
        kisayol=yol3;
    }
    if(kisayol>=yol4){
        printf("En kisa yol:A-B-E-D-C-A Mesafesi:%d\n",yol4);
        kisayol=yol4;
    }
    if(kisayol>=yol5){
        printf("En kisa yol:A-C-B-E-D-A Mesafesi:%d\n",yol5);
        kisayol=yol5;
    }
    if(kisayol>=yol6){
        printf("En kisa yol:A-C-D-B-E-A Mesafesi:%d\n",yol6);
        kisayol=yol6;
    }
    if(kisayol>=yol7){
        printf("En kisa yol:A-C-E-B-D-A Mesafesi:%d\n",yol7);
        kisayol=yol7;
    }
    if(kisayol>=yol8){
        printf("En kisa yol:A-C-E-D-B-A Mesafesi:%d\n",yol8);
        kisayol=yol8;
    }
    if(kisayol>=yol9){
        printf("En kisa yol:A-D-B-C-E-A Mesafesi:%d\n",yol9);
        kisayol=yol9;
    }
    if(kisayol>=yol10){
        printf("En kisa yol:A-D-B-E-C-A Mesafesi:%d\n",yol10);
        kisayol=yol10;
    }
    if(kisayol>=yol11){
        printf("En kisa yol:A-D-C-B-E-A Mesafesi:%d\n",yol11);
        kisayol=yol11;
    }
    if(kisayol>=yol12){
        printf("En kisa yol:A-E-B-C-D-A Mesafesi:%d\n",yol12);
        kisayol=yol12;
    }
    if(kisayol>=yol13){
        printf("En kisa yol:A-E-B-C-D-A Mesafesi:%d\n",yol13);
        kisayol=yol13;
    }
    if(kisayol>=yol14){
        printf("En kisa yol:A-E-C-B-D-A Mesafesi:%d\n",yol14);
        kisayol=yol14;
    }
    if(kisayol>=yol15){
        printf("En kisa yol:A-E-C-D-B-A Mesafesi:%d\n",yol15);
        kisayol=yol15;
    }
    if(kisayol>=yol16){
        printf("En kisa yol:A-E-D-B-C-A Mesafesi:%d\n",yol16);
        kisayol=yol16;
    }
    if(kisayol>=yol17){
        printf("En kisa yol:A-E-D-C-B-A Mesafesi:%d\n",yol17);
        kisayol=yol17;
    }
    if(kisayol>=yol18){
        printf("En kisa yol:A-B-C-E-D-A Mesafesi:%d\n",yol18);
        kisayol=yol18;
    }

    return 0;
}


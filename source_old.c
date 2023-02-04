#include <iostream>
#include <string.h>
//using namespace std ;
void test(){
    ::printf("hello\n");
}


int chartoint(char a){
    if(a=='0')return 0 ;
    else if(a=='1')return 1 ;
    else if(a=='2')return 2 ;
    else if(a=='3')return 3 ;
    else if(a=='4')return 4 ;
    else if(a=='5')return 5 ;
    else if(a=='6')return 6 ;
    else if(a=='7')return 7 ;
    else if(a=='8')return 8 ;
    else if(a=='9')return 9 ;





}

int stringtoint(char * x){
    char a[6]  = {};
    strcpy(a,x);
    int retur = 0 ;
    retur += chartoint(a[0])*10000;
    retur += chartoint(a[1])*1000;
    retur += chartoint(a[2])*100;
    retur += chartoint(a[3])*10;
    retur += chartoint(a[4])*1;
    //printf("retur=%d\n",retur);
    return retur ;

}
int get_int_by_char(char x){

    if(x=='1'){
        return 1 ;
    }else if(x=='2'){
        return 2 ;
    }else if(x=='3'){
        return 3 ;
    }else if(x=='4'){
        return 4 ;
    }else if(x=='5'){
        return 5 ;
    }else if(x=='6'){
        return 6 ;
    }else if(x=='7'){
        return 7 ;
    }else if(x=='8'){
        return 8 ;
    }else if(x=='9'){
        return 9 ;
    }else if(x=='0'){
        return 0 ;
    }








}









void cry(char * value){
    int  aa[] = {1,2,3,4,5} ;
    int  bb[] = {6,7,8,9,0} ;

//    for(int i=0;i<100;i++){
//        printf("%d  %d\n",aa[rand()%5],bb[rand()%4]);
//    }







    int len = printf("%s",value);
    char a[1024]  = {} ;
    strcpy(a,value);
    printf("|");
    for(int i=0;i<len;i++){
        if((int)a[i]>0){
            printf("%d",((int)a[i])*2+aa[rand()%5]);//16000
        }else if((int)a[i]<0){
            printf("%d",((int)a[i])*2+bb[rand()%4]);//36000
        }


    }
    printf("|");


}

void decry(char * value){
    int len = printf("%s\n",value)-1;

    char x[1024]  = {};
    strcpy(x,value);

    char temp_char = '\0';

    for(int i=0;i<len/5;i++){
        //printf("%c%c%c%c%c\n",x[i*5],x[i*5+1],x[i*5+2],x[i*5+3],x[i*5+4]);
        char temp[6] = {};
        temp[0] = x[i*5] ;
        temp[1] = x[i*5+1];
        temp[2] = x[i*5+2];
        temp[3] = x[i*5+3];
        temp[4] = x[i*5+4];
        temp[5] = '\0';
        int y = stringtoint(temp);
        int z = (y- get_int_by_char(temp[0]))/2;


        if(temp[0]=='1'||temp[0]=='3'||temp[0]=='5'||temp[0]=='7'||temp[0]=='9'){
            //int z = (y-16000)/2 ;
            printf("%c",z);
        }else if(temp[0]=='2'||temp[0]=='4'||temp[0]=='6'||temp[0]=='8'){
            //int z = (y-36000)/2 ;
            if(temp_char == '\0'){
                temp_char = (char)z ;
            }else{
                printf("%c%c",temp_char,z);
                temp_char = '\0' ;
            }




        }

    }





    //printf("%d",len);
}





int main() {

//    char bb[11] = "k";
//    printf("%d   %d",bb[0],bb[1]);
//
//    char aa[3] ;
//    aa[0] = -80 ;
//    aa[1] = -95 ;
//    aa[2] = '\0';
//    //-26   -120
//
//    printf("%s",aa);

    //cry("");
    decry("");
















    return 0;
}






















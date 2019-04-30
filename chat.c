#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include <stddef.h>
#include <time.h>
#include "chat.h"


//output from fixed reply
void ran(char **arr){
    srand((unsigned)time(NULL));
    printf("%s\n",arr[rand()%3]);
    
}

 //Uppercase to lowercase functions
char cases(char *str){
    for(int n=0;str[n]!='\0';n++){
        if(str[n]>='A'&&str[n]<='Z')
            str[n]+=32;
    }
    return *str;
}

//gat name
int name(){
    int i=0;
    char name[20];
    int p=0;
    printf("Prometheus:HI,human!\n");
    printf("Prometheus:I'm Prometheus, you can call me Pro.\n");
    printf("Prometheus:How should I call you?\n");
    while(1){
    scanf("%[^\n]",name);//Define the user
    if(strlen(name)<=20){
        printf("Prometheus:Hello!%s\n",name);
        printf("Prometheus:What do you want to talk with me?\n");
        while(1){
        printf("Prometheus:1.Just chatting.\n");
        //printf("Prometheus:2.You want me to help you something.\n");
        printf("Prometheus:2.Quit.\n");
        scanf("%d",&i);
        if(i ==1 || i == 2)
        {
            p = i;
            break;
            
        }
        else
        {
            printf("Prometheus:Please just enter 1 to 2.\n");
            p = 0;
        }
    }
        //getchar();
        break;
    }
    else{
        printf("Prometheus:I think your name probably is not more than 20 letters,please renter.\n");
        getchar();
    }
    }
    return p;
}



/*char fileread(){
    char buf[MAX_LINE];  //缓冲区
    FILE *fp;            //文件指针
    int len;             //行字符个数
    if((fp = fopen("test.txt","r")) == NULL)
    {
        perror("fail to read");
        exit (1) ;
    }
    while(fgets(buf,MAX_LINE,fp) != NULL)
    {
        len = strlen(buf);
        buf[len-1] = '\0';  //去掉换行符
        printf("%s %d \n",buf,len - 1);
    }
    return NULL;
}*/



void smtalk(){
    //Some common keywords
    char *kw[] = {"how","why","what","hi","hello","who","are","is","am","where","when"};
    char *be[] ={"are","is","am","was","were"};
    char *ob[]={"I","you","he","she","it","they"};
    char *oba[]={"me","you","him","her","it","them"};
    char *obs[]={"your","my"};
    char *thing[]={"name","time","day","weather"};
    char *ad[]={"real","good","old"};
    char *ar[]={"the","a"};
    char *greet[]={"good","morning","afternoon","night","evening"};
    char *v[]={"do","does","did"};
    char *gender[]={"female","male","woman","man","girl","boy"};
    
    //replications to some common questions
    char *week[]={"Sunday","Monday","Tuesday","Wednesday","Thursday","Friday","Saturday"};//week
    
    char *hay[3]= {"Prometheus:It doesn't matter how am I, all I care about is you.\n",
        "Prometheus:Good！\n",
        "Prometheus:Acutually, as well as I can.\n"};//how are you
    
    char *hi[]={"Prometheus:Hi back!\n",
        "Prometheus:Nice to see you.\n",
        "Prometheus:Sounds you have a good day.\n"};//hi
    
    char *wyn[]={"Prometheus:Well, I'm sure I've told you my name is Prometheus,or would you like to call me anything else?\n",
        "Prometheus:I'm Prometheus,you personal chatbot.\n",
        //"Prometheus:I'm what you think I am.\n",
        //"Prometheus:I'm Prometheus.\n",
        "Prometheus:You know who I am.\n"};
        //"Prometheus:I'm just a robot.\n"};//what is your name
    
    char *ayr[]={"Prometheus:Is this really matters?\n",
        "Prometheus:Do you want me is real?\n",
        "Prometheus:I don't think so, but I'm here for you.\n"};//are you real
    
    char *hoay[]={"Prometheus:I was born on 21.04.2019.\n"};
    
    char *wtw[]={"Prometheus:The weather depends on your mood.\n",
        "Prometheus:I can't tell you the specific weather right now at this place, but I hope you can live in the weather which is your favourate forever.\n",
        "Prometheus:Have a nice mood, everday is sunny day.\n"};
    
    char *cts[]={"cls","clear"};
    char *quit[]={"bye","quit"}; //quit command
    
    printf("Prometheus:Well I think you may feel little lonely now,it's ok I'll get you out of this.\n");
    while(1){
        int j;
        int thisindex = -1;
        char chat[100];//where input are put
        char *keyword[100];
       
        getchar();//Clear the enter key you entered earlier
        scanf("%[^\n]",chat);
        
        cases(chat); //Uppercase to lowercase
        
        //participles
        memset(keyword, 0x0, sizeof(keyword));
        split(keyword, chat, " ");
        
        
        // quit command
        if(strcmp(chat, quit[0]) == 0 || strcmp(chat, quit[1]) == 0){
         printf("Prometheus:It's nice to talk to you.\n");
         break;}//quit
        
        //Whether the CLS
         else if(strcmp(chat, cts[0]) == 0 || strcmp(chat, cts[1]) == 0){
            printf("Prometheus:It's nice to talk to you.\n");
            
            system("clear");
        }

        //To run the program
        else{
            int m=0;//Determine if there is a calculation in the input
            for(int k=0;k<100;k++){
                if(chat[k]=='+' || chat[k]=='-' || chat[k]=='*' || chat[k]=='/' )
                    m+=1;
            }
            if(m>0)
                calc(chat);//calculate
            else{
                
                for(j=0; j<11; j++){
                    if(strcmp(kw[j], keyword[0]) == 0){
                        thisindex = j;
                        break;
                    }
                }
                
                if(thisindex == -1){
                    int b=-1;
                    int a=-1;
                    int c=-1;
                    //int l=0;
                    int h=0;
                    while(keyword[h] != '\0')
                          h++;
                     for(int l=0;l<5;l++){
                        if(h==1){
                             if (strcmp(keyword[0], greet[l]) == 0)
                             {a=l;
                             break;}
                            else
                                a=-2;
                             //else
                                 //printf("yeah?\n");
                         }
                        else if(strcmp(keyword[0],greet[0])==0){
                          //strcat(keyword[0]," ");
                            if(strcmp(keyword[1],greet[l])==0){
                            c=l;
                            break;
                            }
                            else
                                c=-2;
                        }
                        else if(strcmp(keyword[1], be[l]) == 0){
                            b=l;
                            break;}
                         else
                             b=-2;
                     }
                    if(a>-1)
                        printf("Prometheus:%s!\n",greet[a]);
                    else if(a==-2)
                        printf("Prometheus:Yeah?\n");
                    if(c>-1)
                        printf("Prometheus:Good %s!\n",greet[c]);
                    else if(c==-2)
                        printf("Prometheus:Yeah!\n");
                    else if(b>-1)
                    printf("Prometheus:Of course %s %s \n",keyword[0],be[b]);
                    else if(b==-2)
                        printf("Prometheus:Sorry, I can't understand what you mean yet.\n");
                }
                
                //how
                if(thisindex == 0){
                    if(strcmp(keyword[1],be[0])==0 && strcmp(keyword[2],ob[1])==0){
                        ran(hay);
                    }//if
                    
                    else if(strcmp(keyword[1],ad[2])==0 && strcmp(keyword[2],be[0])==0 && strcmp(keyword[3],ob[1])==0){
                        printf("%s\n",hoay[0]);//Any output of "how are you" reply
                    }//if
                    
                    else
                    printf("Prometheus:That's complex.Maybe you can consider by yourself?\n");
                }
                
                //why
                if(thisindex ==1){
                    if(strcmp(keyword[1],v[0])==0 || strcmp(keyword[1],v[1])==0  || strcmp(keyword[1],v[2])==0)
                    {
                        printf("Prometheus:Maybe because %s is not bad",keyword[4]);
                    }
                    else
                       printf("Prometheus:Because things have their rules.I mean, you can't explain everything, can you?\n");
                }
                
                //what
                if(thisindex ==2){
                    /*time_t timep;
                    struct tm *p;
                    time (&timep);
                    p=gmtime(&timep);*/
                    if(strcmp(keyword[1],be[1])==0 && strcmp(keyword[2],obs[0])==0 && strcmp(keyword[3],thing[0])==0){
                        ran(wyn);
                        
                    }
                    
                    else if(strcmp(keyword[1],thing[1])==0 && strcmp(keyword[2],be[1])==0 && strcmp(keyword[3],ob[4])==0){
                        gettime();
                    }
                    
                    else if(strcmp(keyword[1],thing[2])==0 && strcmp(keyword[2],be[1])==0 && strcmp(keyword[3],ob[4])==0){
                        getday(week);
                        
                    }
                    else if(strcmp(keyword[1],be[1])==0 && strcmp(keyword[2],ar[0])==0 && strcmp(keyword[3],thing[3])==0){
                        ran(wtw);
                    }
                    else if(strcmp(keyword[1],be[1])==0){
                        printf("Prometheus:I don't know much about %s, but I think it's a nice thing.\n",keyword[2]);
                    }
           
                    else
                        printf("Prometheus:What's that?.\n");
                }
                
                //hi & hello
                if(thisindex ==3 || thisindex ==4){
                    ran(hi);
                    //Any output of "hi" reply
                }
                
                //who
                if(thisindex ==5){
                    if(strcmp(keyword[1],be[0])==0 && strcmp(keyword[2],ob[1])==0){
                        ran(wyn);
                    }
                    else
                        printf("Prometheus:I don't know who it is.\n");
                }
                
                //are
                if(thisindex ==6){
                    
                    if(strcmp(keyword[1],ob[1])==0){
                        
                        if(strcmp(keyword[1],ob[1])==0 && strcmp(keyword[2],ad[0])==0){
                            ran(ayr);
                        }
                        
                        else if(strcmp(keyword[2],ar[1])==0){
                            if(strcmp(keyword[3],gender[0])==0 || strcmp(keyword[3],gender[1])==0 || strcmp(keyword[3],gender[2])==0 || strcmp(keyword[3],gender[3])==0 || strcmp(keyword[3],gender[4])==0 || strcmp(keyword[3],gender[5])==0 ){
                                printf("Prometheus:I'm a robot, I don't have gender.\n");
                            }
                        }
                        else
                            printf("Prometheus:I can't tell am I %s.It's kind of depends on my design, maybe it will change.\n",keyword[2]);
                    }
                    
                    else
                        printf("Prometheus:I don't know what you mean exactly.\n");
                }
                
                //is
                if(thisindex ==7){
                    int a=-1;
                    for(int l=0;l<100;l++){
                        if (strcmp(keyword[1], ob[l]) == 0)
                        {   a=l;
                            break;}
                    }
                    if(a!=-1)
                        printf("Prometheus:I don't know , you'd better ask %s.\n",oba[a]);
                    else
                    printf("Prometheus:I don't know.\n");
                }
                
                //am
                if(thisindex ==8){
                    printf("Prometheus:Actually I don't know you very much right now, the only thing I know about you is you're smart.\n");
                }
                
                //where
                if(thisindex ==9){
                    printf("Prometheus:I'm sorry to make you upset, but I can't search a map for you right now, maybe you can teach me.\n");
                }
                
                //when
                if(thisindex ==10){
                    time_t timep;
                    struct tm *p;
                    time (&timep);
                    p=gmtime(&timep);
                    printf("Prometheus:I'm sorry to make you upset, but I can't check timetable for you right now. But I can tell now is %d:%d:%d\n",8+p->tm_hour,p->tm_min,p->tm_sec);
                }
                
            }
        }//else end
    }//while end
    
    
    }


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


 printf("Prometheus:What you will ask:\n");
            char newa[100];
            scanf("%[^\n]",newa);
            printf("Prometheus:What I could reply:\n");
            char newr[100];
            scanf("%[^\n]",newr);
            

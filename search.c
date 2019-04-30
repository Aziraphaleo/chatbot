printf("Prometheus:What do you need now, I can search it for you.\n");
            char webs[200]= "https://en.wikipedia.org/?search=";
            char add[20]; //指定一个长度够就行不指定程序会死
            scanf("%s",add);
            strcat(webs,add); //合并字符串
            //printf("%s",webs);
            system(webs);

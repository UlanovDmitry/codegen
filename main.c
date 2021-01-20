 #include <stdio.h>
 #include <stdlib.h> 
 #include <string.h> 

 #define BUFSZ 64
 #define MAXSZ 4096

/* */
void readTemplate(const char* fileName, char* res){ 
    FILE* fp; 
    char buf[BUFSZ];
    unsigned long pos = 0; 
    res[0]='\0';

    if((fp = fopen(fileName,"r")) == NULL){
        fprintf(stderr,"Не удалось открыть %s\n",fileName);
        exit(EXIT_FAILURE);
    }

    while(fgets(buf,BUFSZ,fp) != NULL){
        pos += strlen(buf);
        if (pos < MAXSZ){
            strcat(res,buf);   
        } else {
            break;
        }
    }

    if(fclose(fp) != 0){ 
        fprintf(stderr,"Ошибка при закрытии файла %s\n",fileName);
    }
}

/* */
void replacePatterns(char* tmp_buf, char* res_buf){
    char *fnd = "comp";
    char *rpl = "lua"; 

    unsigned long pos = 0;
    unsigned long fpos = 0;
    unsigned long temp_len = strlen(templ);

    char* start = templ;


    while(pos < temp_len) {
        fpos = strstr()
    }

}

/* */
void fillTemplate(char* tname){
    char* templ_buf = (char*)malloc(MAXSZ);
    char* mod_buf = (char*)malloc(MAXSZ);

    readTemplate(tname,templ_buf);

    mod_buf[0] = '\0';


	printf("\"%s\":\n",tname);
	printf("%s\n",templ_buf);




    free(mod_buf);
    free(templ_buf);
}

int main(int argc, char* argv[]) {
    int i; 

	printf("Hello, world!\n");
    for(i=0; i<argc; i++){
        printf("%d: %s\n",i,argv[i]); 
    }

    fillTemplate("crud.t");
    fillTemplate("api.t");
}


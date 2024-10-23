#include <stdio.h>
#include <string.h>
#include <ctype.h>
char *strArticle(char *word){
  if(word[strlen(word)-1] =='s'&&word[strlen(word)-2]!='s'){
    return "the";
  }
  if (strcmp(word,"earth")==0||strcmp(word,"moon")==0||strcmp(word,"sun")==0||strcmp(word,"mars")==0||strcmp(word,"mercury")==0||strcmp(word,"jupiter")==0||strcmp(word,"saturn")==0||strcmp(word,"venus")==0||strcmp(word,"neptune")==0||strcmp(word,"uranus")==0||strcmp(word,"pluto")==0||strcmp(word,"mount everest")==0||strcmp(word,"ganga")==0||strcmp(word,"U.S.A")==0||strcmp(word,"U.K")==0||strcmp(word,"U.A.E")==0||strcmp(word,"yamuna")==0||strcmp(word,"sarswati")==0||strcmp(word,"kanchan jangha")==0){
    return "the";
  }
  if(tolower(word[0])=='a'||
    tolower(word[0])=='e'||
    tolower(word[0])=='i'||
    tolower(word[0])=='o'||
    tolower(word[0])=='u'){
    return "an";
    }else{
    return "a";
    }
}
int main(){
  char word[100];
  printf("enter a word:");
  scanf("%s",word);
  char *article = strArticle(word);
  printf("%s %s\n",article,word);
  return 0;
}
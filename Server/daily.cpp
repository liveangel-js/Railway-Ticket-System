#include "daily.h"

void writeRecord(char * a){
      FILE *fp2;//定义文件流指针，用于打开写操作的文件
      //char text[1024];//定义一个字符串数组，用于存储读取的字符

      time_t timep;
      time (&timep);
      fp2 = fopen("daily records.txt","a");//写方式打开文件b.txt
      fprintf(fp2,"%s%s",asctime(gmtime(&timep)),a);
      fclose(fp2);//关闭文件b.tx
}

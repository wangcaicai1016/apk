#include <chrono>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <ctime>
#include <dirent.h>
#include <exception>
#include <fcntl.h>
#include <fstream>
#include <iomanip>
#include <iostream>
#include <main.h>
#include <malloc.h>
#include <pthread.h>
#include <random>
#include <set>
#include <sstream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <string>
#include <sys/stat.h>
#include <sys/system_properties.h>
#include <thread>
#include <time.h>
#include <unistd.h>
#include "SysRead.h"
#include <time.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <fstream>
#include "cJSON.h"
#include "cJSON.c"

using namespace std;
ofstream outfile;
long int UE4,Array,table,物品偏移量,Array_play;
int wupiuid;
bool 枸杞哲 = false;
char 物品内容[2048];
	char aaa[30720] = "";
		char b[256];
void abd() {
  auto now = std::chrono::system_clock::now();
    std::time_t now_c = std::chrono::system_clock::to_time_t(now);
    std::tm* now_tm = std::localtime(&now_c);
    std::ostringstream filename;
    char timeStr[100];
    std::strftime(timeStr, sizeof(timeStr), "%Y-%m-%d-%H-%M", now_tm);
    filename << "/storage/emulated/0/游戏代码-" << timeStr << "输出.h";
    FILE* fp = fopen(filename.str().c_str(), "a");
  long int Firearm = getPtr64(getPtr64(UE4+0xD9DE4A8)+0x50);
  for (int i = 0x0; i < 0xAF0; i=i+0x8) {
    Array = getPtr64(getPtr64(Firearm+i)+0x30);
    if (getDword(getPtr64(Array+0x218)) == 101001) {
      枸杞哲 = true;
    writedword(Array,0);  
      break;
    }
  }
  int sum=0;
  for (int id = 0x8; id <=0x7BE60; id=id+0x18) {
    sum=sum+1;
    table = getPtr64(Array+id);
    int wupiuid = getDword(table+0x0);
    int wupiuid1 = getDword(table+0x20);
 //UTF8 Name[200] = "";
 char Name[2048];
  getUTF8(Name,getPtr64(table+0x8));
  std::string s;
  	s += "";
    s += Name;
fprintf(fp,"[%d] = {\n    ['物品名称'] = '%s'\n    ['主物品ID'] = %d\n    ['副物品ID'] = %d\n    ['偏移量']=  0x%X\n},\n",sum,Name,wupiuid,wupiuid1,id);
  }
}







int frequency_of_primes (int n) {
  int i,j;
  int freq=n-1;
  for (i=2; i<=n; ++i) for (j=sqrt(i);j>1;--j) if (i%j==0) {--freq; break;}
  return freq;
}



int main()
{
pid = getProcessID("com.tencent.tmgp.pubgmhd");
  UE4 = get_module_base(pid, "libUE4.so");
  if (pid <= 0) {
    printf("草尼玛的,游戏不打开便秘你妈呢");
    exit(0);
  }
  auto now = std::chrono::system_clock::now();
    std::time_t now_c = std::chrono::system_clock::to_time_t(now);
    std::tm* now_tm = std::localtime(&now_c);
    std::ostringstream filename;
    char timeStr[100];
    std::strftime(timeStr, sizeof(timeStr), "%Y-%m-%d-%H-%M", now_tm);
    filename << "/storage/emulated/0/和平精英-" << timeStr << "输出.h";
    FILE* fp = fopen(filename.str().c_str(), "a");
    outfile.open(filename.str().c_str(), ios::app);
  outfile << "//输出时间:" << timeStr << "\n//作者:枸杞哲" << "\n//作者QQ:2041381038\n//目标进程:com.tencent.tmgp.pubgmhd\n//UID:" << pid <<"\n//祝您生活愉快" << endl;
clock_t t;
  int f;
  t = clock();
  printf ("输出ing...\n");
  f = frequency_of_primes (99999);
abd();
t = clock() - t;
  printf ("-------------------------------\n代码输出！共耗时%f秒\n\n",t,((float)t)/CLOCKS_PER_SEC);
fclose(fp);
outfile.close();
}

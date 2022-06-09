#include&lt;unistd.h&gt;
#include&lt;fcntl.h&gt;
#include&lt;sys/types.h&gt;
#include&lt;sys/stat.h&gt;
#include&lt;stdio.h&gt;
int main(){
int n,f,f1;
char buff[10];
f=open(&quot;file.txt&quot;,O_RDWR);
lseek(f,6,SEEK_SET);
read(f,buff,6);
write(1,buff,6);
}

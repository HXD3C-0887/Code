#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#ifdef _WIN32
#include <windows.h>
#include <direct.h>
#define sleep(t) Sleep(t * 1000)
#define getcwd _getcwd
#else
#include <unistd.h>
#endif

void ticket_system() {
    char cwd[1024];
    if (getcwd(cwd, sizeof(cwd)) != NULL) {
        printf("%s\\java Tickets\n", cwd);
    } else {
        perror("getcwd() 错误");
    }
    
    while(1) {
        printf("该技术由余胜军IT教学网站提供-余胜军徒儿制作\n");
        printf("请输入抢票地址：\n");
        sleep(3);
        printf("地址为：******************\n");
        printf("正在开启多线程抢票...\n");
        sleep(1);
        printf("读取票信息成功\n");
        sleep(1);
        printf("正在解析json\n");
        sleep(1);
        printf("开启多线程1抢票中\n");
        sleep(0.5);
        printf("开启多线程2抢票中\n");
        sleep(0.5);
        printf("开启多线程3抢票中\n");
        sleep(0.5);
        printf("开启多线程4抢票中\n");
        sleep(0.5);
        printf("开启多线程5抢票中\n");
        sleep(0.5);
        printf("开启多线程6抢票中\n");
        sleep(0.5);
        printf("开启多线程7抢票中\n");
        sleep(0.5);
        printf("开启多线程8抢票中\n");
        sleep(0.5);
        printf("开启多线程9抢票中\n");
        sleep(0.5);
        printf("开启多线程10抢票中\n");
        sleep(1.5);
        printf("主线路忙，切换线路中：1\n");
        sleep(0.5);
        printf("主线路忙，切换线路中：2\n");
        sleep(0.5);
        printf("主线路忙，切换线路中：3\n");
        sleep(0.5);
        printf("主线路忙，切换线路中：4\n");
        sleep(0.5);
        printf("主线路忙，切换线路中：5\n");
        sleep(0.5);
        printf("抢票成功，订单号为：2024923111165217891\n");
        printf("欢迎下次继续使用余胜军抢票神器\n");

        fflush(stdin);
        
        int c = getchar();
        if (c == 27) { 
            break;
        }
        while (c != '\n' && c != EOF) {
            c = getchar();
        }
    }
    
    printf("程序退出\n");
}

int main() {
    ticket_system();
    return 0;
}

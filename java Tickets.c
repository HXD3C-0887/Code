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
        perror("getcwd() ����");
    }
    
    while(1) {
        printf("�ü�������ʤ��IT��ѧ��վ�ṩ-��ʤ��ͽ������\n");
        printf("��������Ʊ��ַ��\n");
        sleep(3);
        printf("��ַΪ��******************\n");
        printf("���ڿ������߳���Ʊ...\n");
        sleep(1);
        printf("��ȡƱ��Ϣ�ɹ�\n");
        sleep(1);
        printf("���ڽ���json\n");
        sleep(1);
        printf("�������߳�1��Ʊ��\n");
        sleep(0.5);
        printf("�������߳�2��Ʊ��\n");
        sleep(0.5);
        printf("�������߳�3��Ʊ��\n");
        sleep(0.5);
        printf("�������߳�4��Ʊ��\n");
        sleep(0.5);
        printf("�������߳�5��Ʊ��\n");
        sleep(0.5);
        printf("�������߳�6��Ʊ��\n");
        sleep(0.5);
        printf("�������߳�7��Ʊ��\n");
        sleep(0.5);
        printf("�������߳�8��Ʊ��\n");
        sleep(0.5);
        printf("�������߳�9��Ʊ��\n");
        sleep(0.5);
        printf("�������߳�10��Ʊ��\n");
        sleep(1.5);
        printf("����·æ���л���·�У�1\n");
        sleep(0.5);
        printf("����·æ���л���·�У�2\n");
        sleep(0.5);
        printf("����·æ���л���·�У�3\n");
        sleep(0.5);
        printf("����·æ���л���·�У�4\n");
        sleep(0.5);
        printf("����·æ���л���·�У�5\n");
        sleep(0.5);
        printf("��Ʊ�ɹ���������Ϊ��2024923111165217891\n");
        printf("��ӭ�´μ���ʹ����ʤ����Ʊ����\n");

        fflush(stdin);
        
        int c = getchar();
        if (c == 27) { 
            break;
        }
        while (c != '\n' && c != EOF) {
            c = getchar();
        }
    }
    
    printf("�����˳�\n");
}

int main() {
    ticket_system();
    return 0;
}

#include <stdio.h>
#include <pthread.h>


void *thread1(void *arg) {
    printf("www.baidu.com\n");
    return ;
}

void *thread2(void *arg) {
    printf("www.google.com\n");
    return ;
}


int main() {
    int res;
    void *thread_result;
    // 创建线程变量
    pthread_t mythread1, mythread2;
    

    res = pthread_create(&mythread1, NULL, thread1, NULL);
    if (res != 0) {
        printf("线程创建失败\n");
    }

    res = pthread_create(&mythread2, NULL, thread2, NULL);
    if (res != 0) {
        printf("线程创建失败\n");
    }


    //阻塞主线程，直至mythread1 结束
    res = pthread_join(mythread1, &thread_result);
    //printf("%s\n", (char*) thread_result);

    res = pthread_join(mythread2, &thread_result);
    //printf("%s\n", (char*) thread_result);
    printf("主线程执行结束\n");
    return 0;
}

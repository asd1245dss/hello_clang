//
// Created by Administrator on 2018/3/27.
//
#include <stdio.h>
#include <sys/stat.h>

/**
 * 用户结构体
 */
struct User;

/**
 * 写入文件
 * @param filePath 写入文件的路径
 *
 */
void writeFile(char* filePath);

/**
 * 读取文件
 * @param filePath 读取文件的路径
 *
 */
void readFile(char* filePath);


void main() {
    char* filePath = "/tmp/test.txt";

    writeFile(filePath);
    readFile(filePath);
}

void writeFile(char* filePath) {
    FILE* file = NULL;

    file = fopen(filePath, "w+");

    fprintf(file, "This is testing for fprintf...\n");
    fputs("This is testing for fputs...\n", file);

    fclose(file);
}

void readFile(char* filePath) {
    FILE* file = NULL;
    struct stat fileStruct;
    unsigned long fileSize = (unsigned long) fileStruct.st_size;

    stat(filePath, &fileStruct);
    printf("Current file size is %lu\n", fileSize);

    char buffer[fileSize];
    file = fopen(filePath, "r");
    fscanf(file, "%s", buffer);
    printf("1: %s\n", buffer);

    fclose(file);
}

struct User {

    char* username;
    char* password;

};


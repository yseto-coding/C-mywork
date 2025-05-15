
#include <fcntl.h>      // open()
#include <unistd.h>     // close()
#include <stdio.h>      // printf(), perror()
#include <stdlib.h>     // free()
#include "get_next_line.h" // get_next_line関数のプロトタイプ

int main(void)
{
    int     fd;
    char    *line;

    fd = open("test.txt", O_RDONLY);
    if (fd < 0)
    {
        perror("Error opening test.txt");
        return (1);
    }

    while ((line = get_next_line(fd)) != NULL)
    {
        printf("%s", line);  // 1行を出力（line内に\n含む）
        free(line);          // メモリ解放
    }

    close(fd);
    return (0);
}

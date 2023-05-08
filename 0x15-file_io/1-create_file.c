#include "main.h"

/**
 * create_file - function that creates a file.
 * @filename: A pointer to the name of the file to create.
 * @text_content: A pointer to a string to write to the file.
 * Return: If the function fails - -1 otherwise - 1.
 */
int create_file(const char *filename, char *text_content)
{
    int fd, len;

    if (filename == NULL)
        return (-1);

    fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC | O_EXCL, 0600);
    if (fd == -1) {
        if (errno == EEXIST) {
            fd = open(filename, O_WRONLY | O_TRUNC);
        }
    }
    if (fd == -1)
        return (-1);

    if (text_content != NULL) {
        len = strlen(text_content);
        if (write(fd, text_content, len) != len) {
            close(fd);
            return (-1);
        }
    }

    close(fd);
    return (1);
}

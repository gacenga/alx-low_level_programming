#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <elf.h>

void print_error_exit(const char *message) {
    fprintf(stderr, "%s\n", message);
    exit(98);
}

void print_elf_header(const Elf64_Ehdr *header) {
  int i;
  printf("ELF Header:\n");
    printf("  Magic:   ");
    for (i = 0; i < EI_NIDENT; i++) {
        printf("%02x ", header->e_ident[i]);
    }
    printf("\n");


}

int main(int argc, char *argv[]) {
  const char *elf_filename;
  Elf64_Ehdr elf_header;
  int fd;
  if (argc != 2) {
        print_error_exit("Usage: elf_header elf_filename");
    }

    elf_filename = argv[1];
    fd = open(elf_filename, O_RDONLY);

    if (fd == -1) {
        print_error_exit("Error: Couldn't open the ELF file");
    }

   
    if (read(fd, &elf_header, sizeof(Elf64_Ehdr)) != sizeof(Elf64_Ehdr)) {
        print_error_exit("Error: Couldn't read the ELF header");
    }

    if (lseek(fd, 0, SEEK_SET) == -1) {
        print_error_exit("Error: Couldn't seek back to the beginning of the file");
    }

    print_elf_header(&elf_header);

    close(fd);

    return 0;
}

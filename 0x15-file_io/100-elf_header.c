#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <elf.h>

void display_elf_header_info(const char *filename) {
    int fd = open(filename, O_RDONLY), i;
    if (fd == -1) {
        dprintf(STDERR_FILENO, "Error: Could not open file %s\n", filename);
        exit(98);
    }

    Elf64_Ehdr elf_header;
    ssize_t bytes_read = read(fd, &elf_header, sizeof(Elf64_Ehdr));
    if (bytes_read != sizeof(Elf64_Ehdr)) {
        dprintf(STDERR_FILENO, "Error: Could not read ELF header from file %s\n", filename);
        close(fd);
        exit(98);
    }

    if (elf_header.e_ident[EI_MAG0] != ELFMAG0 || 
        elf_header.e_ident[EI_MAG1] != ELFMAG1 ||
        elf_header.e_ident[EI_MAG2] != ELFMAG2 ||
        elf_header.e_ident[EI_MAG3] != ELFMAG3) {
        dprintf(STDERR_FILENO, "Error: Not a valid ELF file: %s\n", filename);
    close(fd);
        exit(98);
    }

    printf("ELF Header:\n");
    printf("  Magic:   ");
    for (i = 0; i < EI_NIDENT; i++) 
    {
        printf("%02x ", elf_header.e_ident[i]);
    }
    printf("\n");
    printf("  Class:                             %s\n", (elf_header.e_ident[EI_CLASS] == ELFCLASS32) ? "ELF32" : "ELF64");
    printf("  Data:                              %s\n", (elf_header.e_ident[EI_DATA] == ELFDATA2LSB) ? "2's complement, little endian" : "Unknown");
    printf("  Version:                           %d (current)\n", elf_header.e_ident[EI_VERSION]);
    printf("  OS/ABI:                            %s\n", elf_header.e_ident[EI_OSABI] == ELFOSABI_SYSV ? "UNIX - System V" : "Unknown");
    printf("  ABI Version:                       %d\n", elf_header.e_ident[EI_ABIVERSION]);
    printf("  Type:                              %s\n", (elf_header.e_type == ET_EXEC) ? "EXEC (Executable file)" : "Unknown");
    printf("  Entry point address:               0x%lx\n", (unsigned long)elf_header.e_entry);

    close(fd);
}

int main(int argc, char *argv[]) {
    if (argc != 2) {
        dprintf(STDERR_FILENO, "Usage: %s elf_filename\n", argv[0]);
        return 98;
    }

    const char *filename = argv[1];
    display_elf_header_info(filename);

    return 0;
}


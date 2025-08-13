<p align="center">
 <img src="https://github.com/leogaudin/42_project_badges/raw/main/badges/get_next_line_bonus.webp" alt="get_next_line Badge"></br>
 <img src="https://img.shields.io/badge/get_next_line-125%2F100-green?style=flat-square&color=green" alt="42 get_next_line Score" />
</p>

# The get_next_line Project

get_next_line is one of the foundational projects in the 42 curriculum.
Its purpose is to create a C function capable of reading from a file descriptor one line at a time, regardless of line length or buffer size.

The project teaches an important concept in C programming — static variables — along with file reading, buffer management, and efficient memory handling.

---

## 📌 Project Overview

You must implement the following function:

 ...char *get_next_line(int fd); ...

Your function should:
- Read a line from the given file descriptor.
- Return the line, including the newline (\n) if present.
- Return NULL if there’s nothing more to read or an error occurs.

---

## 📜 Mandatory Requirements

| Item | Description |
|-----------------|-----------------|
| Function name | get_next_line |
| Prototype | char *get_next_line(int fd); |
| Files to submit | get_next_line.c, get_next_line_utils.c, get_next_line.h |
| Parameters | fd → File descriptor to read from |
| Return value | String of the read line, or NULL if end of file/error |
| Allowed functions | read, malloc, free |
| Forbidden | lseek, global variables, libft usage in mandatory part |

Additional rules:
- The function must work with any valid file descriptor, including standard input.
- It must compile with -D BUFFER_SIZE=n (different values will be tested).
- The returned string memory must be dynamically allocated and properly freed.

---

## 🛠️ Key Concepts Learned

- Using read() in loops to get partial data.
- Managing buffers for efficient data handling.
- Keeping state between function calls via static variables.
- Avoiding memory leaks and respecting 42 Norm.

---

## 🔹 Bonus Part

If the mandatory part is perfect, you can add:

- One single static variable managing state for all file descriptors.
- Function capable of reading from multiple FDs without losing track between them.

Bonus file names:

 ...get_next_line_bonus.c ...get_next_line_bonus.h ...get_next_line_utils_bonus.c ...

---

## 📂 Project Structure

Example structure:

 ...├── get_next_line.c ...├── get_next_line.h ...├── get_next_line_utils.c ...├── get_next_line_bonus.c ...├── get_next_line_bonus.h ...├── get_next_line_utils_bonus.c ...└── Makefile ...

Makefile rules:
 ...NAME, all, clean, fclean, re, bonus ...

---

## 💻 Compilation

 ...# Example: BUFFER_SIZE = 42 ...cc -Wall -Wextra -Werror -D BUFFER_SIZE=42 get_next_line.c get_next_line_utils.c -o gnl_test ...

Run:
 ..../gnl_test ...

---

## ✏️ Usage Example

c ...#include <fcntl.h> ...#include <stdio.h> ...#include "get_next_line.h" ... ...int main(void) ...{ ... int fd = open("file.txt", O_RDONLY); ... char *line; ... ... while ((line = get_next_line(fd)) != NULL) ... { ... printf("%s", line); ... free(line); ... } ... close(fd); ... return (0); ...} ...

---

## ✅ Benefits of the Project

- Strong understanding of file I/O in C.
- Mastery of buffered reading.
- Improved skills in state management without globals.
- Knowledge applicable to network streams and real-time input handling.

---

## 📖 Conclusion

The get_next_line project is an important milestone in the 42 program.
It builds the foundations for handling input streams efficiently, a core skill for many future projects.

---

This README is a public summary based on general project description and does not disclose confidential content from the official subject.
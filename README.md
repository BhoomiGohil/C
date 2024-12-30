To run a C project, follow these steps:

### 1. **Set Up Your Environment**

- **Install a Compiler**: Ensure you have a C compiler installed, such as GCC (GNU Compiler Collection).
  - On Windows: Install MinGW or TDM-GCC.
  - On Linux/Mac: GCC is usually pre-installed. If not, use your package manager (e.g., `sudo apt install gcc` on Ubuntu).
- **Install an IDE or Text Editor**: Use tools like Visual Studio Code, Code::Blocks, or a terminal-based editor like Vim.

---

### 2. **Prepare Your Code**

- Create a `.c` file containing your program code. For example, `main.c`:

```c
#include <stdio.h>

int main() {
    printf("Hello, World!\n");
    return 0;
}
```

---

### 3. **Compile Your Project**

Open a terminal or command prompt, navigate to the directory containing your `.c` file, and compile it:

```bash
gcc -o output_file_name main.c
```

Replace `output_file_name` with the desired name for your compiled program. For example:

```bash
gcc -o my_program main.c
```

---

### 4. **Run the Compiled Program**

After successful compilation, run the program:

```bash
./output_file_name
```

Example:

```bash
./my_program
```

This will output:

```
Hello, World!
```

---

### 5. **Run Complex Projects**

- For multi-file projects, compile all files together:
  ```bash
  gcc -o my_program file1.c file2.c file3.c
  ```
- Use `Makefile` for larger projects to simplify the build process.

---

### Troubleshooting

- **Missing Compiler**: Install GCC or another compiler.
- **Errors During Compilation**: Check the error messages and fix issues in your code.
- **Path Issues**: Ensure GCC is in your system’s PATH.

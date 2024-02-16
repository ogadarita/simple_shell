## Simple UNIX Command Interpreter (Shell)

This project is a simple UNIX command interpreter, also known as a shell. It allows users to interact with the operating system by typing commands and executing them.

### How it Works

The shell acts as a bridge between the user and the operating system. When a user inputs a command, the shell interprets it, performs the necessary actions, and communicates with the operating system to execute the command.

### Key Concepts

Here are some key concepts to understand about this shell:

- **Process ID (PID) and Parent Process ID (PPID):** Each process running on the system has a unique PID. The PPID refers to the PID of the process that created the current process.
  
- **Environment Manipulation:** The shell allows manipulation of the environment of the current process, including variables and settings.

- **Function vs. System Call:** Functions are blocks of code that perform specific tasks within a program, while system calls are requests made by a program to the operating system for services such as file operations or process management.

- **Creating Processes:** The shell can create new processes using system calls provided by the operating system, allowing for concurrent execution of multiple programs.

- **Main Prototypes:** The `main` function, which serves as the entry point for a program, can have three prototypes:
  - `int main()`
  - `int main(int argc, char *argv[])`
  - `int main(int argc, char *argv[], char *envp[])`

- **Using PATH to Find Programs:** The shell uses the PATH environment variable to locate executable programs specified by the user.

- **Executing Programs with `execve`:** The `execve` system call is used to execute another program, replacing the current process with the specified program.

- **Process Suspension:** The shell can suspend the execution of a process until one of its child processes terminates using system calls like `wait` or `waitpid`.

- **End-of-File (EOF):** EOF is a special character that marks the end of a file when reading data.

### Getting Started

To run the shell, follow these steps:

1. Clone the repository to your local machine.
2. Compile the shell source code using your preferred compiler.
3. Execute the compiled binary to start the shell.

### Contributions

Contributions to this project are welcome! If you have ideas for improvements or new features, feel free to submit a pull request.

### Acknowledgments

This project was inspired by the need for a simple UNIX command interpreter and the desire to understand the inner workings of shells and operating systems. Special thanks to the open-source community for their contributions and support.

## For Knowledge’s Sake😆📚

1. **Original UNIX Operating System:**
   The original UNIX operating system was designed and implemented by a team of developers at Bell Labs, primarily by Ken Thompson, Dennis Ritchie, Brian Kernighan, Douglas McIlroy, and others. They developed UNIX in the late 1960s and early 1970s.

2. **First Version of the UNIX Shell:**
   The first version of the UNIX shell, called the Thompson shell or sh, was written by Ken Thompson himself. It was one of the fundamental components of the UNIX operating system, providing users with an interface to interact with the system through commands and scripts.

3. **Inventor of the B Programming Language:**
   The B programming language, which was the direct predecessor to the C programming language, was developed by Ken Thompson in 1969 at Bell Labs. B was designed to improve upon the BCPL language and was used to implement early versions of the UNIX operating system.

4. **Ken Thompson:**
   Ken Thompson is a computer scientist and one of the key figures in the development of UNIX and the C programming language. He worked at Bell Labs (now part of Nokia Bell Labs) for most of his career. Thompson, along with Dennis Ritchie, played a central role in the creation of UNIX and the development of the C programming language, which has had a profound influence on modern computing. Thompson's contributions to computer science also include the creation of the B programming language, early work on computer security, and pioneering efforts in operating systems design. He received numerous awards for his contributions to computing, including the Turing Award in 1983.


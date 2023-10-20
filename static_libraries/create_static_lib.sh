   #!/bin/bash
   # This script compiles all .c files in the current directory into .o files
   gcc -c *.c
   # This script creates a static library from all .o files
   ar -rc liball.a *.o

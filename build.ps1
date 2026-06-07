# Compile
# -Wall = turns on compiler warnings
# -Wextra = turns on more warnings
# -std = sets the c++ standard the compiler is using
g++ -Wall -Wextra -std=c++17 *.cpp -o main.exe

# Run if compiled successfully
if ($LASTEXITCODE -eq 0) {
  clear
  .\main.exe
}

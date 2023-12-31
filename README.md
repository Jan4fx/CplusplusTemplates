C++ Code That Can Easily Be Integrated Into Your Programs

-FILES-
helloWorld.cpp ~ prints "Hello, World!" to the console

factorialIterative.cpp ~ Calculates the factorial of user prompt using iterative approach 

                        (*special compile* -> g++ -DRUN_MAIN factorialIterative.cpp -o factorialIterative)
                        
testFactorialIterative.cpp ~ Test File based off of hard coded prompts 

                        (*special compile* -> g++ factorialIterative.cpp testFactorialIterative.cpp -o TestFactorialIterative)

bogoSort.cpp ~ Sorts array at average complexitity of O((n+1)!) and worst case of infinity/infinitum
                        (*special compile* -> g++ -DRUN_MAIN bogoSort.cpp -o bogoSort)
                        
bubbleSort.cpp ~ Sorts array at average/worst case complexity of O(n^2) best case of O(n)
                        (*special compile* -> g++ -DRUN_MAIN bubbleSort.cpp -o bubbleSort)

countingSort.cpp ~ Sorts array based on keys between a specific range time complexity of O(n+k)
                        (*special compile* -> g++ -DRUN_MAIN countingSort.cpp -o countingSort)

testSort.cpp ~ Randomly generates array and then tests bogoSort and bubbleSort for efficiency
                        (*special compile* -> g++ testSort.cpp bogoSort.cpp bubbleSort.cpp countingSort.cpp -o testSort)
               
factorialRecursive.cpp ~ Calculates the factorial of user prompt using recursive approach 

storeName.cpp ~ Stores user prompted name into name.txt

greetName.cpp ~ Checks to see if name.txt is empty if so will call storeName, afterwards will greet the user's name


-COMPILING- (creates a .exe executable of your c++ program, do for all not labeled special compile)

g++ nameOfFile.cpp -o nameOfFile


-COMPILE ALL- (will not compile files in subdirectories) (will not work with special compiles)

for %i in (*.cpp) do clang++ "%i" -o "%~ni"


-Executing-

nameOfFile


-INSTALLATIONS-

INSTALL C++ Compiler~LLVM-MINGW CLANG V 16.0.6

For 64 bit Windows I did: https://www.mingw-w64.org/downloads/     LLVM-MinGW

Download on Github https://github.com/mstorsjo/llvm-mingw/releases/tag/20230614

For Windows 10 download UCRT for older use MSVCRT

For Intel Processesor on a Windows 10 I downloaded this one llvm-mingw-20230614-ucrt-x86_64.zip 

After download add to path C:\Users\username\Downloads\llvm-mingw-20230614-ucrt-x86_64\bin


-.GITIGNORE-

will ignore all .exe and name.txt

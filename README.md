# Practice-about-SVN
Develop a small program while maintaining your development history with Apache Subversion (svn).

1. Create a new directory with your student ID number as name and enter this directory (in the following I assume 12345678 as the ID number - please
replace this with your own student ID). Within this directory, create three directories named “mysvn”, “mycode” and “mybranch”.
2. Within the mysvn directory create an empty svn repository called “myapp” for your svn project.
3. Make sure to import sub-directories “trunk”, “tags” and “branches” into your repository.
4. Change to directory mycode and checkout the (empty) trunk folder from your repository.
5. In the checked out trunk directory create files “myapp.cpp”, “myfunctions. cpp”, “myfunctions.h” and “Makefile” with the following content:
myfuncions.cpp contains a simple function that receives a name as parameter and simply prints ”Hello name” to the screen (where name is
replaced with the passed parameter). myfunctions.h contains an include guard and a declaration for the function defined in myfunctions.cpp.
myapp.cpp #includes myfunctions.h and contains a main() function that prompts the user for a name and calls the function in myfunction.cpp
with the entered name. Makefile contains a makefile for your application (I will use this to compile your program!)
Use svn to add these files to your repository (do not commit yet).
6. Compile and test your program - if it is working correctly, commit your code to your repository using log message “first program working”.
7. Modify your function in myfunctions.cpp: Change the output to ”Hello name my name is myName”, where myName is your name. Compile and
test your application - if it is working correctly, commit your code to your repository using log message “second program working”.
8. Create a tag for your solution in the repository’s tag folder - use name “release1-0” for your tag.
9. Create a branch of your program in the repository’s branches folder and name this branch “newdevelopment”.
10. Go to the mybranch directory and check out your newly created branch “newdevelopment”.
11. Add a function void printFractions() to the branch’s file myfunctions.cpp and add a corresponding declaration to myfunctions.h. This function uses
a for-loop to print fractions 1/i for i from 1 to 10 (both inclusive) and also their corresponding floating point value (i.e. first two lines will be
“1/1 = 1” and “1/2 = 0.5”). Add a function call to this function to main in myapp.cpp. Compile and test your branch - if everything is working,
commit your changes to your branch (please make sure you did not modify the previous function in any way) using log message “initial branch version”.
12. Change back to the mycode directory and change the output of the “hello” function to ”Hello name my name is myName - nice to meet you”. Compile
and test your application - if it is working correctly, commit your code to your repository using log message “update number 1 to trunk”.
13. Change back to the mybranch folder and make sure to bring your branch in sync with the last modifications to the trunk - i.e. merge your trunk
into your branch. If you encounter a conflict (you shouldn’t), try to resolve it but make sure that the modifications from the trunk will get into your
branch.
14. Compile and test your branch - if it is working correctly, commit your code to your repository using log message “branch in sync with update number
1 to trunk”.
15. Create a tag for your branch in the repository’s tag folder - use name “branch1-0” for your tag.
16. Add a new function to your branch’s myfunctions.cpp file that recieves a name as parameter and prints “Goodbye name - it was nice to meet you”.
Don’t forget to declare this function in the header file. Add a function call to this function to main in myapp.cpp. Compile and test your branch
- if everything is working, commit your changes to your branch using log message “updated branch version”.
17. Change back to the mycode folder and make sure your trunk is up-to-date.
18. Reintegrate your branch into your trunk. Compile and test your trunk. If everything is working commit with log message “trunk updated to branch”.
19. Remove the now useless branch from the repository.
20. Create a tag for your trunk in the repository’s tag folder - use name “release2-0” for your tag.

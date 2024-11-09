// Use for setting up VS Code for CPP
// https://code.visualstudio.com/docs/cpp/config-mingw

// To Learn CPP
// https://www.learncpp.com/

#include <iostream>

int main()
{
  std::cout << "Hello, world!";
  return 0;
}

// VS Code does not automatically add a newline to the end of code files that are missing it
// (something that is pedantically required by the C++ standard).
// Fortunately, we can tell VS Code to do so:

// Open VS Code and go to File (Code if using a Mac) > Preferences > Settings.
// Enter insert final newline into the search bar.
// In both the Workspace Settings and User Settings tabs
// ensure the checkbox labeled Files: Insert Final Newline is checked.

// Editing the tasks file in VS Code
/*
"args": [
        "-fdiagnostics-color=always",
        "-g",

        // Choose build versions //
        "-ggdb", // Debug build
        // Disable the debug build line and enable the release build lines below to build a release version
        //        "-O2",      // Relese build (Optimization level)
        //        "-DNDEBUG", // Release build (Disable assert)

        // Disable non-standard language extensions
        "-pedantic-errors",

        // Increase warning levels
        "-Wall",
        "-Weffc++",
        "-Wextra",
        "-Wconversion",
        "-Wsign-conversion",

        //  Treat warnings as errors
        "-Werror",

        // Use C++20 Standard (Default is C++17)
        "-std=c++20",

        "${file}",
        "-o",
        "${fileDirname}\\${fileBasenameNoExtension}.exe"
      ],
      */

// Editing the settings files in VS Code
/*
// Configure intellisense to use the C++23 standard
  "C_Cpp.default.cppStandard": "c++20"
*/

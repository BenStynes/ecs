# Instructions for Use

### 1. Download and install VS code:
> https://code.visualstudio.com/Download

### 2. Install the C/C++ extension in VS code 
> ctrl+shift+x search for @ext:ms-vscode.cpptools or C/C++ IntelliSense, debugging, and code browsing. Install this plugin.

### 3. Install MSYS2 (following steps taken from the bottom of Phil's notes):
> 1. Download Msys from https://www.msys2.org/
>
> *NOTE Msys is a helpful installer that uses a package manager called `pacman'. Pacman is used in Arch Linux for package management.*
>
> 2. Run the Msys terminal
> 3. Update the package database and base packages type pacman -Syu
> 4. Run "MSYS2 MSYS" and update the rest of the base packages with pacman -Su
> 5. Open "MSYS2 MSYS" terminal and type pacman -S mingw-w64-x86_64-gcc to install gcc / g++
> 6. To install GDB Open "MSYS2 MSYS" terminal and type pacman -S mingw-w64-x86_64-gdb
> 7. Open "MSYS 64" and type g++ to check g++ is installed. Type gdb to check that gdb is installed.
> 8. Modify system path to include path to mingw64 C:\msys64\mingw64\bin
> 9. Open up a command prompt and type g++ --version to check g++ is installed. Type gdb --version to check that gdb is installed.
 
### 4. Download the Development SDL Library
> Download SDL from the link highlighted in the below picture:
>
> [To be added]

### 5. Set up SDL
> 1. Unzip the downloaded file until you have a plain folder (you will need to unzip the unzipped file).
> 2. Move the folder "SDL2-2.0.16" from the unzipped folder to the root of your C drive.
> 3. Create a new environment variable with the name "SDL_SDK" and the value of "C:\SDL2-2.0.16\i686-w64-mingw32"
> 4. Add the value of "C:\SDL2-2.0.16\i686-w64-mingw32\bin" to the system environment path.

### 6. Download project files and build (This is a placeholder for more detailed instructions on creating the project)
> 1. Clone this repo: https://github.com/MichaelRRyan/SDL2-Make-Gameloop
> 2. Open MSYS2 and navigate into the repo's folder.
> 3. Type "make" and hit enter.
>
> The project should build the executable to a "bin" folder in the repo's folder. Run this file to make sure it works, it should print out messages about updating and such.

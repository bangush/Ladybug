# Ladybug

[![License: MIT](https://img.shields.io/badge/License-MIT-yellow.svg)](https://opensource.org/licenses/MIT)

Ladybug (or LaDbg) is a debugger that allows users to disassemble and debug native and .NET applications, regardless of whether the source of the target application is available or not.

The Ladybug project is written in C# and consists of reusable core libraries that exposes debugging capabilities to .NET applications.

## Features

- Launch any x86 application in the debugger.
- Break execution at any given time.
- View and edit x86 register values.
- Disassemble x86 assembly code with instruction highlighting.
- Set breakpoints in the x86 code and memory.
- Step through the x86 code.
- View loaded libraries.
- View running threads.
- Dump and edit memory.
- Receive debug messages given by functions such as OutputDebugString or Debug.Print.
- Break on exceptions and consume them or pass them to the debuggee.

## How to use

1. Download the project as a ZIP file and extract the contents, or clone the project using git. Be sure to also download the submodules:

```bash
git clone --recurse-submodules https://github.com/Washi1337/Ladybug/ 
```

2. Compile the application using your IDE of choice, or by executing `msbuild` in the `src` folder.

3. Run `Ladybug.Console.X86.exe` in `src/Main/Ladybug.Console.X86/bin/<configuration>`.

```bash
LadyBug.Console.exe MyApplicationToDebug.exe
```

4. Type in `help` for all available commands.

## Todo

Ladybug is a project that is still in development. Below is a non-exhaustive list that is planned to be added:

- Graphical user interface application.
- Thread context switching.
- View contents of stack.
- Modifying x86 code.
- 64-bit application debugging.
- More .NET-specific debugging capabilities, such as IL debugging.
- Plugins support for the standard user interface applications.

## Libraries used

The Ladybug project is powered by the following libraries:

- [AsmResolver](https://github.com/Washi1337/AsmResolver) : Disassembly of applications. [![License: LGPL v3](https://img.shields.io/badge/License-LGPL%20v3-blue.svg)](https://www.gnu.org/licenses/lgpl-3.0)

## Screenshots

Startup:

[![Startup](doc/startup.png)](doc/startup.png)

Disassembly and breakpoints:

[![Breakpoints](doc/breakpoints.png)](doc/breakpoints.png)

Exception handling:

[![Exception handling](doc/exceptions.png)](doc/exceptions.png)

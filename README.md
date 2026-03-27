# 💻 C++ Academic Archive

<div align="center">

**The British University in Egypt (BUE)**

![C++](https://img.shields.io/badge/C++-17-black?style=for-the-badge&logo=c%2B%2B&logoColor=white)
![Platform](https://img.shields.io/badge/Platform-Windows%20%7C%20Linux%20%7C%20macOS-000000?style=for-the-badge)
![Status](https://img.shields.io/badge/Academic-Projects-000000?style=for-the-badge&logo=github)

</div>

A collection of terminal-based C++ applications developed during coursework and independent practice at the **British University in Egypt (BUE)**. Each project may have multiple iterations, representing continuous improvement, refactoring, and feature expansion.

---

## 📚 About

This repository serves as an academic and practical archive of my C++ work. All applications run in the terminal and are organized into separate project directories.

---

## 🛠️ Technologies & Tools

| Category | Details |
|---|---|
| **Language** | C++17 |
| **Compilers** | GCC / g++ · MSVC |
| **Editors** | VS Code · Visual Studio |
| **Platforms** | Windows · Linux · macOS |

### Recommended VS Code Extension

[**Better Comments**](https://marketplace.visualstudio.com/items?itemName=aaron-bond.better-comments) by Aaron Bond — annotate code with color-coded alerts, TODOs, informational notes, and more.

---

## ▶️ Build & Run

### Using VS Code

1. **Install prerequisites**
   - [Visual Studio Code](https://code.visualstudio.com/)
   - A C++ compiler:
     - **Windows:** [MinGW](https://www.mingw-w64.org/) or [MSYS2](https://www.msys2.org/)
     - **Linux:** `sudo apt install g++`
     - **macOS:** `xcode-select --install`

2. **Open the project folder**
   `File → Open Folder → select your project directory`

3. **Compile** — open the integrated terminal (<kbd>Ctrl</kbd>+<kbd>`</kbd>) and run:
   ```bash
   g++ main.cpp -o program
   ```

4. **Run**
   ```bash
   # Linux / macOS
   ./program

   # Windows
   program.exe
   ```

---

### Using Visual Studio

1. **Install prerequisites**
   - [Visual Studio](https://visualstudio.microsoft.com/) with the **Desktop development with C++** workload enabled.

2. **Create a new project**
   `Create a new project → Console App (C++) → name and choose a location`

3. **Add source files**
   - Copy the `.cpp` files into your project folder.
   - In the Solution Explorer: `Right-click Source Files → Add → Existing Item → select the .cpp files`

4. **Build & run**

   | Action | Shortcut |
   |---|---|
   | Build solution | `Build → Build Solution` |
   | Run without debugging | <kbd>Ctrl</kbd>+<kbd>F5</kbd> |
   | Run with debugging | <kbd>F5</kbd> |
   
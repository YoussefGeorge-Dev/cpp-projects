<div align="center">

# 🏧 ATM Project
**The British University in Egypt (BUE)**

![C++](https://img.shields.io/badge/C++-17-black?style=for-the-badge&logo=c%2B%2B&logoColor=white)&nbsp;&nbsp;![Platform](https://img.shields.io/badge/Platform-Windows%20%7C%20Linux%20%7C%20macOS-000000?style=for-the-badge)&nbsp;&nbsp;![Status](https://img.shields.io/badge/Status-Active-2ea44f?style=for-the-badge)&nbsp;&nbsp;![Version](https://img.shields.io/badge/Latest-V1.0-0e75b6?style=for-the-badge)

</div>

---

## 📖 Overview

A terminal-based ATM simulation written in C++, developed alongside coursework at the **British University in Egypt (BUE)** and supplemented through self-study.

Each version rewrites the application using newly learned C++ concepts — the features stay the same, the code gets better.

---

## 📁 Project Structure

```
ATM-Project/
├── V1.0/
│   └── atm_v1.cpp
├── V2.0/
│   └── atm_v2.cpp
├── V3.0/
│   └── atm_v3.cpp
└── README.md
```

---

## 🗂️ Version Roadmap

| Version | Status | Concepts |
|---------|--------|----------|
| **V1.0** | ✅ Complete | Variables, `if/else`, `while`, `switch/case` |
| **V2.0** | 🔜 Planned  | Functions, arrays, pointers |
| **V3.0** | 🔜 Planned  | Classes & OOP |

---

## ✨ Features

| Feature | Details |
|---------|---------|
| PIN Login | 4-digit PIN — blocked after 3 failed attempts |
| Check Balance | Displays current account balance |
| Deposit | Adds funds with input validation |
| Withdraw | Deducts funds — rejects if insufficient |
| Exit | Ends the session cleanly |

---

## 📚 Concepts by Version

### V1.0 — Fundamentals
> *Variables, conditionals, loops — nothing else.*

The entire application lives inside `main()`. No functions, no classes, no arrays. Every feature is built using only the most basic building blocks of C++. The goal of this version is clarity over structure.

- `int`, `double`, `string`, `bool`
- `cin` / `cout`
- `if` / `else if` / `else`
- `while`
- `switch` / `case` / `default`

### V2.0 — Procedural Programming *(coming soon)*
> *Breaking the monolith — logic moved into functions, data into arrays.*

V1.0's single `main()` block is refactored into focused, reusable functions. Arrays are introduced to support multiple accounts, and pointers provide a foundation for understanding memory.

- Functions — parameters, return types, scope
- Arrays — storing and iterating over multiple accounts
- Pointers — memory addresses, references, dynamic allocation

### V3.0 — Object-Oriented Programming *(coming soon)*
> *Thinking in objects — the application is redesigned around classes.*

The procedural code of V2.0 is redesigned using OOP principles. An `Account` class encapsulates balance and PIN logic. An `ATM` class manages the session. This version reflects how real-world banking software is structured.

- Classes & objects
- Constructors & destructors
- Access modifiers — `public` / `private`
- Encapsulation & separation of concerns

---

## ▶️ Build and Run

### Using Visual Studio Code

**1. Install prerequisites**
- Visual Studio Code
- C++ compiler:
  - Windows: [MinGW](https://www.mingw-w64.org/) or [MSYS2](https://www.msys2.org/)
  - Linux: `g++`
  - macOS: Xcode Command Line Tools

**2. Compile and run**

```bash
g++ filename.cpp -o atm
```

```bash
# Linux / macOS
./atm

# Windows
atm.exe
```

### Using Visual Studio

**1. Install prerequisites**
- Visual Studio with **Desktop development with C++** enabled

**2. Set up the project**
1. **Create a new project** → **Console App (C++)**
2. Right-click **Source Files** → **Add** → **Existing Item** → select the `.cpp` file
3. **Build** → **Build Solution**
4. **Ctrl + F5** to run without debugging — **F5** to run with debugging

---

## 🔐 Default Credentials

| Field | Value |
|-------|-------|
| PIN | `1234` |
| Starting Balance | `5000.00 EGP` |

> To modify, edit `correctPIN` and `balance` at the top of `main()`.
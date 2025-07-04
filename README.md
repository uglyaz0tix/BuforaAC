# BuforaAC - Next Generation Anti-Cheat Solution (Alpha)

[![License: MIT](https://img.shields.io/badge/License-MIT-yellow.svg)](https://opensource.org/licenses/MIT)
[![Platform: Linux](https://img.shields.io/badge/Platform-Linux-blue)](https://github.com/uglyaz0tix/BuforaAC)
[![Build Status](https://img.shields.io/github/actions/workflow/status/uglyaz0tix/BuforaAC/build.yml)](https://github.com/uglyaz0tix/BuforaAC/actions)
[![Stage: Alpha](https://img.shields.io/badge/Stage-Alpha-orange)](https://github.com/uglyaz0tix/BuforaAC)
[![Contact Email](https://img.shields.io/badge/Contact-buforaac%40proton.me-blue)](mailto:buforaac@proton.me)

<img src="https://raw.githubusercontent.com/uglyaz0tix/BuforaAC/main/assets/bufora_logo.png" width="200" align="right">

> :warning: **Alpha Version Notice**  
> BuforaAC is currently in **Alpha stage**. The system is under active development and may contain bugs.  
> Use in production environments is not recommended. API and features may change without notice.

BuforaAC is a cutting-edge anti-cheat system designed to protect multiplayer games from hackers and cheaters. Combining low-level security techniques with intelligent detection algorithms, BuforaAC provides robust protection against memory manipulation, code injection, and other cheating techniques.

## 🔥 Key Features
- **Memory Protection**: Real-time scanning for cheat signatures
- **Anti-Debug**: Advanced debugging and tracing detection
- **Kernel-Level Security**: eBPF integration for Linux systems
- **Behavior Analysis**: Detection of unnatural player actions
- **Code Integrity**: Protection against binary modification
- **Cross-Platform**: Supports Linux and Windows
- **Self-Protection**: Advanced techniques to prevent anti-cheat tampering

## 🚀 Getting Started (Alpha)

### Prerequisites
- GCC/G++ (v11+)
- CMake (v3.15+)
- Linux kernel (5.4+ for eBPF features)
- SFML (for test applications)

### Installation
Download a BuforaAC from official site. (IN DEVELOPING!)


#### How to use?

In your code:

#include "buforaac.h"

int main() {
    // Initialize anti-cheat
    BuforaAC::init();
    
    // Game loop
    while(game_running) {
        BuforaAC::check();
        // Game logic
    }
    
    return 0;
}

ONLY C++/C!

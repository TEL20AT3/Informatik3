# Informatik3
Informatik 3 Vorlesungsmaterialien


## Infos zu VsCode und mingw compiler

- Detailliertere Infos folgen mit Beispiel setup
- Link zur VsCode Seite:
  - [Gcc auf Windows mit VsCode](https://code.visualstudio.com/docs/cpp/config-mingw)
  - [Mac mit VsCode](https://code.visualstudio.com/docs/cpp/config-clang-mac)  

**MinGW C++ compiler auf Windows installieren**
- Abgespeckte Version direkt mit dem [MinGW Installer von Sourceforge](https://sourceforge.net/projects/mingw-w64/files/Toolchains%20targetting%20Win32/Personal%20Builds/mingw-builds/installer/mingw-w64-install.exe/download)
  -  Installation z.B. unter `C:\mingw64`: Dann muss folgender Pfad im Windows `PATH` angegeben werden: `C:\mingw64\bin`
  -  Überprüfen der Installation im Windows Terminal mit `g++ --version`
-  Installation über MSYS2 (Paket Manager für Windows)
    - [Download](https://www.msys2.org/) 
    - `msys2-x86_64-20210725.exe` runterladen, installieren und ausführen
    - Paketmanager `pacman` aktualiseren: `pacman -Syu` (falls das Programm schließt erneut öffnen)
    - Den Rest aktualiseren `pacman -Su`
    - Danach development tools und die minGW toolchain installieren: `pacman -S --needed base-devel mingw-w64-x86_64-toolchain`
      - Die Eingabeaufforderung beide Male mit Enter Taste bestätigen und alle Pakete installieren (Ist zwar etwas größer, dafür werden einige Tools mit geliefert)
    - make installieren `pacman -S make`
    - minGW Installation im Windows `PATH` eintragen: `<MSYS2 root>/mingw64/bin`
- Videos:
  - [minGW installieren](https://youtu.be/nHQ9DdLISqY)
  - [VsCode mit C++ konfigurieren](https://youtu.be/FysIjYNbhgw)

# SDL3 Kickstart

The start point for a new game project using the [SDL3](https://wiki.libsdl.org/SDL3/NewFeatures)
library.

## Requirements

- [Python 3](https://www.python.org/downloads/)
- [Conan](https://docs.conan.io/2/installation.html)
- [Meson](https://mesonbuild.com/Quick-guide.html)
- [Ninja](https://ninja-build.org/)

## Getting started

### 1. Install Conan dependencies

```sh
conan install . -of build/
```

### 2. Configure Meson project

```sh
meson setup --native-file build/conan_meson_native.ini . build/
```

### 3. Compile the project

```sh
meson compile -C build
```

### 4. Run the project

```sh
./build/sdl3-kickstart
```

## 步骤
<!-- vim-markdown-toc GFM -->

* [创建src文件夹](#创建src文件夹)
* [编写CMakeLists.txt](#编写cmakeliststxt)
* [编写build.sh](#编写buildsh)

<!-- vim-markdown-toc -->
### 创建src文件夹
```bash
mkdir src
```
`src` 存放你所有的源代码

### 编写CMakeLists.txt
```cmake
cmake_minimum_required (VERSION 3.5)

project (HelloWorld)

set (CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -Werror -std=c++11")
set (source_dir "${PROJECT_SOURCE_DIR}/src/")

file (GLOB source_files "${source_dir}/*.cpp")
add_executable (HelloWorld ${source_files})
```
**project:** (你的项目名字)


### 编写build.sh
```bash
#!/bin/sh
cmake .
```
1. 生成makefile文件

```bash
./build.sh
```

2. 编译

```bash
make
```

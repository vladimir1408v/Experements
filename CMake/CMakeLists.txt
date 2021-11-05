cmake_minimum_required(VERSION 2.8) # Проверка версии CMake

set(LIBRARY_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/.build/temp/lib/)
set(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin/)

include_directories(./src/headers)
AUX_SOURCE_DIRECTORY(./src/sources SOURCE)

add_executable(main ${SOURCE})		# Создает исполняемый файл с именем main

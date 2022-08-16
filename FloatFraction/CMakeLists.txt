cmake_minimum_required(VERSION 3.0)	 # Проверка версии CMake.
										# Если версия установленой программы
										# старее указаной, произайдёт аварийный выход.

project(FractionUnits)			# Название проекта

set(SOURCE_EXE FractionUnits1.cpp)		# Установка переменной со списком исходников для исполняемого файла

set(SOURCE_LIB Fraction.cpp)			# Тоже самое, но для библиотеки

set(HEADER Fract.h)

add_library(Fraction STATIC ${SOURCE_LIB})	# Создание статической библиотеки с именем foo

add_executable(FractionUnits1 ${SOURCE_EXE})	# Создает исполняемый файл с именем main

target_link_libraries(FractionUnits1 Fraction)		# Линковка программы с библиотекой
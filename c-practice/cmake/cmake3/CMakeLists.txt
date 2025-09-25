cmake_minimum_required(VERSION 3.16.3)
project(cmake3 C)
set(SOURCES
	fun/app.c
	fun/ssb.c
	fun/mml.c
	src/main.c
	inc/math.h
	)
add_executable(app ${SOURCES})

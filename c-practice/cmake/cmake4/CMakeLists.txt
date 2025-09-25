cmake_minimum_required(VERSION 3.16.3)
project(cmake4 C)
set(SOURCES
        src/main.c
        )

set(FUN
	fun/ad.c
	fun/su.c
	fun/mu.c
	)
set(HEADERS
	inc/aa.h
	)
add_executable(aaa ${SOURCES}  ${FUN} ${HEADERS})
target_include_directories(aaa PRIVATE inc)

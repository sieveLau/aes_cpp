cmake_minimum_required(VERSION 3.16)

if(TARGET aes)
    return()
endif()

project(aescpp)

set(CXX_STANDARD 17)

find_package(OpenSSL REQUIRED)

add_library(aescpp STATIC aes.hpp aes.cpp ${OPENSSL_LIBRARIES})
project(app)

cmake_minimum_required(VERSION 3.16)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

include_directories(
    src
    src/Certificate
    src/Database
)

#Build library 
add_library(CertificateService OBJECT src/Certificate/Certificate.cpp)
add_library(DatabaseService OBJECT src/Database/DatabaseService.cpp)

add_library(imsf_fsp src/FSPImpl.cpp)
target_link_libraries(imsf_fsp PRIVATE CertificateService DatabaseService)


PROJECT(runtime)
CMAKE_MINIMUM_REQUIRED(VERSION 2.6) 

file(GLOB runtime_head_file ./ .//*.h)

AUX_SOURCE_DIRECTORY(./ runtime_SRC)

SET(header_files
    ${runtime_head_file}
)


SET(SRC_LIST 
    ${runtime_SRC}
)

ADD_LIBRARY(runtime ${SRC_LIST} ${header_files})
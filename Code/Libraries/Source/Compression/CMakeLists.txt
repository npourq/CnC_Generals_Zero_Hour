add_library(Compression STATIC
    # EAC
    EAC/btreeabout.cpp
    EAC/btreedecode.cpp
    EAC/btreeencode.cpp
    EAC/huffabout.cpp
    EAC/huffdecode.cpp
    EAC/huffencode.cpp
    EAC/refabout.cpp
    EAC/refdecode.cpp
    EAC/refencode.cpp

    # LZHCompress
    LZHCompress/CompLibSource/Huff.cpp
    LZHCompress/CompLibSource/Lz.cpp
    LZHCompress/CompLibSource/Lzhl.cpp
    LZHCompress/CompLibSource/Lzhl_tcp.cpp
    LZHCompress/NoxCompress.cpp

    # Zlib
    Zlib/adler32.c
    Zlib/compress.c
    Zlib/crc32.c
    Zlib/deflate.c
    Zlib/gzio.c
    Zlib/infblock.c
    Zlib/infcodes.c
    Zlib/inffast.c
    Zlib/inflate.c
    Zlib/inftrees.c
    Zlib/infutil.c
    Zlib/maketree.c
    Zlib/trees.c
    Zlib/uncompr.c
    Zlib/zutil.c

    # Top-level
    CompressionManager.cpp
)

set_target_properties(Compression PROPERTIES
    ${GNG_GLOBAL_PROPERTIES}
 )

target_include_directories(Compression PRIVATE
    ${CMAKE_CURRENT_SOURCE_DIR}/../../include
)

target_compile_definitions(Compression PRIVATE
    ${GNG_COMPILE_DEFINITIONS}
)

target_compile_options(Compression PRIVATE
    ${GNG_COMPILE_OPTIONS}
)

target_link_options(Compression PRIVATE
    ${GNG_LINK_OPTIONS}
)

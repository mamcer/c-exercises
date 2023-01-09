# C

Some resolutions of exercises in C to help a family member who is taking his first steps in programming

## command line

    gcc -v 

you should see something like

    Using built-in specs.
    COLLECT_GCC=gcc
    COLLECT_LTO_WRAPPER=/usr/lib/gcc/x86_64-linux-gnu/11/lto-wrapper
    OFFLOAD_TARGET_NAMES=nvptx-none:amdgcn-amdhsa
    OFFLOAD_TARGET_DEFAULT=1
    Target: x86_64-linux-gnu
    Configured with: ../src/configure -v --with-pkgversion='Ubuntu 11.3.0-1ubuntu1~22.04' --with-bugurl=file:///usr/share/  doc/gcc-11/README.Bugs --enable-languages=c,ada,c++,go,brig,d,fortran,objc,obj-c++,m2 --prefix=/usr   --with-gcc-major-version-only --program-suffix=-11 --program-prefix=x86_64-linux-gnu- --enable-shared     --enable-linker-build-id --libexecdir=/usr/lib --without-included-gettext --enable-threads=posix --libdir=/usr/lib  --enable-nls --enable-bootstrap --enable-clocale=gnu --enable-libstdcxx-debug --enable-libstdcxx-time=yes    --with-default-libstdcxx-abi=new --enable-gnu-unique-object --disable-vtable-verify --enable-plugin    --enable-default-pie --with-system-zlib --enable-libphobos-checking=release --with-target-system-zlib=auto     --enable-objc-gc=auto --enable-multiarch --disable-werror --enable-cet --with-arch-32=i686 --with-abi=m64   --with-multilib-list=m32,m64,mx32 --enable-multilib --with-tune=generic --enable-offload-targets=nvptx-none=/build/   gcc-11-xKiWfi/gcc-11-11.3.0/debian/tmp-nvptx/usr,amdgcn-amdhsa=/build/gcc-11-xKiWfi/gcc-11-11.3.0/debian/tmp-gcn/usr   --without-cuda-driver --enable-checking=release --build=x86_64-linux-gnu --host=x86_64-linux-gnu  --target=x86_64-linux-gnu --with-build-config=bootstrap-lto-lean --enable-link-serialization=2
    Thread model: posix
    Supported LTO compression algorithms: zlib zstd
    gcc version 11.3.0 (Ubuntu 11.3.0-1ubuntu1~22.04) 

compile a program

General information

## basic types

| Type | Explanation| Minimum size \(bits\)| Format specifier| Range| Suffix for decimal constants |
| ---|---|---|---|---|---|
| char | Smallest addressable unit of the machine that can contain basic character set\. It is an integer type\. Actual type can be either signed or unsigned\. It contains CHAR\_BIT bits\.&\#91;3&\#93; | 8 | %c | CHAR\_MIN / CHAR\_MAX | n/a | 
| signed char | Of the same size as char, but guaranteed to be signed\. Capable of containing at least the \[−127,&\#160;\+127\] range\.&\#91;3&\#93;&\#91;a&\#93; | 8 | %c \(or %hhi for numerical output\) | SCHAR\_MIN / SCHAR\_MAX&\#91;5&\#93; | n/a
| unsigned char | Of the same size as char, but guaranteed to be unsigned\. Contains at least the \[0,&\#160;255\] range\.&\#91;6&\#93; | 8 | %c \(or %hhu for numerical output\) | 0 / UCHAR\_MAX | n/a
| short short int signed short signed short int | Short signed integer type\. Capable of containing at least the \[−32,767,&\#160;\+32,767\] range\.&\#91;3&\#93;&\#91;a&\#93; | 16 | %hi or %hd | SHRT\_MIN / SHRT\_MAX | n/a
| unsigned short unsigned short int | Short unsigned integer type\. Contains at least the \[0, 65,535\] range\.&\#91;3&\#93; | 16 | %hu | 0 / USHRT\_MAX | n/a
| int signed signed int | Basic signed integer type\. Capable of containing at least the \[−32,767,&\#160;\+32,767\] range\.&\#91;3&\#93;&\#91;a&\#93; | 16 | %i or %d | INT\_MIN / INT\_MAX | none
| unsigned unsigned int | Basic unsigned integer type\. Contains at least the \[0, 65,535\] range\.&\#91;3&\#93; | 16 | %u | 0 / UINT\_MAX | u or U
| long long int signed long signed long int | Long signed integer type\. Capable of containing at least the \[−2,147,483,647,&\#160;\+2,147,483,647\] range\.&\#91;3&\#93;&\#91;a&\#93; | 32 | %li or %ld | LONG\_MIN / LONG\_MAX | l or L&\#91;7&\#93;
| unsigned long unsigned long int | Long unsigned integer type\. Capable of containing at least the \[0, 4,294,967,295\] range\.&\#91;3&\#93; | 32 | %lu | 0 / ULONG\_MAX | both u or U and l or L
| long long long long intsigned long long signed long long int | Long long signed integer type\. Capable of containing at least the \[−9,223,372,036,854,775,807,&\#160;\+9,223,372,036,854,775,807\] range\.&\#91;3&\#93;&\#91;a&\#93; Specified since the C99 version of the standard\. | 64 | %lli or %lld | LLONG\_MIN / LLONG\_MAX | ll or LL
| unsigned long long unsigned long long int | Long long unsigned integer type\. Contains at least the \[0, \+18,446,744,073,709,551,615\] range\.&\#91;3&\#93; Specified since the C99 version of the standard\. | 64 | %llu | 0 / ULLONG\_MAX | both u or U and ll or LL
| float | Real floating\-point type, usually referred to as a single\-precision floating\-point type\. Actual properties unspecified \(except minimum limits\); however, on most systems, this is the IEEE 754 single\-precision binary floating\-point format \(32 bits\)\. This format is required by the optional Annex F "IEC 60559 floating\-point arithmetic"\. | | Converting from text:&\#91;b&\#93;%f %F%g %G%e %E%a %A | | f or F
| double | Real floating\-point type, usually referred to as a double\-precision floating\-point type\. Actual properties unspecified \(except minimum limits\); however, on most systems, this is the IEEE 754 double\-precision binary floating\-point format \(64 bits\)\. This format is required by the optional Annex F "IEC 60559 floating\-point arithmetic"\ | | %lf %lF%lg %lG%le %lE%la %lA&\#91;c&\#93; | |
| long double | Real floating\-point type, usually mapped to an extended precision floating\-point number format\. Actual properties unspecified\. It can be either x86 extended\-precision floating\-point format \(80 bits, but typically 96 bits or 128 bits in memory with padding bytes\), the non\-IEEE "double\-double" \(128 bits\), IEEE 754 quadruple\-precision floating\-point format \(128 bits\), or the same as double\. See the article on long double for details\. | | %Lf %LF%Lg %LG%Le %LE%La %LA&\#91;c&\#93; | l or L
 
> more info: [wikipedia](https://en.wikipedia.org/wiki/C_data_types)
                        
## scanf format string

| format | description |
| -- | -- |
| %a | Scan a floating-point number in its hexadecimal notation. |
| %d | Scan an integer as a signed decimal number. |
| %i | Scan an integer as a signed number. Similar to %d, but interprets the number as hexadecimal when precededby 0x and octal when preceded by 0. For example, the string 031 would be read as 31 using %d, and 25 using %i.The flag h in %hi indicates conversion to a short and hh conversion to a char. |
| %u | Scan for decimal unsigned int (Note that in the C99 standard the input value minus sign is optional, so ifa minus sign is read, no errors will arise and the result will be the two's complement of a negative number,likely a very large value. See strtoul().[failed verification]) Correspondingly, %hu scans for an unsignedshort and %hhu for an unsigned char. |
| %f | Scan a floating-point number in normal (fixed-point) notation. |
| %g, %G | Scan a floating-point number in either normal or exponential notation. %g uses lower-case letters and%G uses upper-case. |
| %x, %X | Scan an integer as an unsigned hexadecimal number. |
| %o | Scan an integer as an octal number. |
| %s | Scan a character string. The scan terminates at whitespace. A null character is stored at the end of thestring, which means that the buffer supplied must be at least one character longer than the specified inputlength. |
| %c | Scan a character (char). No null character is added. |
| whitespace | Any whitespace characters trigger a scan for zero or more whitespace characters. The number andtype of whitespace characters do not need to match in either direction. |
| %lf | Scan as a double floating-point number. "Float" format with the "long" specifier. |
| %Lf | Scan as a long double floating-point number. "Float" format the "long long" specifier. |
| %n | Nothing is expected. The number of characters consumed thus far from the input is stored through the nextpointer, which must be a pointer to int. This is not a conversion and does not increase the count returned bythe function. |

> source: [wikipedia](https://en.wikipedia.org/wiki/Scanf_format_string)

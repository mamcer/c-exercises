# C

## basic types

| type | size | value range | 
| -- | -- | -- |
| char 	| 1 byte | -128 to 127 or 0 to 255 | 
| unsigned char | 1 byte | 0 to 255 | 
| signed char | 1 byte | -128 to 127 | 
| int | 2 or 4 bytes | -32,768 to 32,767 or -2,147,483,648 to 2,147,483,647 |
| unsigned int | 2 or 4 bytes | 0 to 65,535 or 0 to 4,294,967,295 |
| short | 2 bytes | -32,768 to 32,767 |
| unsigned short | 2 bytes | 0 to 65,535 |
| long  | 8 bytes or (4bytes for 32 bit OS) | -9223372036854775808 to 9223372036854775807 |
| unsigned long | 8 bytes | 0 to 18446744073709551615 |

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

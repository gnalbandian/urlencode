#ifndef _PLAGEOJ_URLENCODE_H
#define _PLAGEOJ_URLENCODE_H


#include <string>

// #include <cstddef>

/**
 * Percent-encodes a UTF-8 string.
 *
 * @param input      Null-terminated input string.
 * @param output     Output buffer for the percent-encoded string.
 * @param outputSize Size of the output buffer in bytes.
 * @return           Number of characters written (excluding the terminating null),
 *                   or -1 if the output buffer is too small.
 */
std::string urlEncode(const std::string &msg);
std::string urlEncode(const char *msg);

#endif // URL_ENCODE_HPP

// #endif // URL_ENCODE_H

// // #include <Arduino.h>

// /**
//  * Percent-encodes a string.
//  * @param msg UTF-8 string to encode.
//  * @returns Percent-encoded string.
//  */
// String urlEncode(const char *msg);

// /**
//  * Percent-encodes a string.
//  * @param msg UTF-8 string to encode.
//  * @returns Percent-encoded string.
//  */
// String urlEncode(String msg);

// #endif
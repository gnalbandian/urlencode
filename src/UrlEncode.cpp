#include "UrlEncode.h"
#include <string>



#include "UrlEncode.h"
// #include <cstdio>  // For snprintf
#include <string.h>

std::string urlEncode(const char *msg) {
  const char *hex = "0123456789ABCDEF";
  std::string encodedMsg;
  // Optionally reserve capacity: 3 times the input length (worst case)
  encodedMsg.reserve(strlen(msg) * 3);

  while (*msg != '\0') {
      // Check if the character is unreserved
      if (('a' <= *msg && *msg <= 'z') ||
          ('A' <= *msg && *msg <= 'Z') ||
          ('0' <= *msg && *msg <= '9') ||
          *msg == '-' || *msg == '_' || *msg == '.' || *msg == '~') {
          encodedMsg.push_back(*msg);
      } else {
          // Percent-encode reserved or unsafe characters
          encodedMsg.push_back('%');
          encodedMsg.push_back(hex[(unsigned char)*msg >> 4]);
          encodedMsg.push_back(hex[(unsigned char)*msg & 0x0F]);
      }
      msg++;
  }
  return encodedMsg;
}

// Overload for std::string input
std::string urlEncode(const std::string &msg) {
  return urlEncode(msg.c_str());
}


// String urlEncode(const char *msg) {
//   const char *hex = "0123456789ABCDEF";
//   String encodedMsg = "";

//   while (*msg != '\0') {
//     if (
//         ('a' <= *msg && *msg <= 'z') || ('A' <= *msg && *msg <= 'Z') || ('0' <= *msg && *msg <= '9') || *msg == '-' || *msg == '_' || *msg == '.' || *msg == '~') {
//       encodedMsg += *msg;
//     } else {
//       encodedMsg += '%';
//       encodedMsg += hex[(unsigned char)*msg >> 4];
//       encodedMsg += hex[*msg & 0xf];
//     }
//     msg++;
//   }
//   return encodedMsg;
// }

// String urlEncode(String msg) {
//   return urlEncode(msg.c_str());
// }
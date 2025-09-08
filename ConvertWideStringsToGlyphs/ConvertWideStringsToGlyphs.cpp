#include <iostream>  // I/O 
#include <locale>    // internationalize 
#include <codecvt>   // convert char codes 

// utf-16 to utf-8 
static std::string to_string(const std::wstring& wstr) {

  static std::wstring_convert<std::codecvt_utf8<wchar_t>, wchar_t >converter;

  return converter.to_bytes(wstr);
}

//  
int main() {
  std::wstring ws = L"\u2020\u2021 \u2126 == x\u2074";

  std::cout << to_string(ws) << '\n';

  return 0;
}
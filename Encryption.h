#ifndef _Encryption_Encryption_h
#define _Encryption_Encryption_h

#include <Core/Core.h>

using namespace Upp;

void xor_encryption(String key, String *data);
void xor_dencryption(String key, String *data);
void xor_encryption(String key, Vector<byte> *data);
void xor_dencryption(String key, Vector<byte> *data);

Vector<byte> StringTovectorbyte(String str);
String VectorbyteToString(Vector<byte> root);

#endif

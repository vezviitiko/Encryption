#ifndef _Encryption_Encryption_h
#define _Encryption_Encryption_h

#include <Core/Core.h>

using namespace Upp;

String xor_coding(String key, String data);
void xor_coding(String key, Vector<byte> *data);

Vector<byte> StringTovectorbyte(String str);
String VectorbyteToString(Vector<byte> root);

#endif

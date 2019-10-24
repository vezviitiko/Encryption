#include "Encryption.h"

void xor_coding(String key, Vector<byte> *data){
    for (size_t i = 0; i != data->GetCount(); i++){
        data->At(i) ^= key[ i % key.GetCount() ];
    }
}

String xor_coding(String key, String data){
	String str;
    for (size_t i = 0; i != data.GetCount(); i++){
        str.Cat(data[i] ^ key[ i % key.GetCount() ]);
    }
    return str;
}

Vector<byte> StringTovectorbyte(String str){
	Vector<byte> root;
	if (str.GetCount() > 0){
		for (long long int i = 0; i < str.GetCount(); i++){
				root.push_back(str[i]);
			}
	}else{
		RLOG("err");
	}
	return root;
}

String VectorbyteToString(Vector<byte> root){
	String str;
	if (root.GetCount() > 0){
		for (long long int i = 0; i < root.GetCount(); i++){
				str.Cat(root[i]);
			}
	}else{
		RLOG("err");
	}
	return str;
}

#include "Encryption.h"

void xor_encryption(String key, Vector<byte> *data){
	std::string str(data->begin(),data->end());
	String uppStr = str.c_str();
	xor_encryption(key, &uppStr);
	data->Clear();
	for (char a: uppStr){
		data->Add(a);
	}
}

void xor_dencryption(String key, Vector<byte> *data){
	std::string str(data->begin(),data->end());
	String uppStr = str.c_str();
	xor_dencryption(key, &uppStr);
	data->Clear();
	for (char a: uppStr){
		data->Add(a);
	}
}

//---------------------------------------------------

void xor_encryption(String key, String *data){
	String str;
	const char *iter = data->begin();
	int i = 0;
	while(iter != data->end()){
		str.Cat(*(iter) ^ key[ i % key.GetCount() ]);
		i++;
		iter++;
	}
    *data = (Encode64(str));
}

void xor_dencryption(String key, String *data){
	String str;
	*data = Decode64(*data);
	const char *iter = data->begin();
	int i = 0;
	while(iter != data->end()){
		str.Cat(*(iter) ^ key[ i % key.GetCount() ]);
		i++;
		iter++;
	}
    *data = str;
}

//---------------------------------------------------

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
